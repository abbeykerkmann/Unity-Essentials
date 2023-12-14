// Copyright (C) LEGO System A/S - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited

using UnityEngine;
using System.Collections.Generic;

namespace LEGOModelImporter
{
	/// <summary>
    /// Provides methods for many different math computations, tests and queries
    /// </summary>
	public static class MathUtils
	{
		internal class Cone
		{
			internal Vector3 origin;
			internal Vector3 direction;
			internal float angle;
			internal float cosAngle;
			internal float sinAngle;
			internal float invSinAngle;
			internal float cosAngleSqr;

			internal Cone(Vector3 origin, Vector3 direction, float angle)
			{
				this.origin = origin;
				this.direction = direction;
				this.angle = angle;
				cosAngle = Mathf.Cos(angle);
				sinAngle = Mathf.Sin(angle);
				invSinAngle = 1.0f / sinAngle;
				cosAngleSqr = cosAngle * cosAngle;
			}
		}

		//FIXME: Consider documenting/naming improvements
		/// <summary>
		/// Checks intersection of a sphere and a cone
		/// </summary>
		/// <param name="sphereRadius">The radius of the sphere</param>
		/// <param name="sphereCenter">The center of the sphere</param>
		/// <param name="cone">The cone we want to check intersection on</param>
		/// <returns></returns>
		internal static bool SphereIntersectCone(float sphereRadius, Vector3 sphereCenter, Cone cone)
		{
			// https://www.geometrictools.com/Documentation/IntersectionSphereCone.pdf
			var u = cone.origin - (sphereRadius * cone.invSinAngle) * cone.direction;
			var centerMinusU = sphereCenter - u;
			var dirDotCenterMinusU = Vector3.Dot(cone.direction, centerMinusU);
			if (dirDotCenterMinusU > 0.0f)
			{
				var sqrLengthCenterMinusU = Vector3.Dot(centerMinusU, centerMinusU);
				if (dirDotCenterMinusU * dirDotCenterMinusU >= sqrLengthCenterMinusU * cone.cosAngleSqr)
				{
					var centerMinusOrigin = sphereCenter - cone.origin;
					var dirDotCenterMinusOrigin = Vector3.Dot(cone.direction, centerMinusOrigin);

					if (dirDotCenterMinusOrigin < -sphereRadius)
					{
						return false;
					}

					var rSinAngle = sphereRadius * cone.sinAngle;
					if (dirDotCenterMinusOrigin >= -rSinAngle)
					{
						return true;
					}
					var sprLengthCenterMinusOrigin = Vector3.Dot(centerMinusOrigin, centerMinusOrigin);
					return sprLengthCenterMinusOrigin <= sphereRadius * sphereRadius;
				}
			}
			return false;
		}

		internal static Vector3 GetColumn(Matrix4x4 m, int index)
		{
			if (index > 3)
			{
				return Vector3.zero;
			}
			var column = m.GetColumn(index);
			return new Vector3(column.x, column.y, column.z);
		}

		internal static Matrix4x4 SetTranslation(Matrix4x4 source, Vector3 position)
		{
			var m = source;
			m.SetColumn(3, new Vector4(position.x, position.y, position.z, 1.0f));
			return m;
		}

		internal static Matrix4x4 RotateAround(Matrix4x4 source, Vector3 pivot, Quaternion rotation)
		{
			var pivotV4 = new Vector4(pivot.x, pivot.y, pivot.z, 0.0f);
			source.SetColumn(3, source.GetColumn(3) - pivotV4);
			var rotMatrix = Matrix4x4.Rotate(rotation);
			source = rotMatrix * source;
			source.SetColumn(3, source.GetColumn(3) + pivotV4);
			return source;
		}

		/// <summary>
        /// Get frustum planes of a perspective projection
        /// </summary>
        /// <param name="position">The position of the view</param>
        /// <param name="rotation">The rotation of the view</param>
        /// <param name="fov">The fov</param>
        /// <param name="aspect">The aspect ratio</param>
        /// <param name="near">The near plane</param>
        /// <param name="far">The far plane</param>
        /// <returns>Returns an array of planes representing the frustum planes</returns>
		internal static Plane[] GetFrustumPlanesPerspective(Vector3 position, Quaternion rotation, float fov, float aspect, float near, float far)
		{
			var direction = rotation * Vector3.forward;
			var right = rotation * Vector3.right;
			var up = rotation * Vector3.up;

			var nearCenter = position + direction * near;
			var farCenter = position + direction * far;

			var halfNearHeight = Mathf.Tan(Mathf.Deg2Rad * fov * 0.5f) * near;
			var halfNearWidth = halfNearHeight * aspect;
			var halfFarHeight = Mathf.Tan(Mathf.Deg2Rad * fov * 0.5f) * far;
			var halfFarWidth = halfFarHeight * aspect;

			var farTopLeft = farCenter + up * halfFarHeight - right * halfFarWidth;
			var farBottomLeft = farCenter - up * halfFarHeight - right * halfFarWidth;
			var farBottomRight = farCenter - up * halfFarHeight + right * halfFarWidth;
			var nearTopLeft = nearCenter + up * halfNearHeight - right * halfNearWidth;
			var nearTopRight = nearCenter + up * halfNearHeight + right * halfNearWidth;
			var nearBottomRight = nearCenter - up * halfNearHeight + right * halfNearWidth;

			Plane[] planes =
			{
			new Plane(nearTopLeft, farTopLeft, farBottomLeft),          // Left
            new Plane(nearTopRight, nearBottomRight, farBottomRight),   // Right
            new Plane(farBottomLeft, farBottomRight, nearBottomRight),  // Bottom
            new Plane(farTopLeft, nearTopLeft, nearTopRight),           // Top
            new Plane(nearBottomRight, nearTopRight, nearTopLeft),      // Near
            new Plane(farBottomRight, farBottomLeft, farTopLeft)        // Far
        };

			return planes;
		}

		/// <summary>
        /// Get frustum planes of an orthographic projection
        /// </summary>
        /// <param name="position">The position of the view</param>
        /// <param name="rotation">The rotation of the view</param>
        /// <param name="size">The size of the orthographic view</param>
        /// <param name="aspect">The aspect ratio</param>
        /// <param name="near">The near plane</param>
        /// <param name="far">The far plane</param>
        /// <returns>Returns an array of planes representing the orthographic frustum</returns>
		internal static Plane[] GetFrustumPlanesOrtho(Vector3 position, Quaternion rotation, float size, float aspect, float near, float far)
		{
			var direction = rotation * Vector3.forward;
			var right = rotation * Vector3.right;
			var up = rotation * Vector3.up;

			var nearCenter = position + direction * near;
			var farCenter = position + direction * far;

			var halfHeight = size;
			var halfWidth = halfHeight * aspect;

			var farTopLeft = farCenter + up * halfHeight - right * halfWidth;
			var farBottomLeft = farCenter - up * halfHeight - right * halfWidth;
			var farBottomRight = farCenter - up * halfHeight + right * halfWidth;
			var nearTopLeft = nearCenter + up * halfHeight - right * halfWidth;
			var nearTopRight = nearCenter + up * halfHeight + right * halfWidth;
			var nearBottomRight = nearCenter - up * halfHeight + right * halfWidth;

			Plane[] planes =
			{
				new Plane(nearTopLeft, farTopLeft, farBottomLeft),          // Left
				new Plane(nearTopRight, nearBottomRight, farBottomRight),   // Right
				new Plane(farBottomLeft, farBottomRight, nearBottomRight),  // Bottom
				new Plane(farTopLeft, nearTopLeft, nearTopRight),           // Top
				new Plane(nearBottomRight, nearTopRight, nearTopLeft),      // Near
				new Plane(farBottomRight, farBottomLeft, farTopLeft)        // Far
			};

			return planes;
		}


		/// <summary>
        /// Snap a vector to its major axis
        /// </summary>
        /// <param name="v">The input vector</param>
        /// <param name="keepSign">Whether or not to keep the sign of the snapped axis</param>
        /// <returns>Returns a vector with all axes zero except for th major axis</returns>
		public static Vector3 SnapMajorAxis(Vector3 v, bool keepSign)
		{
			Vector3 snapped = Vector3.zero;
			float x = Mathf.Abs(v.x);
			float y = Mathf.Abs(v.y);
			float z = Mathf.Abs(v.z);
			if (x > y && x > z)
			{
				snapped.x = Mathf.Sign(v.x);
			}
			else if (y > z)
			{
				snapped.y = Mathf.Sign(v.y);
			}
			else
			{
				snapped.z = Mathf.Sign(v.z);
			}
			if (!keepSign)
			{
				snapped.x = Mathf.Abs(snapped.x);
				snapped.y = Mathf.Abs(snapped.y);
				snapped.z = Mathf.Abs(snapped.z);
			}
			return snapped;
		}

		/// <summary>
        /// Possible directions of a vector
        /// </summary>
		public enum VectorDirection
		{
			/// <summary>
            /// Up direction
            /// </summary>
			Up,

			/// <summary>
            /// Right direction
            /// </summary>
			Right,

			/// <summary>
            /// Forward direction
            /// </summary>
			Forward,

			/// <summary>
            /// Down direction
            /// </summary>
			Down,

			/// <summary>
            /// Left direction
            /// </summary>
			Left,

			/// <summary>
            /// Back direction
            /// </summary>
			Back
		}

		/// <summary>
        /// Find axis of an array of axes that is closest to a given axis
        /// </summary>
        /// <param name="source">The source axes to check</param>
        /// <param name="axis">The axis to align to</param>
        /// <returns>Return the closest axis from the array</returns>
		public static Vector3 FindClosestAxis(Vector3[] source, Vector3 axis)
		{
			var smallestAngle = float.PositiveInfinity;
			var smallestAxis = Vector3.zero;
			foreach (var sourceAxis in source)
			{
				var angle = Vector3.Angle(sourceAxis, axis);
				if (angle < smallestAngle)
				{
					smallestAngle = angle;
					smallestAxis = sourceAxis;
				}
			}
			return smallestAxis;
		}

		/// <summary>
        /// Find the closest axis of a transform to anotheraxis
        /// </summary>
        /// <param name="transform">The transform</param>
        /// <param name="axis">The axis to align to</param>
        /// <param name="direction">Out parameter corresponding to the direction of the transform that is closests</param>
        /// <returns>Returns the closest axis in the transform</returns>
		public static Vector3 FindClosestAxis(Transform transform, Vector3 axis, out VectorDirection direction)
		{
			var sourceRight = transform.right;
			var sourceUp = transform.up;
			var sourceForward = transform.forward;
			var sourceLeft = -sourceRight;
			var sourceDown = -sourceUp;
			var sourceBack = -sourceForward;

			var rightAngle = Vector3.Angle(sourceRight, axis);
			var upAngle = Vector3.Angle(sourceUp, axis);
			var forwardAngle = Vector3.Angle(sourceForward, axis);
			var leftAngle = Vector3.Angle(sourceLeft, axis);
			var downAngle = Vector3.Angle(sourceDown, axis);
			var backAngle = Vector3.Angle(sourceBack, axis);

			var axisAngles = new (Vector3, float, VectorDirection)[6]{(sourceRight, rightAngle, VectorDirection.Right), (sourceUp, upAngle, VectorDirection.Up), (sourceForward, forwardAngle, VectorDirection.Forward),
			(sourceLeft, leftAngle, VectorDirection.Left), (sourceDown, downAngle, VectorDirection.Down), (sourceBack, backAngle, VectorDirection.Back)};
			var chosenIndex = -1;
			var smallestAngle = float.PositiveInfinity;
			for (var i = 0; i < axisAngles.Length; i++)
			{
				if (axisAngles[i].Item2 < smallestAngle)
				{
					smallestAngle = axisAngles[i].Item2;
					chosenIndex = i;
				}
			}

			direction = axisAngles[chosenIndex].Item3;
			return axisAngles[chosenIndex].Item1;
		}

		/// <summary>
        /// Get axes related to a vector direction
        /// </summary>
        /// <param name="source">The source transform to get the axes from</param>
        /// <param name="direction">The direction to find related axes to</param>
        /// <returns>Returns a pair of axes corresponding to the two related axes</returns>
		public static (Vector3, Vector3) GetRelatedAxes(Transform source, VectorDirection direction)
		{
			switch (direction)
			{
				case VectorDirection.Up:
					return (source.right, source.forward);
				case VectorDirection.Right:
					return (source.up, source.forward);
				case VectorDirection.Forward:
					return (source.up, source.right);
				case VectorDirection.Left:
					return (-source.up, -source.forward);
				case VectorDirection.Down:
					return (-source.right, -source.forward);
				case VectorDirection.Back:
					return (-source.up, -source.right);
			}
			return (Vector3.zero, Vector3.zero);
		}

		/// <summary>
		/// Align the closest of a selection of axes to a destination matrix
		/// </summary>
		/// <param name="destination">The matrix to align to</param>
        /// <param name="axisA">The first axis to check</param>
        /// <param name="axisB">The second axis to check</param>
		/// <returns></returns>
		public static Quaternion AlignRotation(Matrix4x4 destination, Vector3 axisA, Vector3 axisB)
		{
			var inverseDst = destination.inverse;

            var localAxisA = inverseDst.MultiplyVector(axisA);
            var snappedLocalAxisA = SnapMajorAxis(localAxisA, true);
            var snappedWorldA = destination.MultiplyVector(snappedLocalAxisA);

            var dotA = Vector3.Dot(axisA, snappedWorldA);

			var localAxisB = inverseDst.MultiplyVector(axisB);
            var snappedLocalAxisB = SnapMajorAxis(localAxisB, true);
            var snappedWorldB = destination.MultiplyVector(snappedLocalAxisB);

            var dotB = Vector3.Dot(axisB, snappedWorldB);
            if (dotA > dotB)
            {
				return Quaternion.FromToRotation(axisA, snappedWorldA);
            }
			return Quaternion.FromToRotation(axisB, snappedWorldB);
        }

        internal static Quaternion AlignRotation(Matrix4x4 destination, Vector3 axis)
        {
            var inverseDst = destination.inverse;

            var localAxis = inverseDst.MultiplyVector(axis);
            var snappedAxis = SnapMajorAxis(localAxis, true);
            var snappedWorld = destination.MultiplyVector(snappedAxis);

            return Quaternion.FromToRotation(axis, snappedWorld);
        }

        /// <summary>
        /// Get a rotation to align the right or forward axis of the source matrix with a destination matrix
        /// </summary>
        /// <param name="source">The matrix to align</param>
        /// <param name="destination">The matrix to align with</param>
        /// <returns></returns>
        internal static Quaternion AlignRotation(Matrix4x4 source, Matrix4x4 destination)
        {
			var right = source.GetColumn(0);
			var forward = source.GetColumn(2);
			return AlignRotation(destination, right, forward);
        }

		internal static void QuaternionNormalize(ref Quaternion q)
		{
			float invMag = 1.0f / Mathf.Sqrt(q.x * q.x + q.y * q.y + q.z * q.z + q.w * q.w);
			q.x *= invMag;
			q.y *= invMag;
			q.z *= invMag;
			q.w *= invMag;
		}

		static internal Quaternion MatrixToQuaternion(Matrix4x4 mat)
		{
			return MatrixToQuaternion(mat.GetRow(0), mat.GetRow(1), mat.GetRow(2));
		}

		static internal Quaternion MatrixToQuaternion(Vector3 i, Vector3 j, Vector3 k)
		{
			float tr = i.x + j.y + k.z;
			float s;
			Quaternion q = new Quaternion();

			if (tr >= 0)
			{
				s = Mathf.Sqrt(tr + 1);
				q.w = 0.5f * s;
				s = 0.5f / s;
				q.x = (k.y - j.z) * s;
				q.y = (i.z - k.x) * s;
				q.z = (j.x - i.y) * s;
			}
			else
			{
				int t = 0;
				if (j.y > i.x) t = 1;

				if (t == 0)
				{
					if (k.z > i.x) t = 2;
				}
				else
				{
					if (k.z > j.y) t = 2;
				}

				switch (t)
				{
					case 0:
						s = Mathf.Sqrt((i.x - (j.y + k.z)) + 1);
						q.x = 0.5f * s;
						s = 0.5f / s;
						q.y = (i.y + j.x) * s;
						q.z = (k.x + i.z) * s;
						q.w = (k.y - j.z) * s;
						break;
					case 1:
						s = Mathf.Sqrt((j.y - (k.z + i.x)) + 1);
						q.y = 0.5f * s;
						s = 0.5f / s;
						q.z = (j.z + k.y) * s;
						q.x = (i.y + j.x) * s;
						q.w = (i.z - k.x) * s;
						break;
					case 2:
						s = Mathf.Sqrt((k.z - (i.x + j.y)) + 1);
						q.z = 0.5f * s;
						s = 0.5f / s;
						q.x = (k.x + i.z) * s;
						q.y = (j.z + k.y) * s;
						q.w = (j.x - i.y) * s;
						break;
				}
			}

			QuaternionNormalize(ref q);

			return q;
		}

		internal static Vector3 IntersectRayPlane(Ray ray, Vector3 position)
		{
			return IntersectRayPlane(ray, position, Vector3.forward);
		}

		internal static Vector3 IntersectRayPlane(Ray ray, Vector3 position, Vector3 normal)
		{
			Plane plane = new Plane(normal, position);
            if (plane.Raycast(ray, out float enter))
            {
                return ray.origin + ray.direction * enter;
            }
            return ray.origin + ray.direction;
		}

		internal static Vector3 IntersectRayPlane(Ray ray, Plane plane)
		{
            if (plane.Raycast(ray, out float enter))
            {
                return ray.origin + ray.direction * enter;
            }
            return ray.origin + ray.direction;
		}

		// Closest point
		internal static bool ClosestPtRaySphere(Ray ray, Vector3 sphereOrigin, float sphereRadius, ref float t, ref Vector3 q)
		{
			Vector3 m = ray.origin - sphereOrigin;
			float b = Vector3.Dot(m, ray.direction);
			float c = Vector3.Dot(m, m) - (sphereRadius * sphereRadius);
			// Exit if r's origin outside s (c > 0) and r pointing away from s (b > 0)
			if ((c > 0.0f) && (b > 0.0f))
			{
				// ray origin is closest
				t = 0.0f;
				q = ray.origin;
				return true;
			}

			float discr = (b * b) - c;

			// A negative discriminant corresponds to ray missing sphere
			if (discr < 0.0f)
			{
				discr = 0.0f;
			}

			// Ray now found to intersect sphere, compute smallest t value of intersection
			t = -b - Mathf.Sqrt(discr);

			// If t is negative, ray started inside sphere so clamp t to zero
			if (t < 0.0f) t = 0.0f;
			q = ray.origin + t * ray.direction;
			return true;
		}

		// http://geomalgorithms.com/a07-_distance.html
		internal static bool ClosestLineSegmentLineSegment(Vector3 p1, Vector3 p2, Vector3 p3, Vector3 p4, out Vector3 pa, out Vector3 pb, out float mua, out float mub)
		{
			var p21 = p2 - p1;
			var p43 = p4 - p3;
			var p13 = p1 - p3;

			var d2121 = Vector3.Dot(p21, p21);
			var d4321 = Vector3.Dot(p21, p43);
			var d4343 = Vector3.Dot(p43, p43);
			var d1321 = Vector3.Dot(p21, p13);
			var d1343 = Vector3.Dot(p43, p13);
			var D = d2121 * d4343 - d4321 * d4321;
			mua = D;
			mub = D;

			// Fixme: Add fix for D < float.Epsilon

            var sD = D;
			var tD = D;

			var sN = (d4321 * d1343 - d4343 * d1321);
			var tN = (d2121 * d1343 - d4321 * d1321);
			if (sN < 0.0f)
            {
				sN = 0.0f;
				tN = d1343;
				tD = d4343;
            }
			else if(sN > sD)
            {
				sN = sD;
				tN = d1343 + d4321;
				tD = d4343;
            }

			if(tN < 0.0f)
            {
				tN = 0.0f;
				if(-d1321 < 0.0f)
                {
					sN = 0.0f;
                }
				else if(-d1321 > d2121)
                {
					sN = sD;
                }
				else
                {
					sN = -d1321;
					sD = d2121;
                }
            }
			else if (tN > tD)
            {
				tN = tD;
				if((-d1321 + d4321) < 0.0f)
                {
					sN = 0.0f;
                }
				else if((-d1321 + d4321) > d2121)
                {
					sN = sD;
                }
				else
                {
					sN = (-d1321 + d4321);
					sD = d2121;
                }
            }

			mua = (Mathf.Abs(sN) < float.Epsilon ? 0.0f : sN / sD);
			mub = (Mathf.Abs(tN) < float.Epsilon ? 0.0f : tN / tD);

			pa = p1 + mua * p21;
			pb = p3 + mub * p43;
			
			return true;
		}

		internal static float DistanceSquared(Vector3 p, Vector3 q)
		{
			var xx = p.x - q.x;
			var yy = p.y - q.y;
			var zz = p.z - q.z;
			return xx * xx + yy * yy + zz * zz;
		}

		/// <summary>
        /// Computes the area of a triangle given three vertices
        /// </summary>
        /// <param name="a">First vertex</param>
        /// <param name="b">Second vertex</param>
        /// <param name="c">Third vertex</param>
        /// <returns>Returns the triangle area</returns>
		internal static float TriangleArea(Vector3 a, Vector3 b, Vector3 c)
		{
			return Vector3.Cross(b - a, c - a).magnitude * 0.5f;
		}

		/// <summary>
		/// Computes the normal of a triangle given three vertices
		/// </summary>
		/// <param name="a">First vertex</param>
		/// <param name="b">Second vertex</param>
		/// <param name="c">Third vertex</param>
		/// <returns>Returns the triangle normal</returns>
		internal static Vector3 TriangleNormal(Vector3 a, Vector3 b, Vector3 c)
		{
			return Vector3.Cross(b - a, c - a).normalized;
		}

		internal static Vector3 Round(Vector3 a)
		{
			return new Vector3(Mathf.Round(a.x), Mathf.Round(a.y), Mathf.Round(a.z));
		}

	}
}