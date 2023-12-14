// Copyright (C) LEGO System A/S - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited

using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

namespace LEGOMaterials
{
    /// <summary>
    /// Provides methods and enums for describing LEGO moulding colours
    /// </summary>
    public class MouldingColour
    {
        /// <summary>
        /// Options as IDs for LEGO moulding colours
        /// </summary>
        public enum Id
        {
            // Universal.
            /// <summary>White Id</summary>
            White = 1, 
            /// <summary>Brick Yellow Id</summary>
            BrickYellow = 5,
            /// <summary>Bright Red Id</summary>
            BrightRed = 21,
            /// <summary>Bright Blue Id</summary>
            BrightBlue = 23,
            /// <summary>Bright Yellow Id</summary>
            BrightYellow = 24,
            /// <summary>Black Id</summary>
            Black = 26,
            /// <summary>Dark Green Id</summary>
            DarkGreen = 28,
            /// <summary>Reddish Brown Id</summary>
            ReddishBrown = 192,
            /// <summary>Medium Stone Grey Id</summary>
            MediumStoneGrey = 194,
            /// <summary>Dark Stone Grey Id</summary>
            DarkStoneGrey = 199,

            // Generic.
            /// <summary>Nougat Id</summary>
            Nougat = 18,
            /// <summary>Bright Green Id</summary>
            BrightGreen = 37,
            /// <summary>Transparent Id</summary>
            Transparent = 40,
            /// <summary>Transparent Red Id</summary>
            TransparentRed = 41,
            /// <summary>Transparent Light Blue Id</summary>
            TransparentLightBlue = 42,
            /// <summary>Transparent Blue Id</summary>
            TransparentBlue = 43,
            /// <summary>Transparent Yellow Id</summary>
            TransparentYellow = 44,
            /// <summary>Transparent Green Id</summary>
            TransparentGreen = 48,
            /// <summary>Transparent Fluorescent Green Id</summary>
            TransparentFluorescentGreen = 49,
            /// <summary>Medium Blue Id</summary>
            MediumBlue = 102,
            /// <summary>Bright Orange Id</summary>
            BrightOrange = 106,
            /// <summary>Transparent Brown Id</summary>
            TransparentBrown = 111,
            /// <summary>Bright Yellow Green Id</summary>
            BrightYellowGreen = 119,
            /// <summary>Earth Blue Id</summary>
            EarthBlue = 140,
            /// <summary>Earth Green Id</summary>
            EarthGreen = 141,
            /// <summary>New Dark Red Id</summary>
            NewDarkRed = 154,
            /// <summary>Transparent Bright Orange Id</summary>
            TransparentBrightOrange = 182,
            /// <summary>Bright Purple Id</summary>
            BrightPurple = 221,
            /// <summary>Light Purple Id</summary>
            LightPurple = 222,
            /// <summary>Medium Azur Id</summary>
            MediumAzur = 322,
            /// <summary>Medium Lavender Id</summary>
            MediumLavender = 324,

            // Special.
            /// <summary>Dark Orange Id</summary>
            DarkOrange = 38,
            /// <summary>Bright Bluish Green Id</summary>
            BrightBluishGreen = 107,
            /// <summary>Transparent Medium Violet Id</summary>
            TransparentMediumViolet = 113,
            /// <summary>Bright Reddish Violet Id</summary>
            BrightReddishViolet = 124,
            /// <summary>Transparent Bright Violet Id</summary>
            TransparentBrightViolet = 126,
            /// <summary>Sand Blue Id</summary>
            SandBlue = 135,
            /// <summary>Sand Yellow Id</summary>
            SandYellow = 138,
            /// <summary>Sand Green Id</summary>
            SandGreen = 151,
            /// <summary>Flame Yellow Orange Id</summary>
            FlameYellowOrange = 191,
            /// <summary>Light Royal Blue Id</summary>
            LightRoyalBlue = 212,
            /// <summary>Cool Yellow Id</summary>
            CoolYellow = 226,
            /// <summary>Medium Lilac Id</summary>
            MediumLilac = 268,
            /// <summary>Light Nougat Id</summary>
            LightNougat = 283,
            /// <summary>Warm Gold Id</summary>
            WarmGold = 297,
            /// <summary>Dark Brown Id</summary>
            DarkBrown = 308,
            /// <summary>Transparent Bright Green Id</summary>
            TransparentBrightGreen = 311,
            /// <summary>Medium Nougat Id</summary>
            MediumNougat = 312,
            /// <summary>Silver Metallic Id</summary>
            SilverMetallic = 315,
            /// <summary>Titanium Metallic Id</summary>
            TitaniumMetallic = 316,
            /// <summary>Dark Azur Id</summary>
            DarkAzur = 321,
            /// <summary>Aqua Id</summary>
            Aqua = 323,
            /// <summary>Lavender Id</summary>
            Lavender = 325,
            /// <summary>Spring Yellowish Green Id</summary>
            SpringYellowishGreen = 326,
            /// <summary>White Glow Id</summary>
            WhiteGlow = 329,
            /// <summary>Olive Green Id</summary>
            OliveGreen = 330,
            /// <summary>Vibrant Coral Id</summary>
            VibrantCoral = 353,
            /// <summary>Vibrant Yellow Id</summary>
            VibrantYellow = 368,
            /// <summary>Medium Brown Id</summary>
            MediumBrown = 370,
            /// <summary>Warm Tan Id</summary>
            WarmTan = 371,

            // Legacy Colours.
            /// <summary>Legacy Grey Id</summary>
            Grey_Legacy = 2,
            /// <summary>Legacy Light Yellow Id</summary>
            LightYellow_Legacy = 3,
            /// <summary>Legacy Light Green Id</summary>
            LightGreen_Legacy = 6,
            /// <summary>Legacy Light Reddish Violet Id</summary>
            LightReddishViolet_Legacy = 9,
            /// <summary>Legacy Pastel Blue Id</summary>
            PastelBlue_Legacy = 11,
            /// <summary>Legacy Light Orange Brown Id</summary>
            LightOrangeBrown_Legacy = 12,
            /// <summary>Legacy Nature Id</summary>
            Nature_Legacy = 20,
            /// <summary>Legacy Medium Reddish Violet Id</summary>
            MediumReddishViolet_Legacy = 22,
            /// <summary>Legacy Earth Orange Id</summary>
            EarthOrange_Legacy = 25,
            /// <summary>Legacy Dark Grey Id</summary>
            DarkGrey_Legacy = 27,
            /// <summary>Legacy Medium Green Id</summary>
            MediumGreen_Legacy = 29,
            /// <summary>Legacy Light Yellowish Orange Id</summary>
            LightYellowishOrange_Legacy = 36,
            /// <summary>Legacy Light Bluish Violet Id</summary>
            LightBluishViolet_Legacy = 39,
            /// <summary>Legacy Light Blue Id</summary>
            LightBlue_Legacy = 45,
            /// <summary>Legacy Transparent Fluorescent Red Orange Id</summary>
            TransparentFluorescentRedOrange_Legacy = 47,
            /// <summary>Legacy Phosphorescent White Id</summary>
            PhosphorescentWhite_Legacy = 50,
            /// <summary>Legacy Light Red Id</summary>
            LightRed_Legacy = 100,
            /// <summary>Legacy Medium Red Id</summary>
            MediumRed_Legacy = 101,
            /// <summary>Legacy Light Grey Id</summary>
            LightGrey_Legacy = 103,
            /// <summary>Legacy Bright Violet Id</summary>
            BrightViolet_Legacy = 104,
            /// <summary>Legacy Bright Yellowish Orange Id</summary>
            BrightYellowishOrange_Legacy = 105,
            /// <summary>Legacy Earth Yellow Id</summary>
            EarthYellow_Legacy = 108,
            /// <summary>Legacy Pc Black Ir Id</summary>
            PcBlackIr_Legacy = 109,
            /// <summary>Legacy Bright Bluish Violet Id</summary>
            BrightBluishViolet_Legacy = 110,
            /// <summary>Legacy Medium Bluish Violet Id</summary>
            MediumBluishViolet_Legacy = 112,
            /// <summary>Legacy Medium Yellowish Green Id</summary>
            MediumYellowishGreen_Legacy = 115,
            /// <summary>Legacy Medium Bluish Green Id</summary>
            MediumBluishGreen_Legacy = 116,
            /// <summary>Legacy Light Bluish Green Id</summary>
            LightBluishGreen_Legacy = 118,
            /// <summary>Legacy Light Yellowish Green Id</summary>
            LightYellowishGreen_Legacy = 120,
            /// <summary>Legacy Medium Yellowish Orange Id</summary>
            MediumYellowishOrange_Legacy = 121,
            /// <summary>Legacy Bright Reddish Orange Id</summary>
            BrightReddishOrange_Legacy = 123,
            /// <summary>Legacy Light Orange Id</summary>
            LightOrange_Legacy = 125,
            /// <summary>Legacy Gold Id</summary>
            Gold_Legacy = 127,
            /// <summary>Legacy Dark Nougat Id</summary>
            DarkNougat_Legacy = 128,
            /// <summary>Legacy Silver Id</summary>
            Silver_Legacy = 131,
            /// <summary>Legacy Neon Orange Id</summary>
            NeonOrange_Legacy = 133,
            /// <summary>Legacy Neon Green Id</summary>
            NeonGreen_Legacy = 134,
            /// <summary>Legacy Sand Violet Id</summary>
            SandViolet_Legacy = 136,
            /// <summary>Legacy Medium Orange Id</summary>
            MediumOrange_Legacy = 137,
            /// <summary>Legacy Copper Id</summary>
            Copper_Legacy = 139,
            /// <summary>Legacy Transparent Fluorescent Blue Id</summary>
            TransparentFlourescentBlue_Legacy = 143,
            /// <summary>Legacy Metallic Sand Blue Id</summary>
            MetallicSandBlue_Legacy = 145,
            /// <summary>Legacy Metallic Sand Violet Id</summary>
            MetallicSandViolet_Legacy = 146,
            /// <summary>Legacy Metallic Sand Yellow Id</summary>
            MetallicSandYellow_Legacy = 147,
            /// <summary>Legacy Metallic Dark Grey Id</summary>
            MetallicDarkGrey_Legacy = 148,
            /// <summary>Legacy Metallic Black Id</summary>
            MetallicBlack_Legacy = 149,
            /// <summary>Legacy Metallic Light Grey Id</summary>
            MetallicLightGrey_Legacy = 150,
            /// <summary>Legacy Sand Red Id</summary>
            SandRed_Legacy = 153,
            /// <summary>Legacy Transparent Fluorescent Yellow Id</summary>
            TransparentFlourescentYellow_Legacy = 157,
            /// <summary>Legacy Transparent Fluorescent Red Id</summary>
            TransparentFlourescentRed_Legacy = 158,
            /// <summary>Legacy Gun Metallic Id</summary>
            GunMetallic_Legacy = 168,
            /// <summary>Legacy Red Flip Flop Id</summary>
            RedFlipFlop_Legacy = 176,
            /// <summary>Legacy Yellow Flip Flop Id</summary>
            YellowFlipFlop_Legacy = 178,
            /// <summary>Legacy Silver Flip Flop Id</summary>
            SilverFlipFlop_Legacy = 179,
            /// <summary>Legacy Curry Id</summary>
            Curry_Legacy = 180,
            /// <summary>Legacy Metallic White Id</summary>
            MetallicWhite_Legacy = 183,
            /// <summary>Legacy Metallic Bright Red Id</summary>
            MetallicBrightRed_Legacy = 184,
            /// <summary>Legacy Metallic Bright Blue Id</summary>
            MetallicBrightBlue_Legacy = 185,
            /// <summary>Legacy Metallic Dark Green Id</summary>
            MetallicDarkGreen_Legacy = 186,
            /// <summary>Legacy Metallic Earth Orange Id</summary>
            MetallicEarthOrange_Legacy = 187,
            /// <summary>Legacy Tiny Blue Id</summary>
            TinyBlue_Legacy = 188,
            /// <summary>Legacy Reddish Gold Id</summary>
            ReddishGold_Legacy = 189,
            /// <summary>Legacy Fire Yellow Id</summary>
            FireYellow_Legacy = 190,
            /// <summary>Legacy Flame Reddish Orange Id</summary>
            FlameReddishOrange_Legacy = 193,
            /// <summary>Legacy Royal Blue Id</summary>
            RoyalBlue_Legacy = 195,
            /// <summary>Legacy Dark Royal Blue Id</summary>
            DarkRoyalBlue_Legacy = 196,
            /// <summary>Legacy Bright Lilac Id</summary>
            BrightLilac_Legacy = 197,
            /// <summary>Legacy Bright Reddish Id</summary>
            BrightReddishLilac_Legacy = 198,
            /// <summary>Legacy Metallic Lemon Id</summary>
            MetallicLemon_Legacy = 200,
            /// <summary>Legacy Light Stone Grey Id</summary>
            LightStoneGrey_Legacy = 208,
            /// <summary>Legacy Dark Curry Id</summary>
            DarkCurry_Legacy = 209,
            /// <summary>Legacy Faded Green Id</summary>
            FadedGreen_Legacy = 210,
            /// <summary>Legacy Turqoise Id</summary>
            Turquoise_Legacy = 211,
            /// <summary>Legacy Medium Royal Blue Id</summary>
            MediumRoyalBlue_Legacy = 213,
            /// <summary>Legacy Rust Id</summary>
            Rust_Legacy = 216,
            /// <summary>Legacy Brown Id</summary>
            Brown_Legacy = 217,
            /// <summary>Legacy Reddish Lilac Id</summary>
            ReddishLilac_Legacy = 218,
            /// <summary>Legacy Lilac Id</summary>
            Lilac_Legacy = 219,
            /// <summary>Legacy Light Lilac Id</summary>
            LightLilac_Legacy = 220,
            /// <summary>Legacy Light Pink Id</summary>
            LightPink_Legacy = 223,
            /// <summary>Legacy Light Brick Yellow Id</summary>
            LightBrickYellow_Legacy = 224,
            /// <summary>Legacy Warm Yellowish Orange Id</summary>
            WarmYellowishOrange_Legacy = 225,
            /// <summary>Legacy Transparent Bright Yellowish Green Id</summary>
            TransparentBrightYellowishGreen_Legacy = 227,
            /// <summary>Legacy Transparent Light Bluish Green Id</summary>
            TransparentLightBluishGreen_Legacy = 229,
            /// <summary>Legacy Transparent Bright Purple Id</summary>
            TransparentBrightPurple_Legacy = 230,
            /// <summary>Legacy Transparent Flame Yellowish Orange Id</summary>
            TransparentFlameYellowishOrange_Legacy = 231,
            /// <summary>Legacy Dove Blue Id</summary>
            DoveBlue_Legacy = 232,
            /// <summary>Legacy Light Faded Green Id</summary>
            LightFadedGreen_Legacy = 233,
            /// <summary>Legacy Transparent Fire Yellow Id</summary>
            TransparentFireYellow_Legacy = 234,
            /// <summary>Legacy Transparent Bright Reddish Lilac Id</summary>
            TransparentBrightReddishLilac_Legacy = 236,
            /// <summary>Legacy Medium Blue Id</summary>
            MediumBlue_Legacy = 269,
            /// <summary>Legacy Transparent Reddish Lilac Id</summary>
            TransparentReddishLilac_Legacy = 284,
            /// <summary>Legacy Phosphorescent Green Id</summary>
            PhosphorescentGreen_Legacy = 294,
            /// <summary>Legacy Cool Silver Id</summary>
            CoolSilver_Legacy = 296,
            /// <summary>Legacy Cool Silver Drum Lacq Id</summary>
            CoolSilverDrumLacq_Legacy = 298,
            /// <summary>Legacy Metalized Silver Id</summary>
            MetalizedSilver_Legacy = 309,
            /// <summary>Legacy Metalized Gold Id</summary>
            MetalizedGold_Legacy = 310,
            /// <summary>Legacy Copper Metallic Ink Id</summary>
            CopperMetallicInk_Legacy = 334,
            /// <summary>Legacy Gold Metallic Ink Id</summary>
            GoldMetallicInk_Legacy = 335,
            /// <summary>Legacy Silver Metallic Ink Id</summary>
            SilverMetallicInk_Legacy = 336,
            /// <summary>Legacy Titanium Metallic Ink Id</summary>
            TitaniumMetallicInk_Legacy = 337,

            // Legacy Colours w/ Unknown Name.
            /// <summary>Unknown Legacy Id</summary>
            UnknownName00_Legacy = 4,
            /// <summary>Unknown Legacy Id</summary>
            UnknownName01_Legacy = 7,
            /// <summary>Unknown Legacy Id</summary>
            UnknownName02_Legacy = 8,
            /// <summary>Unknown Legacy Id</summary>
            UnknownName03_Legacy = 10,
            /// <summary>Unknown Legacy Id</summary>
            UnknownName04_Legacy = 13,
            /// <summary>Unknown Legacy Id</summary>
            UnknownName05_Legacy = 14,
            /// <summary>Unknown Legacy Id</summary>
            UnknownName06_Legacy = 15,
            /// <summary>Unknown Legacy Id</summary>
            UnknownName07_Legacy = 16,
            /// <summary>Unknown Legacy Id</summary>
            UnknownName08_Legacy = 17,
            /// <summary>Unknown Legacy Id</summary>
            UnknownName09_Legacy = 19,
            /// <summary>Unknown Legacy Id</summary>
            UnknownName10_Legacy = 122,
            /// <summary>Unknown Legacy Id</summary>
            UnknownName11_Legacy = 228,
            /// <summary>Unknown Legacy Id</summary>
            UnknownName12_Legacy = 285,
        }

        // LEGO Moulding Colour Guide 2022.01.04 + LEGO_Materials_Legacy provided by Anders Tankred Holm
        private readonly static Dictionary<Id, Color> idToColourGuide = new Dictionary<Id, Color>()
    {
        // Universal.
        { Id.White,                             new Color32(244, 244, 244, 255) },
        { Id.BrickYellow,                       new Color32(204, 185, 141, 255) },
        { Id.BrightRed,                         new Color32(180, 0, 0, 255)     },
        { Id.BrightBlue,                        new Color32(30, 90, 168, 255)   },
        { Id.BrightYellow,                      new Color32(250, 200, 10, 255)  },
        { Id.Black,                             new Color32(0, 0, 0, 255)       },
        { Id.DarkGreen,                         new Color32(0, 133, 43, 255)    },
        { Id.ReddishBrown,                      new Color32(95, 49, 9, 255)     },
        { Id.MediumStoneGrey,                   new Color32(150, 150, 150, 255) },
        { Id.DarkStoneGrey,                     new Color32(100, 100, 100, 255) },

        // Generic.
        { Id.Nougat,                            new Color32(187, 128, 90, 255)  },
        { Id.BrightGreen,                       new Color32(88, 171, 65, 255)   },
        { Id.Transparent,                       new Color32(238, 238, 238, 128) },
        { Id.TransparentRed,                    new Color32(184, 0, 0, 128)     },
        { Id.TransparentLightBlue,              new Color32(173, 221, 237, 128) },
        { Id.TransparentBlue,                   new Color32(0, 133, 184, 128)   },
        { Id.TransparentYellow,                 new Color32(255, 230, 34, 128)  },
        { Id.TransparentGreen,                  new Color32(115, 180, 100, 128) },
        { Id.TransparentFluorescentGreen,       new Color32(250, 241, 91, 128)  },
        { Id.MediumBlue,                        new Color32(115, 150, 200, 255) },
        { Id.BrightOrange,                      new Color32(214, 121, 35, 255)  },
        { Id.TransparentBrown,                  new Color32(187, 178, 158, 128) },
        { Id.BrightYellowGreen,                 new Color32(165, 202, 24, 255)  },
        { Id.EarthBlue,                         new Color32(25, 50, 90, 255)    },
        { Id.EarthGreen,                        new Color32(0, 69, 26, 255)     },
        { Id.NewDarkRed,                        new Color32(114, 0, 18, 255)    },
        { Id.TransparentBrightOrange,           new Color32(225, 141, 10, 128)  },
        { Id.BrightPurple,                      new Color32(200, 80, 155, 255)  },
        { Id.LightPurple,                       new Color32(255, 158, 205, 255) },
        { Id.MediumAzur,                        new Color32(104, 195, 226, 255) },
        { Id.MediumLavender,                    new Color32(154, 118, 174, 255) },

        // Special.
        { Id.DarkOrange,                        new Color32(145, 80, 28, 255)   },
        { Id.BrightBluishGreen,                 new Color32(0, 152, 148, 255)   },
        { Id.TransparentMediumViolet,           new Color32(253, 142, 207, 128) },
        { Id.BrightReddishViolet,               new Color32(144, 31, 118, 255)  },
        { Id.TransparentBrightViolet,           new Color32(111, 122, 184, 128) },
        { Id.SandBlue,                          new Color32(112, 129, 154, 255) },
        { Id.SandYellow,                        new Color32(137, 125, 98, 255)  },
        { Id.SandGreen,                         new Color32(112, 142, 124, 255) },
        { Id.FlameYellowOrange,                 new Color32(252, 172, 0, 255)   },
        { Id.LightRoyalBlue,                    new Color32(157, 195, 247, 255) },
        { Id.CoolYellow,                        new Color32(255, 236, 108, 255) },
        { Id.MediumLilac,                       new Color32(68, 26, 145, 255)   },
        { Id.LightNougat,                       new Color32(225, 190, 161, 255) },
        { Id.WarmGold,                          new Color32(175, 133, 34, 255)  },
        { Id.DarkBrown,                         new Color32(53, 33, 0, 255)     },
        { Id.TransparentBrightGreen,            new Color32(175, 210, 70, 128)  },
        { Id.MediumNougat,                      new Color32(170, 125, 85, 255)  },
        { Id.SilverMetallic,                    new Color32(140, 140, 140, 255) },
        { Id.TitaniumMetallic,                  new Color32(73, 70, 68, 255)    },
        { Id.DarkAzur,                          new Color32(70, 155, 195, 255)  },
        { Id.Aqua,                              new Color32(211, 242, 234, 255) },
        { Id.Lavender,                          new Color32(205, 164, 222, 255) },
        { Id.SpringYellowishGreen,              new Color32(226, 249, 154, 255) },
        { Id.WhiteGlow,                         new Color32(245, 243, 215, 255) },
        { Id.OliveGreen,                        new Color32(139, 132, 79, 255)  },
        { Id.VibrantCoral,                      new Color32(240, 109, 120, 255) },
        { Id.VibrantYellow,                     new Color32(255, 255, 0, 255)   },
        { Id.MediumBrown,                       new Color32(117, 87, 69, 255)   },
        { Id.WarmTan,                           new Color32(204, 163, 115, 255) },

        // Legacy.
        { Id.Grey_Legacy,                               new Color32(138, 146, 141, 255) },
        { Id.LightYellow_Legacy,                        new Color32(255, 214, 127, 255) },
        { Id.LightGreen_Legacy,                         new Color32(173, 217, 168, 255) },
        { Id.LightReddishViolet_Legacy,                 new Color32(246, 169, 187, 255) },
        { Id.PastelBlue_Legacy,                         new Color32(171, 217, 255, 255) },
        { Id.LightOrangeBrown_Legacy,                   new Color32(216, 109, 44, 255)  },
        { Id.Nature_Legacy,                             new Color32(233, 233, 233, 128) },
        { Id.MediumReddishViolet_Legacy,                new Color32(208, 80, 152, 255)  },
        { Id.EarthOrange_Legacy,                        new Color32(84, 51, 36, 255)    },
        { Id.DarkGrey_Legacy,                           new Color32(84, 89, 85, 255)    },
        { Id.MediumGreen_Legacy,                        new Color32(127, 196, 117, 255) },
        { Id.LightYellowishOrange_Legacy,               new Color32(253, 195, 131, 255) },
        { Id.LightBluishViolet_Legacy,                  new Color32(175, 190, 214, 255) },
        { Id.LightBlue_Legacy,                          new Color32(151, 203, 217, 255) },
        { Id.TransparentFluorescentRedOrange_Legacy,    new Color32(203, 78, 41, 128)   },
        { Id.PhosphorescentWhite_Legacy,                new Color32(229, 223, 211, 255) },
        { Id.LightRed_Legacy,                           new Color32(249, 183, 165, 255) },
        { Id.MediumRed_Legacy,                          new Color32(240, 109, 97, 255)  },
        { Id.LightGrey_Legacy,                          new Color32(188, 180, 165, 255) },
        { Id.BrightViolet_Legacy,                       new Color32(103, 31, 161, 255)  },
        { Id.BrightYellowishOrange_Legacy,              new Color32(245, 134, 36, 255)  },
        { Id.EarthYellow_Legacy,                        new Color32(86, 71, 47, 255)    },
        { Id.PcBlackIr_Legacy,                          new Color32(0, 20, 20, 255)     },
        { Id.BrightBluishViolet_Legacy,                 new Color32(38, 70, 154, 255)   },
        { Id.MediumBluishViolet_Legacy,                 new Color32(72, 97, 172, 255)   },
        { Id.MediumYellowishGreen_Legacy,               new Color32(183, 212, 37, 255)  },
        { Id.MediumBluishGreen_Legacy,                  new Color32(0, 170, 164, 255)   },
        { Id.LightBluishGreen_Legacy,                   new Color32(156, 214, 204, 255) },
        { Id.BrightReddishOrange_Legacy,                new Color32(238, 84, 52, 255)   },
        { Id.LightYellowishGreen_Legacy,                new Color32(222, 234, 146, 255) },
        { Id.MediumYellowishOrange_Legacy,              new Color32(248, 154, 57, 255)  },
        { Id.LightOrange_Legacy,                        new Color32(249, 167, 119, 255) },
        { Id.Gold_Legacy,                               new Color32(222, 172, 102, 255) },
        { Id.DarkNougat_Legacy,                         new Color32(173, 97, 64, 255)   },
        { Id.Silver_Legacy,                             new Color32(160, 160, 160, 255) },
        { Id.NeonOrange_Legacy,                         new Color32(239, 88, 40, 255)   },
        { Id.NeonGreen_Legacy,                          new Color32(205, 221, 52, 255)  },
        { Id.SandViolet_Legacy,                         new Color32(117, 101, 125, 255) },
        { Id.MediumOrange_Legacy,                       new Color32(244, 129, 71, 255)  },
        { Id.Copper_Legacy,                             new Color32(118, 77, 59, 255)   },
        { Id.TransparentFlourescentBlue_Legacy,         new Color32(149, 189, 221, 128) },
        { Id.MetallicSandBlue_Legacy,                   new Color32(91, 117, 144, 255)  },
        { Id.MetallicSandViolet_Legacy,                 new Color32(129, 117, 144, 255) },
        { Id.MetallicSandYellow_Legacy,                 new Color32(131, 114, 79, 255)  },
        { Id.MetallicDarkGrey_Legacy,                   new Color32(72, 77, 72, 255)    },
        { Id.MetallicBlack_Legacy,                      new Color32(10, 19, 39, 255)    },
        { Id.MetallicLightGrey_Legacy,                  new Color32(152, 155, 153, 255) },
        { Id.SandRed_Legacy,                            new Color32(136, 96, 94, 255)   },
        { Id.TransparentFlourescentYellow_Legacy,       new Color32(255, 246, 92, 128)  },
        { Id.TransparentFlourescentRed_Legacy,          new Color32(241, 142, 187, 128) },
        { Id.GunMetallic_Legacy,                        new Color32(96, 86, 76, 255)    },
        { Id.RedFlipFlop_Legacy,                        new Color32(148, 81, 72, 255)   },
        { Id.YellowFlipFlop_Legacy,                     new Color32(171, 103, 58, 255)  },
        { Id.SilverFlipFlop_Legacy,                     new Color32(115, 114, 113, 255) },
        { Id.Curry_Legacy,                              new Color32(221, 152, 46, 255)  },
        { Id.MetallicWhite_Legacy,                      new Color32(246, 242, 223, 255) },
        { Id.MetallicBrightRed_Legacy,                  new Color32(214, 0, 38, 255)    },
        { Id.MetallicBrightBlue_Legacy,                 new Color32(0, 89, 163, 255)    },
        { Id.MetallicDarkGreen_Legacy,                  new Color32(0, 142, 60, 255)    },
        { Id.MetallicEarthOrange_Legacy,                new Color32(87, 57, 44, 255)    },
        { Id.TinyBlue_Legacy,                           new Color32(0, 158, 206, 255)   },
        { Id.ReddishGold_Legacy,                        new Color32(172, 130, 71, 255)  },
        { Id.FireYellow_Legacy,                         new Color32(255, 207, 11, 255)  },
        { Id.FlameReddishOrange_Legacy,                 new Color32(236, 68, 29, 255)   },
        { Id.RoyalBlue_Legacy,                          new Color32(28, 88, 167, 255)   },
        { Id.DarkRoyalBlue_Legacy,                      new Color32(14, 62, 154, 255)   },
        { Id.BrightLilac_Legacy,                        new Color32(49, 43, 135, 255)   },
        { Id.BrightReddishLilac_Legacy,                 new Color32(138, 18, 168, 255)  },
        { Id.MetallicLemon_Legacy,                      new Color32(106, 121, 68, 255)  },
        { Id.LightStoneGrey_Legacy,                     new Color32(200, 200, 200, 255) },
        { Id.DarkCurry_Legacy,                          new Color32(164, 118, 36, 255)  },
        { Id.FadedGreen_Legacy,                         new Color32(70, 138, 95, 255)   },
        { Id.Turquoise_Legacy,                          new Color32(63, 182, 169, 255)  },
        { Id.MediumRoyalBlue_Legacy,                    new Color32(71, 111, 182, 255)  },
        { Id.Rust_Legacy,                               new Color32(135, 43, 23, 255)   },
        { Id.Brown_Legacy,                              new Color32(123, 93, 65, 255)   },
        { Id.ReddishLilac_Legacy,                       new Color32(142, 85, 151, 255)  },
        { Id.Lilac_Legacy,                              new Color32(86, 78, 157, 255)   },
        { Id.LightLilac_Legacy,                         new Color32(145, 149, 202, 255) },
        { Id.LightPink_Legacy,                          new Color32(241, 120, 128, 255) },
        { Id.LightBrickYellow_Legacy,                   new Color32(243, 201, 136, 255) },
        { Id.WarmYellowishOrange_Legacy,                new Color32(250, 169, 100, 255) },
        { Id.TransparentBrightYellowishGreen_Legacy,    new Color32(201, 231, 136, 128) },
        { Id.TransparentLightBluishGreen_Legacy,        new Color32(172, 212, 222, 128) },
        { Id.TransparentBrightPurple_Legacy,            new Color32(236, 163, 201, 128) },
        { Id.TransparentFlameYellowishOrange_Legacy,    new Color32(252, 183, 109, 128) },
        { Id.DoveBlue_Legacy,                           new Color32(119, 201, 216, 255) },
        { Id.LightFadedGreen_Legacy,                    new Color32(96, 186, 118, 255)  },
        { Id.TransparentFireYellow_Legacy,              new Color32(251, 232, 144, 128) },
        { Id.TransparentBrightReddishLilac_Legacy,      new Color32(141, 115, 179, 128) },
        { Id.MediumBlue_Legacy,                         new Color32(62, 149, 182, 255)  },
        { Id.TransparentReddishLilac_Legacy,            new Color32(224, 208, 229, 128) },
        { Id.PhosphorescentGreen_Legacy,                new Color32(213, 220, 138, 128) },
        { Id.CoolSilver_Legacy,                         new Color32(173, 173, 173, 255) },
        { Id.CoolSilverDrumLacq_Legacy,                 new Color32(118, 118, 118, 255) },
        { Id.MetalizedSilver_Legacy,                    new Color32(206, 206, 206, 255) },
        { Id.MetalizedGold_Legacy,                      new Color32(223, 193, 118, 255) },
        { Id.CopperMetallicInk_Legacy,                  new Color32(116, 77, 59, 255)   },
        { Id.GoldMetallicInk_Legacy,                    new Color32(185, 149, 59, 255)  },
        { Id.SilverMetallicInk_Legacy,                  new Color32(140, 140, 140, 255) },
        { Id.TitaniumMetallicInk_Legacy,                new Color32(62, 60, 57, 255)    },

        // Legacy w/ Unknown Name
        { Id.UnknownName00_Legacy,  new Color32(242, 112, 94, 255)  },
        { Id.UnknownName01_Legacy,  new Color32(255, 133, 0, 255)   },
        { Id.UnknownName02_Legacy,  new Color32(140, 0, 255, 255)   },
        { Id.UnknownName03_Legacy,  new Color32(255, 255, 189, 128) },
        { Id.UnknownName04_Legacy,  new Color32(255, 128, 20, 255)  },
        { Id.UnknownName05_Legacy,  new Color32(120, 252, 120, 255) },
        { Id.UnknownName06_Legacy,  new Color32(255, 242, 48, 255)  },
        { Id.UnknownName07_Legacy,  new Color32(255, 135, 156, 255) },
        { Id.UnknownName08_Legacy,  new Color32(255, 148, 148, 255) },
        { Id.UnknownName09_Legacy,  new Color32(207, 138, 71, 255)  },
        { Id.UnknownName10_Legacy,  new Color32(254, 203, 152, 255) },
        { Id.UnknownName11_Legacy,  new Color32(85, 165, 175, 128)  },
        { Id.UnknownName12_Legacy,  new Color32(228, 214, 218, 128) },
    };

        private readonly static Dictionary<Color, Id> colourGuideToId = new Dictionary<Color, Id>()
    {
        // Universal.
        { new Color32(244, 244, 244, 255), Id.White                             },
        { new Color32(204, 185, 141, 255), Id.BrickYellow                       },
        { new Color32(180, 0, 0, 255),     Id.BrightRed                         },
        { new Color32(30, 90, 168, 255),   Id.BrightBlue                        },
        { new Color32(250, 200, 10, 255),  Id.BrightYellow                      },
        { new Color32(0, 0, 0, 255),       Id.Black                             },
        { new Color32(0, 133, 43, 255),    Id.DarkGreen                         },
        { new Color32(95, 49, 9, 255),     Id.ReddishBrown                      },
        { new Color32(150, 150, 150, 255), Id.MediumStoneGrey                   },
        { new Color32(100, 100, 100, 255), Id.DarkStoneGrey                     },
        
        // Generic.
        { new Color32(187, 128, 90, 255),  Id.Nougat                            },
        { new Color32(88, 171, 65, 255),   Id.BrightGreen                       },
        { new Color32(238, 238, 238, 128), Id.Transparent                       },
        { new Color32(184, 0, 0, 128),     Id.TransparentRed                    },
        { new Color32(173, 221, 237, 128), Id.TransparentLightBlue              },
        { new Color32(0, 133, 184, 128),   Id.TransparentBlue                   },
        { new Color32(255, 230, 34, 128),  Id.TransparentYellow                 },
        { new Color32(115, 180, 100, 128), Id.TransparentGreen                  },
        { new Color32(250, 241, 91, 128),  Id.TransparentFluorescentGreen       },
        { new Color32(115, 150, 200, 255), Id.MediumBlue                        },
        { new Color32(214, 121, 35, 255),  Id.BrightOrange                      },
        { new Color32(187, 178, 158, 128), Id.TransparentBrown                  },
        { new Color32(165, 202, 24, 255),  Id.BrightYellowGreen                 },
        { new Color32(25, 50, 90, 255),    Id.EarthBlue                         },
        { new Color32(0, 69, 26, 255),     Id.EarthGreen                        },
        { new Color32(114, 0, 18, 255),    Id.NewDarkRed                        },
        { new Color32(225, 141, 10, 128),  Id.TransparentBrightOrange           },
        { new Color32(200, 80, 155, 255),  Id.BrightPurple                      },
        { new Color32(255, 158, 205, 255), Id.LightPurple                       },
        { new Color32(104, 195, 226, 255), Id.MediumAzur                        },
        { new Color32(154, 118, 174, 255), Id.MediumLavender                    },

        // Special.
        { new Color32(145, 80, 28, 255),   Id.DarkOrange                        },
        { new Color32(0, 152, 148, 255),   Id.BrightBluishGreen                 },
        { new Color32(253, 142, 207, 128), Id.TransparentMediumViolet           },
        { new Color32(144, 31, 118, 255),  Id.BrightReddishViolet               },
        { new Color32(111, 122, 184, 128), Id.TransparentBrightViolet           },
        { new Color32(112, 129, 154, 255), Id.SandBlue                          },
        { new Color32(137, 125, 98, 255),  Id.SandYellow                        },
        { new Color32(112, 142, 124, 255), Id.SandGreen                         },
        { new Color32(252, 172, 0, 255),   Id.FlameYellowOrange                 },
        { new Color32(157, 195, 247, 255), Id.LightRoyalBlue                    },
        { new Color32(255, 236, 108, 255), Id.CoolYellow                        },
        { new Color32(68, 26, 145, 255),   Id.MediumLilac                       },
        { new Color32(225, 190, 161, 255), Id.LightNougat                       },
        { new Color32(175, 133, 34, 255),  Id.WarmGold                          },
        { new Color32(53, 33, 0, 255),     Id.DarkBrown                         },
        { new Color32(175, 210, 70, 128),  Id.TransparentBrightGreen            },
        { new Color32(170, 125, 85, 255),  Id.MediumNougat                      },
        { new Color32(140, 140, 140, 255), Id.SilverMetallic                    },
        { new Color32(73, 70, 68, 255),    Id.TitaniumMetallic                  },
        { new Color32(70, 155, 195, 255),  Id.DarkAzur                          },
        { new Color32(211, 242, 234, 255), Id.Aqua                              },
        { new Color32(205, 164, 222, 255), Id.Lavender                          },
        { new Color32(226, 249, 154, 255), Id.SpringYellowishGreen              },
        { new Color32(245, 243, 215, 255), Id.WhiteGlow                         },
        { new Color32(139, 132, 79, 255),  Id.OliveGreen                        },
        { new Color32(240, 109, 120, 255), Id.VibrantCoral                      },
        { new Color32(255, 255, 0, 255),   Id.VibrantYellow                     },
        { new Color32(117, 87, 69, 255),   Id.MediumBrown                       },
        { new Color32(204, 163, 115, 255), Id.WarmTan                           },

        // Legacy.
        { new Color32(138, 146, 141, 255), Id.Grey_Legacy                               },
        { new Color32(255, 214, 127, 255), Id.LightYellow_Legacy                        },
        { new Color32(173, 217, 168, 255), Id.LightGreen_Legacy                         },
        { new Color32(246, 169, 187, 255), Id.LightReddishViolet_Legacy                 },
        { new Color32(171, 217, 255, 255), Id.PastelBlue_Legacy                         },
        { new Color32(216, 109, 44, 255),  Id.LightOrangeBrown_Legacy                   },
        { new Color32(233, 233, 233, 128), Id.Nature_Legacy                             },
        { new Color32(208, 80, 152, 255),  Id.MediumReddishViolet_Legacy                },
        { new Color32(84, 51, 36, 255),    Id.EarthOrange_Legacy                        },
        { new Color32(84, 89, 85, 255),    Id.DarkGrey_Legacy                           },
        { new Color32(127, 196, 117, 255), Id.MediumGreen_Legacy                        },
        { new Color32(253, 195, 131, 255), Id.LightYellowishOrange_Legacy               },
        { new Color32(175, 190, 214, 255), Id.LightBluishViolet_Legacy                  },
        { new Color32(151, 203, 217, 255), Id.LightBlue_Legacy                          },
        { new Color32(203, 78, 41, 128),   Id.TransparentFluorescentRedOrange_Legacy    },
        { new Color32(229, 223, 211, 255), Id.PhosphorescentWhite_Legacy                },
        { new Color32(249, 183, 165, 255), Id.LightRed_Legacy                           },
        { new Color32(240, 109, 97, 255),  Id.MediumRed_Legacy                          },
        { new Color32(188, 180, 165, 255), Id.LightGrey_Legacy                          },
        { new Color32(103, 31, 161, 255),  Id.BrightViolet_Legacy                       },
        { new Color32(245, 134, 36, 255),  Id.BrightYellowishOrange_Legacy              },
        { new Color32(86, 71, 47, 255),    Id.EarthYellow_Legacy                        },
        { new Color32(0, 20, 20, 255),     Id.PcBlackIr_Legacy                          },
        { new Color32(38, 70, 154, 255),   Id.BrightBluishViolet_Legacy                 },
        { new Color32(72, 97, 172, 255),   Id.MediumBluishViolet_Legacy                 },
        { new Color32(183, 212, 37, 255),  Id.MediumYellowishGreen_Legacy               },
        { new Color32(0, 170, 164, 255),   Id.MediumBluishGreen_Legacy                  },
        { new Color32(156, 214, 204, 255), Id.LightBluishGreen_Legacy                   },
        { new Color32(238, 84, 52, 255),   Id.BrightReddishOrange_Legacy                },
        { new Color32(222, 234, 146, 255), Id.LightYellowishGreen_Legacy                },
        { new Color32(248, 154, 57, 255),  Id.MediumYellowishOrange_Legacy              },
        { new Color32(249, 167, 119, 255), Id.LightOrange_Legacy                        },
        { new Color32(222, 172, 102, 255), Id.Gold_Legacy                               },
        { new Color32(173, 97, 64, 255),   Id.DarkNougat_Legacy                         },
        { new Color32(160, 160, 160, 255), Id.Silver_Legacy                             },
        { new Color32(239, 88, 40, 255),   Id.NeonOrange_Legacy                         },
        { new Color32(205, 221, 52, 255),  Id.NeonGreen_Legacy                          },
        { new Color32(117, 101, 125, 255), Id.SandViolet_Legacy                         },
        { new Color32(244, 129, 71, 255),  Id.MediumOrange_Legacy                       },
        { new Color32(118, 77, 59, 255),   Id.Copper_Legacy                             },
        { new Color32(149, 189, 221, 128), Id.TransparentFlourescentBlue_Legacy         },
        { new Color32(91, 117, 144, 255),  Id.MetallicSandBlue_Legacy                   },
        { new Color32(129, 117, 144, 255), Id.MetallicSandViolet_Legacy                 },
        { new Color32(131, 114, 79, 255),  Id.MetallicSandYellow_Legacy                 },
        { new Color32(72, 77, 72, 255),    Id.MetallicDarkGrey_Legacy                   },
        { new Color32(10, 19, 39, 255),    Id.MetallicBlack_Legacy                      },
        { new Color32(152, 155, 153, 255), Id.MetallicLightGrey_Legacy                  },
        { new Color32(136, 96, 94, 255),   Id.SandRed_Legacy                            },
        { new Color32(255, 246, 92, 128),  Id.TransparentFlourescentYellow_Legacy       },
        { new Color32(241, 142, 187, 128), Id.TransparentFlourescentRed_Legacy          },
        { new Color32(96, 86, 76, 255),    Id.GunMetallic_Legacy                        },
        { new Color32(148, 81, 72, 255),   Id.RedFlipFlop_Legacy                        },
        { new Color32(171, 103, 58, 255),  Id.YellowFlipFlop_Legacy                     },
        { new Color32(115, 114, 113, 255), Id.SilverFlipFlop_Legacy                     },
        { new Color32(221, 152, 46, 255),  Id.Curry_Legacy                              },
        { new Color32(246, 242, 223, 255), Id.MetallicWhite_Legacy                      },
        { new Color32(214, 0, 38, 255),    Id.MetallicBrightRed_Legacy                  },
        { new Color32(0, 89, 163, 255),    Id.MetallicBrightBlue_Legacy                 },
        { new Color32(0, 142, 60, 255),    Id.MetallicDarkGreen_Legacy                  },
        { new Color32(87, 57, 44, 255),    Id.MetallicEarthOrange_Legacy                },
        { new Color32(0, 158, 206, 255),   Id.TinyBlue_Legacy                           },
        { new Color32(172, 130, 71, 255),  Id.ReddishGold_Legacy                        },
        { new Color32(255, 207, 11, 255),  Id.FireYellow_Legacy                         },
        { new Color32(236, 68, 29, 255),   Id.FlameReddishOrange_Legacy                 },
        { new Color32(28, 88, 167, 255),   Id.RoyalBlue_Legacy                          },
        { new Color32(14, 62, 154, 255),   Id.DarkRoyalBlue_Legacy                      },
        { new Color32(49, 43, 135, 255),   Id.BrightLilac_Legacy                        },
        { new Color32(138, 18, 168, 255),  Id.BrightReddishLilac_Legacy                 },
        { new Color32(106, 121, 68, 255),  Id.MetallicLemon_Legacy                      },
        { new Color32(200, 200, 200, 255), Id.LightStoneGrey_Legacy                     },
        { new Color32(164, 118, 36, 255),  Id.DarkCurry_Legacy                          },
        { new Color32(70, 138, 95, 255),   Id.FadedGreen_Legacy                         },
        { new Color32(63, 182, 169, 255),  Id.Turquoise_Legacy                          },
        { new Color32(71, 111, 182, 255),  Id.MediumRoyalBlue_Legacy                    },
        { new Color32(135, 43, 23, 255),   Id.Rust_Legacy                               },
        { new Color32(123, 93, 65, 255),   Id.Brown_Legacy                              },
        { new Color32(142, 85, 151, 255),  Id.ReddishLilac_Legacy                       },
        { new Color32(86, 78, 157, 255),   Id.Lilac_Legacy                              },
        { new Color32(145, 149, 202, 255), Id.LightLilac_Legacy                         },
        { new Color32(241, 120, 128, 255), Id.LightPink_Legacy                          },
        { new Color32(243, 201, 136, 255), Id.LightBrickYellow_Legacy                   },
        { new Color32(250, 169, 100, 255), Id.WarmYellowishOrange_Legacy                },
        { new Color32(201, 231, 136, 128), Id.TransparentBrightYellowishGreen_Legacy    },
        { new Color32(172, 212, 222, 128), Id.TransparentLightBluishGreen_Legacy        },
        { new Color32(236, 163, 201, 128), Id.TransparentBrightPurple_Legacy            },
        { new Color32(252, 183, 109, 128), Id.TransparentFlameYellowishOrange_Legacy    },
        { new Color32(119, 201, 216, 255), Id.DoveBlue_Legacy                           },
        { new Color32(96, 186, 118, 255),  Id.LightFadedGreen_Legacy                    },
        { new Color32(251, 232, 144, 128), Id.TransparentFireYellow_Legacy              },
        { new Color32(141, 115, 179, 128), Id.TransparentBrightReddishLilac_Legacy      },
        { new Color32(62, 149, 182, 255),  Id.MediumBlue_Legacy                         },
        { new Color32(224, 208, 229, 128), Id.TransparentReddishLilac_Legacy            },
        { new Color32(213, 220, 138, 128), Id.PhosphorescentGreen_Legacy                },
        { new Color32(173, 173, 173, 255), Id.CoolSilver_Legacy                         },
        { new Color32(118, 118, 118, 255), Id.CoolSilverDrumLacq_Legacy                 },
        { new Color32(206, 206, 206, 255), Id.MetalizedSilver_Legacy                    },
        { new Color32(223, 193, 118, 255), Id.MetalizedGold_Legacy                      },
        { new Color32(116, 77, 59, 255),   Id.CopperMetallicInk_Legacy                  },
        { new Color32(185, 149, 59, 255),  Id.GoldMetallicInk_Legacy                    },
        //{ new Color32(140, 140, 140, 255), Id.SilverMetallicInk_Legacy                  }, // Same key as Id.SilverMetallic.
        { new Color32(62, 60, 57, 255),    Id.TitaniumMetallicInk_Legacy                },

        // Legacy w/ Unknown Name
        { new Color32(242, 112, 94, 255),  Id.UnknownName00_Legacy },
        { new Color32(255, 133, 0, 255),   Id.UnknownName01_Legacy },
        { new Color32(140, 0, 255, 255),   Id.UnknownName02_Legacy },
        { new Color32(255, 255, 189, 128), Id.UnknownName03_Legacy },
        { new Color32(255, 128, 20, 255),  Id.UnknownName04_Legacy },
        { new Color32(120, 252, 120, 255), Id.UnknownName05_Legacy },
        { new Color32(255, 242, 48, 255),  Id.UnknownName06_Legacy },
        { new Color32(255, 135, 156, 255), Id.UnknownName07_Legacy },
        { new Color32(255, 148, 148, 255), Id.UnknownName08_Legacy },
        { new Color32(207, 138, 71, 255),  Id.UnknownName09_Legacy },
        { new Color32(254, 203, 152, 255), Id.UnknownName10_Legacy },
        { new Color32(85, 165, 175, 128),  Id.UnknownName11_Legacy },
        { new Color32(228, 214, 218, 128), Id.UnknownName12_Legacy },
    };

        private readonly static SortedSet<Id> legacy = new SortedSet<Id>()
    {
        Id.Grey_Legacy,
        Id.LightYellow_Legacy,
        Id.LightGreen_Legacy,
        Id.LightReddishViolet_Legacy,
        Id.PastelBlue_Legacy,
        Id.LightOrangeBrown_Legacy,
        Id.Nature_Legacy,
        Id.MediumReddishViolet_Legacy,
        Id.EarthOrange_Legacy,
        Id.DarkGrey_Legacy,
        Id.MediumGreen_Legacy,
        Id.LightYellowishOrange_Legacy,
        Id.LightBluishViolet_Legacy,
        Id.LightBlue_Legacy,
        Id.TransparentFluorescentRedOrange_Legacy,
        Id.PhosphorescentWhite_Legacy,
        Id.LightRed_Legacy,
        Id.MediumRed_Legacy,
        Id.LightGrey_Legacy,
        Id.BrightViolet_Legacy,
        Id.BrightYellowishOrange_Legacy,
        Id.EarthYellow_Legacy,
        Id.PcBlackIr_Legacy,
        Id.BrightBluishViolet_Legacy,
        Id.MediumBluishViolet_Legacy,
        Id.MediumYellowishGreen_Legacy,
        Id.MediumBluishGreen_Legacy,
        Id.LightBluishGreen_Legacy,
        Id.BrightReddishOrange_Legacy,
        Id.LightYellowishGreen_Legacy,
        Id.MediumYellowishOrange_Legacy,
        Id.LightOrange_Legacy,
        Id.Gold_Legacy,
        Id.DarkNougat_Legacy,
        Id.Silver_Legacy,
        Id.NeonOrange_Legacy,
        Id.NeonGreen_Legacy,
        Id.SandViolet_Legacy,
        Id.MediumOrange_Legacy,
        Id.Copper_Legacy,
        Id.TransparentFlourescentBlue_Legacy,
        Id.MetallicSandBlue_Legacy,
        Id.MetallicSandViolet_Legacy,
        Id.MetallicSandYellow_Legacy,
        Id.MetallicDarkGrey_Legacy,
        Id.MetallicBlack_Legacy,
        Id.MetallicLightGrey_Legacy,
        Id.SandRed_Legacy,
        Id.TransparentFlourescentYellow_Legacy,
        Id.TransparentFlourescentRed_Legacy,
        Id.GunMetallic_Legacy,
        Id.RedFlipFlop_Legacy,
        Id.YellowFlipFlop_Legacy,
        Id.SilverFlipFlop_Legacy,
        Id.Curry_Legacy,
        Id.MetallicWhite_Legacy,
        Id.MetallicBrightRed_Legacy,
        Id.MetallicBrightBlue_Legacy,
        Id.MetallicDarkGreen_Legacy,
        Id.MetallicEarthOrange_Legacy,
        Id.TinyBlue_Legacy,
        Id.ReddishGold_Legacy,
        Id.FireYellow_Legacy,
        Id.FlameReddishOrange_Legacy,
        Id.RoyalBlue_Legacy,
        Id.DarkRoyalBlue_Legacy,
        Id.BrightLilac_Legacy,
        Id.BrightReddishLilac_Legacy,
        Id.MetallicLemon_Legacy,
        Id.LightStoneGrey_Legacy,
        Id.DarkCurry_Legacy,
        Id.FadedGreen_Legacy,
        Id.Turquoise_Legacy,
        Id.MediumRoyalBlue_Legacy,
        Id.Rust_Legacy,
        Id.Brown_Legacy,
        Id.ReddishLilac_Legacy,
        Id.Lilac_Legacy,
        Id.LightLilac_Legacy,
        Id.LightPink_Legacy,
        Id.LightBrickYellow_Legacy,
        Id.WarmYellowishOrange_Legacy,
        Id.TransparentBrightYellowishGreen_Legacy,
        Id.TransparentLightBluishGreen_Legacy,
        Id.TransparentBrightPurple_Legacy,
        Id.TransparentFlameYellowishOrange_Legacy,
        Id.DoveBlue_Legacy,
        Id.LightFadedGreen_Legacy,
        Id.TransparentFireYellow_Legacy,
        Id.TransparentBrightReddishLilac_Legacy,
        Id.MediumBlue_Legacy,
        Id.TransparentReddishLilac_Legacy,
        Id.PhosphorescentGreen_Legacy,
        Id.CoolSilver_Legacy,
        Id.CoolSilverDrumLacq_Legacy,
        Id.MetalizedSilver_Legacy,
        Id.MetalizedGold_Legacy,
        Id.CopperMetallicInk_Legacy,
        Id.GoldMetallicInk_Legacy,
        Id.SilverMetallicInk_Legacy,
        Id.TitaniumMetallicInk_Legacy,
        Id.UnknownName00_Legacy,
        Id.UnknownName01_Legacy,
        Id.UnknownName02_Legacy,
        Id.UnknownName03_Legacy,
        Id.UnknownName04_Legacy,
        Id.UnknownName05_Legacy,
        Id.UnknownName06_Legacy,
        Id.UnknownName07_Legacy,
        Id.UnknownName08_Legacy,
        Id.UnknownName09_Legacy,
        Id.UnknownName10_Legacy,
        Id.UnknownName11_Legacy,
        Id.UnknownName12_Legacy,
    };
        private readonly static SortedSet<Id> universal = new SortedSet<Id>()
    {
        Id.White,
        Id.BrickYellow,
        Id.BrightRed,
        Id.BrightBlue,
        Id.BrightYellow,
        Id.Black,
        Id.DarkGreen,
        Id.ReddishBrown,
        Id.MediumStoneGrey,
        Id.DarkStoneGrey
    };
        private readonly static SortedSet<Id> generic = new SortedSet<Id>()
    {
        Id.Nougat,
        Id.BrightGreen,
        Id.Transparent,
        Id.TransparentRed,
        Id.TransparentLightBlue,
        Id.TransparentBlue,
        Id.TransparentYellow,
        Id.TransparentGreen,
        Id.TransparentFluorescentGreen,
        Id.MediumBlue,
        Id.BrightOrange,
        Id.TransparentBrown,
        Id.BrightYellowGreen,
        Id.EarthBlue,
        Id.EarthGreen,
        Id.NewDarkRed,
        Id.TransparentBrightOrange,
        Id.BrightPurple,
        Id.LightPurple,
        Id.MediumAzur,
        Id.MediumLavender
    };
        private readonly static SortedSet<Id> special = new SortedSet<Id>()
    {
        Id.DarkOrange,
        Id.BrightBluishGreen,
        Id.TransparentMediumViolet,
        Id.BrightReddishViolet,
        Id.TransparentBrightViolet,
        Id.SandBlue,
        Id.SandYellow,
        Id.SandGreen,
        Id.FlameYellowOrange,
        Id.LightRoyalBlue,
        Id.CoolYellow,
        Id.MediumLilac,
        Id.LightNougat,
        Id.WarmGold,
        Id.DarkBrown,
        Id.TransparentBrightGreen,
        Id.MediumNougat,
        Id.SilverMetallic,
        Id.TitaniumMetallic,
        Id.DarkAzur,
        Id.Aqua,
        Id.Lavender,
        Id.SpringYellowishGreen,
        Id.WhiteGlow,
        Id.OliveGreen,
        Id.VibrantCoral,
        Id.VibrantYellow,
        Id.MediumBrown,
        Id.WarmTan,
    };

        /// <summary>
        /// Get the colour from an <see cref="Id"/>
        /// </summary>
        /// <param name="id">The <see cref="Id"/></param>
        /// <returns>Returns a <see cref="Color"/> corresponding to the provided <see cref="Id"/></returns>
        public static Color GetColour(Id id)
        {
            if (idToColourGuide.ContainsKey(id))
            {
                return idToColourGuide[id];
            }
            else
            {
                Debug.LogError("Moulding color id " + id + " is missing a colour");
                return Color.black;
            }
        }

        /// <summary>
        /// Get the colour from a <see langword="string"/> Id
        /// </summary>
        /// <param name="id">The colour id</param>
        /// <returns>Returns a <see cref="Color"/> corresponding to the provided <see langword="string"/> colour id</returns>
        public static Color GetColour(string id)
        {
            try
            {
                return GetColour((Id)Enum.Parse(typeof(Id), id));
            }
            catch
            {
                Debug.LogErrorFormat("Invalid moulding colour id {0}", id);
                return Color.black;
            }
        }

        /// <summary>
        /// Get the colour from an <see langword="int"/> Id
        /// </summary>
        /// <param name="id">The colour id</param>
        /// <returns>Returns a <see cref="Color"/> corresponding to the provided <see langword="int"/> colour id</returns>
        public static Color GetColour(int id)
        {
            return GetColour(id.ToString());
        }

        /// <summary>
        /// Get a colour id from a colour
        /// </summary>
        /// <param name="colour">The colour to get the id for</param>
        /// <returns>Returns an <see cref="Id"/> corresponding to the given colour if it exists, <see cref="Id.Black"/> otherwise.</returns>
        public static Id GetId(Color colour)
        {
            if (colourGuideToId.ContainsKey(colour))
            {
                return colourGuideToId[colour];
            }
            else
            {
                Debug.LogErrorFormat("Invalid moulding colour value {0}", colour);
                return Id.Black;
            }
        }

        /// <summary>
        /// Determine whether a colour is a legacy colour
        /// </summary>
        /// <param name="id">The <see cref="Id"/> to check</param>
        /// <returns>Returns <see langword="true"/> if the colour is legacy, <see langword="false"/> otherwise.</returns>
        public static bool IsLegacy(Id id)
        {
            return legacy.Contains(id);
        }

        /// <summary>
        /// Determine whether a colour is a legacy colour
        /// </summary>
        /// <param name="id">The id to check</param>
        /// <returns>Returns <see langword="true"/> if the colour is legacy, <see langword="false"/> otherwise.</returns>
        public static bool IsLegacy(string id)
        {
            try
            {
                return IsLegacy((Id)Enum.Parse(typeof(Id), id));
            }
            catch
            {
                Debug.LogErrorFormat("Invalid moulding colour id {0}", id);
                return true;
            }
        }

        /// <summary>
        /// Determine whether a colour is a legacy colour
        /// </summary>
        /// <param name="id">The id to check</param>
        /// <returns>Returns <see langword="true"/> if the colour is legacy, <see langword="false"/> otherwise.</returns>
        public static bool IsLegacy(int id)
        {
            return IsLegacy(id.ToString());
        }

        /// <summary>
        /// Determine whether a colour is transparent
        /// </summary>
        /// <param name="id">The <see cref="Id"/> to check</param>
        /// <returns>Returns <see langword="true"/> if the colour is transparent, <see langword="false"/> otherwise.</returns>
        public static bool IsTransparent(Id id)
        {
            if (idToColourGuide.ContainsKey(id))
            {
                return idToColourGuide[id].a < 1.0f;
            }
            else
            {
                Debug.LogError("Moulding color id " + id + " is missing a colour");
                return false;
            }
        }

        /// <summary>
        /// Determine whether a colour is transparent
        /// </summary>
        /// <param name="id">The id to check</param>
        /// <returns>Returns <see langword="true"/> if the colour is transparent, <see langword="false"/> otherwise.</returns>
        public static bool IsTransparent(string id)
        {
            try
            {
                return IsTransparent((Id)Enum.Parse(typeof(Id), id));
            }
            catch
            {
                Debug.LogErrorFormat("Invalid moulding colour id {0}", id);
                return true;
            }
        }

        /// <summary>
        /// Determine whether a colour is transparent
        /// </summary>
        /// <param name="id">The id to check</param>
        /// <returns>Returns <see langword="true"/> if the colour is transparent, <see langword="false"/> otherwise.</returns>
        public static bool IsTransparent(int id)
        {
            return IsTransparent(id.ToString());
        }

        /// <summary>
        /// Determine whether a colour is a generic colour
        /// </summary>
        /// <param name="id">The <see cref="Id"/> to check</param>
        /// <returns>Returns <see langword="true"/> if the colour is a generic colour, <see langword="false"/> otherwise.</returns>
        public static bool IsGeneric(Id id)
        {
            return generic.Contains(id);
        }

        /// <summary>
        /// Determine whether a colour is a generic colour
        /// </summary>
        /// <param name="id">The id to check</param>
        /// <returns>Returns <see langword="true"/> if the colour is a generic colour, <see langword="false"/> otherwise.</returns>
        public static bool IsGeneric(string id)
        {
            try
            {
                return IsGeneric((Id)Enum.Parse(typeof(Id), id));
            }
            catch
            {
                Debug.LogErrorFormat("Invalid moulding colour id {0}", id);
                return false;
            }
        }

        /// <summary>
        /// Determine whether a colour is a generic colour
        /// </summary>
        /// <param name="id">The id to check</param>
        /// <returns>Returns <see langword="true"/> if the colour is a generic colour, <see langword="false"/> otherwise.</returns>
        public static bool IsGeneric(int id)
        {
            return IsGeneric(id.ToString());
        }

        /// <summary>
        /// Determine whether a colour is a universal colour
        /// </summary>
        /// <param name="id">The <see cref="Id"/> to check</param>
        /// <returns>Returns <see langword="true"/> if the colour is a universal colour, <see langword="false"/> otherwise.</returns>
        public static bool IsUniversal(Id id)
        {
            return universal.Contains(id);
        }

        /// <summary>
        /// Determine whether a colour is a universal colour
        /// </summary>
        /// <param name="id">The id to check</param>
        /// <returns>Returns <see langword="true"/> if the colour is a universal colour, <see langword="false"/> otherwise.</returns>
        public static bool IsUniversal(string id)
        {
            try
            {
                return IsUniversal((Id)Enum.Parse(typeof(Id), id));
            }
            catch
            {
                Debug.LogErrorFormat("Invalid moulding colour id {0}", id);
                return false;
            }
        }

        /// <summary>
        /// Determine whether a colour is a universal colour
        /// </summary>
        /// <param name="id">The id to check</param>
        /// <returns>Returns <see langword="true"/> if the colour is a universal colour, <see langword="false"/> otherwise.</returns>
        public static bool IsUniversal(int id)
        {
            return IsUniversal(id.ToString());
        }

        /// <summary>
        /// Determine whether a colour is a special colour
        /// </summary>
        /// <param name="id">The <see cref="Id"/> to check</param>
        /// <returns>Returns <see langword="true"/> if the colour is a special colour, <see langword="false"/> otherwise.</returns>
        public static bool IsSpecial(Id id)
        {
            return special.Contains(id);
        }

        /// <summary>
        /// Determine whether a colour is a special colour
        /// </summary>
        /// <param name="id">The id to check</param>
        /// <returns>Returns <see langword="true"/> if the colour is a special colour, <see langword="false"/> otherwise.</returns>
        public static bool IsSpecial(string id)
        {
            try
            {
                return IsSpecial((Id)Enum.Parse(typeof(Id), id));
            }
            catch
            {
                Debug.LogErrorFormat("Invalid moulding colour id {0}", id);
                return false;
            }
        }

        /// <summary>
        /// Determine whether a colour is a special colour
        /// </summary>
        /// <param name="id">The id to check</param>
        /// <returns>Returns <see langword="true"/> if the colour is a special colour, <see langword="false"/> otherwise.</returns>
        public static bool IsSpecial(int id)
        {
            return IsSpecial(id.ToString());
        }

        /// <summary>
        /// Get all colour ids
        /// </summary>
        /// <returns>Returns an IEnumerable of <see cref="Id"/>s containing all colours</returns>
        public static IEnumerable<Id> GetAllColourIDs()
        {
            return (IEnumerable<Id>)Enum.GetValues(typeof(Id));
        }

        /// <summary>
        /// Get all universal colour ids
        /// </summary>
        /// <returns>Returns an IEnumerable of <see cref="Id"/>s containing all universal colours</returns>
        public static IEnumerable<Id> GetUniversalIDs()
        {
            return universal;
        }

        /// <summary>
        /// Get all generic colour ids
        /// </summary>
        /// <returns>Returns an IEnumerable of <see cref="Id"/>s containing all generic colours</returns>
        public static IEnumerable<Id> GetGenericIDs()
        {
            return generic;
        }

        /// <summary>
        /// Get all universal special ids
        /// </summary>
        /// <returns>Returns an IEnumerable of <see cref="Id"/>s containing all special colours</returns>
        public static IEnumerable<Id> GetSpecialIDs()
        {
            return special;
        }

        /// <summary>
        /// Get all universal legacy ids
        /// </summary>
        /// <returns>Returns an IEnumerable of <see cref="Id"/>s containing all legacy colours</returns>
        public static IEnumerable<Id> GetLegacyIDs()
        {
            return legacy;
        }
        
        /// <summary>
        /// Determine whether a list of ids contains a transparent colour
        /// </summary>
        /// <param name="ids">The list of colour ids</param>
        /// <returns>Returns <see langword="true"/> if the list contains a transparent colour, <see langword="false"/> otherwise.</returns>
        public static bool IsAnyTransparent(List<int> ids)
        {
            foreach (var id in ids)
            {
                if (IsTransparent(id))
                {
                    return true;
                }
            }

            return false;
        }
    }
}