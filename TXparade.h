#pragma once

#include <TXLib.h>

namespace parade {

	void CreateParadeWindow();

	static enum ñamouflage {

		SUMMER,
		WINTER
	};

	namespace aux_fun {

		void SetShapeColor(int x, int y, int z);

		template <typename T> void SetShapeColor(T color) {

			txSetFillColor(color);
			txSetColor(color);
		}

		void ChangeCoordinates(int& x, int& y, int x0, int y0);
	}
	
	namespace environment {

		namespace aux_fun {

			void CreateSky();
			void CreateWall();

			void CreateWhiteMarkup();
			void CreateYellowMarkup();
			void CreateRoad();
		}

		void CreateEnvironment();
	}

	namespace buildings {

		namespace aux_fun {

			namespace mausoleum {

				static const int x0 = 901;
				static const int y0 = 780;

				void LayFoundation(int x, int y);
				void BuildArch(int x, int y);
				void BricksOnArch(int x, int y);
				void BuildGrayWall(int x, int y);
				void BuildBrickFrontSide(int x, int y);
				void BuildEntrance(int x, int y);
				void BuildPyramid(int x, int y);
				void BuildCrownFrame(int x, int y);
				void BuildCrownInside(int x, int y);
				void BuildDrawText(int x, int y);
			}
			namespace tower {

				static const int x0 = 916;
				static const int y0 = 780;

				void BuildWireframe(int x, int y);
				void BuildWindows(int x, int y);
				void BuildRoof(int x, int y);
			}
		}

		void BuildMausoleum(int x, int y);
		void BuildTower(int x, int y);
	}

	namespace vehicles {

		namespace aux_fun {

			namespace air_defense_system {

				static const int x0 = 491;
				static const int y0 = 671;
				static const int step = 50;
				static const int gunsCount = 5;

				void AssembleLeft(int x, int y);
				void AssembleMiddle(int x, int y);
				void AssembleRight(int x, int y);
				void AssembleGuns(int x, int y);
			}

			namespace beams {

				static const int x0 = 477;
				static const int y0 = 325;

				void CreateLightBeams(int x, int y);
			}

			namespace gaz_aa {

				namespace data {

					static struct camouflage {

						int cabColor;
						int windowColor;
						int frontEndColor;
						int gimbalColor;
						int frameColor;
						int awningColor;
						int boardColor;
						int wheelColor;
						int tireColor;
						int textColor;
					};
					static camouflage camouflages[] = {

						{ // Summer 1
							RGB(76, 96, 43), RGB(95, 115, 130), RGB(81, 80, 58), RGB(21, 26, 19), RGB(53, 74, 37),
							RGB(62, 76, 39), RGB(76, 96, 43),   RGB(57, 80, 38), RGB(68, 63, 41), RGB(224, 224, 224)
						},
						{ // Winter 1
							RGB(207, 204, 192), RGB(249, 252, 248), RGB(71, 65, 68),    RGB(71, 65, 68), RGB(189, 182, 171),
							RGB(189, 182, 171), RGB(207, 204, 192), RGB(170, 164, 157), RGB(68, 63, 41), RGB(189, 182, 171)
						}
					};

					static class CurrentCamouflage {

					public:

						CurrentCamouflage(parade::ñamouflage thisCamouflage) {

							myCamouflage = camouflages[thisCamouflage];
						}

						camouflage myCamouflage;
					};

					static const int x0 = 93;
					static const int y0 = 884;
				}

				void AssembleBody(int x, int y, data::CurrentCamouflage currentCamouflage);
				void AssembleCab(int x, int y, data::CurrentCamouflage currentCamouflage);
				void AssembleGimbal(int x, int y, data::CurrentCamouflage currentCamouflage);
				void AssembleWheels(int x, int y, data::CurrentCamouflage currentCamouflage);
				void AssembleFrontEnd(int x, int y, data::CurrentCamouflage currentCamouflage);
				void AssembleWindow(int x, int y, data::CurrentCamouflage currentCamouflage);
				void CarDrawText(int x, int y, data::CurrentCamouflage currentCamouflage);
			}
			namespace bm_13 {

				namespace data {

					static struct camouflage {

						int bodyColor;
						int gimbalColor;
						int wheelColor;
						int tireColor;
						int boomColor;
						int textColor;
						int windowColor;
						int bulletColor;
					};
					static camouflage camouflages[] = {

						{ // Summer 1
							RGB(76, 96, 43),    RGB(57, 74, 38),   RGB(57, 80, 38), RGB(68, 63, 41), RGB(57, 74, 38),
							RGB(224, 224, 224), RGB(95, 115, 130), RGB(70, 61, 30)
						},
						{ // Winter 1
							RGB(207, 204, 192), RGB(71, 65, 58),    RGB(170, 164, 157), RGB(68, 63, 41), RGB(189, 182, 171),
							RGB(207, 204, 192), RGB(249, 252, 248), RGB(71, 65, 58)
						}
					};

					static class CurrentCamouflage {

					public:

						CurrentCamouflage(parade::ñamouflage thisCamouflage) {

							myCamouflage = camouflages[thisCamouflage];
						}

						camouflage myCamouflage;
					};

					static const int x0 = 1092;
					static const int y0 = 885;
				}

				void AssembleLever(int x, int y, data::CurrentCamouflage currentCamouflage);
				void AssembleBody(int x, int y, data::CurrentCamouflage currentCamouflage);
				void AssembleCab(int x, int y, data::CurrentCamouflage currentCamouflage);
				void AssembleWindow(int x, int y, data::CurrentCamouflage currentCamouflage);
				void AssemblepPotection(int x, int y, data::CurrentCamouflage currentCamouflage);
				void AssembleGimbal(int x, int y, data::CurrentCamouflage currentCamouflage);
				void AssembleWheels(int x, int y, data::CurrentCamouflage currentCamouflage);
				void AssembleBoom(int x, int y, data::CurrentCamouflage currentCamouflage);
				void AssembleBoomConnections(int x, int y, data::CurrentCamouflage currentCamouflage);
				void AssembleShells(int x, int y, data::CurrentCamouflage currentCamouflage);
				void CarDrawText(int x, int y, data::CurrentCamouflage currentCamouflage);
			}
			namespace t_34 {

				namespace data {

					static struct camouflage {

						int casingColor;
						int wheelColor;
						int tireColor;
						int trackColor;
						int turretColor;
						int bodyColor;
						int cargoColor;
						int bracingColor;
						int textColor;
					};
					static camouflage camouflages[] = {

						{ // Summer
							RGB(50, 50, 42), RGB(52, 51, 47),  RGB(70, 61, 30), RGB(34, 25, 26), RGB(89, 82, 63),
							RGB(75, 71, 60), RGB(104, 97, 81), RGB(96, 73, 59), RGB(224, 224, 224)
						},
						{ // Winter
							RGB(177, 173, 166), RGB(170, 164, 157), RGB(70, 61, 30), RGB(34, 25, 26), RGB(195, 192, 183),
							RGB(189, 182, 171), RGB(177, 173, 166), RGB(96, 73, 59), RGB(195, 192, 183)
						}
					};

					static class CurrentCamouflage {

					public:

						CurrentCamouflage(parade::ñamouflage thisCamouflage) {

							myCamouflage = camouflages[thisCamouflage];
						}

						camouflage myCamouflage;
					};

					static const int x0 = 232;
					static const int y0 = 291;
				}

				void AssembleCasing(int x, int y, data::CurrentCamouflage currentCamouflage);
				void AssembleWheels(int x, int y, data::CurrentCamouflage currentCamouflage);
				void AssembleTrack(int x, int y, data::CurrentCamouflage currentCamouflage);
				void AssembleTurret(int x, int y, data::CurrentCamouflage currentCamouflage);
				void AssembleBody(int x, int y, data::CurrentCamouflage currentCamouflage);
				void CarDrawText(int x, int y, data::CurrentCamouflage currentCamouflage);
			}
			namespace ba_3 {

				namespace data {

					static struct camouflage {

						int turretColor;
						int starColor;
						int bobyColor;
						int wheelColor;
						int tireColor;
						int ironColor;
					};
					static camouflage camouflages[] = {

						{ // Summer
							RGB(89, 82, 63), RGB(194, 2, 0), RGB(75, 71, 60), RGB(73, 66, 49), RGB(68, 63, 41),
							RGB(73, 66, 49)
						},
						{ // Winter
							RGB(177, 173, 166), RGB(249, 252, 248), RGB(195, 192, 183), RGB(170, 164, 157), RGB(68, 63, 41),
							RGB(189, 182, 171)
						}
					};

					static class CurrentCamouflage {

					public:

						CurrentCamouflage(parade::ñamouflage thisCamouflage) {

							myCamouflage = camouflages[thisCamouflage];
						}

						camouflage myCamouflage;
					};

					static const int x0 = 1275;
					static const int y0 = 304;
				}

				void AssembleTurret(int x, int y, data::CurrentCamouflage currentCamouflage);
				void AssembleStar(int x, int y, data::CurrentCamouflage currentCamouflage);
				void AssembleBody(int x, int y, data::CurrentCamouflage currentCamouflage);
				void AssembleWheels(int x, int y, data::CurrentCamouflage currentCamouflage);
				void AssembleIron(int x, int y, data::CurrentCamouflage currentCamouflage);
			}
		}

		void AssembleAirDefenseSystem(int x, int y);
		void CreateLightBeams(int x, int y);

		void AssebmleGAZAA(int x, int y, parade::ñamouflage camouflageStatus);
		void AssembleT34(int x, int y, parade::ñamouflage camouflageStatus);
		void AssembleBA3(int x, int y, parade::ñamouflage camouflageStatus);
		void AssembleBM13(int x, int y, parade::ñamouflage camouflageStatus);
	}

	namespace aircraft {

		namespace aux_fun {

			namespace il_2 {

				static const int x0 = 1016;
				static const int y0 = 166;

				void AssembleBody(int x, int y);
				void AssembleTailBottom(int x, int y);
				void AssembleChassis(int x, int y);
				void AssembleCab(int x, int y);
				void AssembleCamouflage(int x, int y);
				void AssembleExhaustPipes(int x, int y);
				void AssembleScrew(int x, int y);
				void AssembleGun(int x, int y);
				void AssembleBracing(int x, int y);
				void AssembleStars(int x, int y);
			}
		}

		void AssembleIL2(int x, int y);
	}
}