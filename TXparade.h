#pragma once

#include <TXLib.h>

namespace parade {

	static enum Òamouflage {

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

				const int x0 = 901;
				const int y0 = 780;

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

				const int x0 = 916;
				const int y0 = 780;

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

				const int x0 = 491;
				const int y0 = 671;
				const int step = 50;
				const int gunsCount = 5;

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

						CurrentCamouflage(parade::Òamouflage thisCamouflage) {

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

						CurrentCamouflage(parade::Òamouflage thisCamouflage) {

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

						CurrentCamouflage(parade::Òamouflage thisCamouflage) {

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

						CurrentCamouflage(parade::Òamouflage thisCamouflage) {

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

		void AssebmleGAZAA(int x, int y, parade::Òamouflage camouflageStatus);
		void AssembleT34(int x, int y, parade::Òamouflage camouflageStatus);
		void AssembleBA3(int x, int y, parade::Òamouflage camouflageStatus);
		void AssembleBM13(int x, int y, parade::Òamouflage camouflageStatus);
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

void parade::aux_fun::SetShapeColor(int x, int y, int z) {

	txSetFillColor(RGB(x, y, z));
	txSetColor(RGB(x, y, z));
}
void parade::aux_fun::ChangeCoordinates(int& x, int& y, int x0, int y0) {

	x = x - x0;
	y = y - y0;
}

void parade::environment::aux_fun::CreateRoad() {

	parade::aux_fun::SetShapeColor(115, 115, 117);
	txRectangle(0, 780, 1800, 900);

	CreateWhiteMarkup();
	CreateYellowMarkup();
}
void parade::environment::aux_fun::CreateSky() {

	parade::aux_fun::SetShapeColor(109, 122, 132);
	txRectangle(0, 0, 1800, 326);
}
void parade::environment::aux_fun::CreateWall() {

	parade::aux_fun::SetShapeColor(143, 82, 63);
	txRectangle(0, 326, 1800, 780);
}
void parade::environment::aux_fun::CreateWhiteMarkup() {

	parade::aux_fun::SetShapeColor(202, 202, 202);
	txRectangle(0, 832, 393, 836);
	txRectangle(654, 832, 1189, 836);
	txRectangle(1462, 832, 1800, 836);
}
void parade::environment::aux_fun::CreateYellowMarkup() {

	parade::aux_fun::SetShapeColor(200, 190, 163);
	txRectangle(0, 873, 1800, 877);
}

void parade::environment::CreateEnvironment() {

	aux_fun::CreateSky();
	aux_fun::CreateWall();
	aux_fun::CreateRoad();
}

void parade::buildings::aux_fun::mausoleum::BricksOnArch(int x, int y) {

	parade::aux_fun::SetShapeColor(33, 37, 40);
	txRectangle(x + 522, y + 599, x + 378, y + 581);
	txRectangle(x + 1298, y + 599, x + 1442, y + 581);
}
void parade::buildings::aux_fun::mausoleum::BuildArch(int x, int y) {

	parade::aux_fun::SetShapeColor(16, 16, 16);
	POINT arch[] = {
		{x + 364,  y + 599}, {x + 522,  y + 599}, {x + 522,  y + 544}, {x + 1298, y + 544}, {x + 1298, y + 599},
		{x + 1450, y + 599}, {x + 1450, y + 624}, {x + 1216, y + 624}, {x + 1216, y + 599}, {x + 600,  y + 599},
		{x + 600,  y + 624}, {x + 364,  y + 624}
	};
	txPolygon(arch, 12);
}
void parade::buildings::aux_fun::mausoleum::BuildBrickFrontSide(int x, int y) {

	parade::aux_fun::SetShapeColor(129, 74, 54);
	txRectangle(x + 364, y + 624, x + 654, y + 736);
	txRectangle(x + 1161, y + 624, x + 1451, y + 736);
}
void parade::buildings::aux_fun::mausoleum::BuildCrownFrame(int x, int y) {

	parade::aux_fun::SetShapeColor(106, 53, 37);
	txRectangle(x + 826, y + 337, x + 1008, y + 358);

	parade::aux_fun::SetShapeColor(129, 74, 54);
	txRectangle(x + 778, y + 374, x + 1052, y + 356);
	txRectangle(x + 803, y + 357, x + 826, y + 314);
	txRectangle(x + 1006, y + 357, x + 1029, y + 314);
	txRectangle(x + 803, y + 314, x + 1029, y + 289);
	txRectangle(x + 814, y + 289, x + 1018, y + 279);
}
void parade::buildings::aux_fun::mausoleum::BuildCrownInside(int x, int y) {

	parade::aux_fun::SetShapeColor(42, 36, 36);
	txRectangle(x + 826, y + 337, x + 1006, y + 314);

	parade::aux_fun::SetShapeColor(16, 16, 16);
	txRectangle(x + 847, y + 356, x + 867, y + 314);
	txRectangle(x + 889, y + 356, x + 909, y + 314);
	txRectangle(x + 927, y + 356, x + 948, y + 314);
	txRectangle(x + 966, y + 356, x + 987, y + 314);
}
void parade::buildings::aux_fun::mausoleum::BuildDrawText(int x, int y) {

	txSetColor(RGB(106, 53, 37));
	txSelectFont("Verdana", 40, 25, false, false, false, false, 0);
	txDrawText(x + 806, y + 555, x + 1009, y + 591, "À≈Õ»Õ");
}
void parade::buildings::aux_fun::mausoleum::BuildEntrance(int x, int y) {

	parade::aux_fun::SetShapeColor(0, 0, 0);
	txRectangle(x + 842, y + 599, x + 973, y + 736);
}
void parade::buildings::aux_fun::mausoleum::BuildGrayWall(int x, int y) {

	parade::aux_fun::SetShapeColor(33, 37, 40);
	txRectangle(x + 842, y + 599, x + 600, y + 736);
	txRectangle(x + 973, y + 599, x + 1216, y + 736);
}
void parade::buildings::aux_fun::mausoleum::BuildPyramid(int x, int y) {

	parade::aux_fun::SetShapeColor(129, 74, 54);
	txRectangle(x + 522, y + 544, x + 1298, y + 491);

	parade::aux_fun::SetShapeColor(106, 53, 37);
	txRectangle(x + 609, y + 491, x + 1217, y + 479);

	parade::aux_fun::SetShapeColor(129, 74, 54);
	txRectangle(x + 682, y + 479, x + 1147, y + 396);

	parade::aux_fun::SetShapeColor(106, 53, 37);
	txRectangle(x + 752, y + 396, x + 1077, y + 374);
}
void parade::buildings::aux_fun::mausoleum::LayFoundation(int x, int y) {

	parade::aux_fun::SetShapeColor(60, 65, 68);
	txRectangle(x + 223, y + 780, x + 1578, y + 736);
}

void parade::buildings::aux_fun::tower::BuildRoof(int x, int y) {

	parade::aux_fun::SetShapeColor(21, 102, 85);
	POINT roof[] = { {x + 823, y + 107}, {x + 846, y + 0}, {x + 986, y + 0}, {x + 1008, y + 107} };
	txPolygon(roof, 4);
}
void parade::buildings::aux_fun::tower::BuildWindows(int x, int y) {

	parade::aux_fun::SetShapeColor(16, 16, 16);
	txRectangle(x + 854, y + 184, x + 901, y + 129);
	txRectangle(x + 931, y + 184, x + 978, y + 129);
}
void parade::buildings::aux_fun::tower::BuildWireframe(int x, int y) {

	parade::aux_fun::SetShapeColor(106, 53, 37);
	POINT tower_low[] = {
		{x + 793,  y + 779}, {x + 793,  y + 259}, {x + 777,  y + 229}, {x + 777, y + 184}, {x + 1055, y + 184},
		{x + 1055, y + 229}, {x + 1039, y + 259}, {x + 1039, y + 779}
	};
	txPolygon(tower_low, 8);

	parade::aux_fun::SetShapeColor(129, 74, 54);
	txRectangle(x + 823, y + 184, x + 1009, y + 107);
}

void parade::buildings::BuildMausoleum(int x, int y) {

	parade::aux_fun::ChangeCoordinates(x, y, aux_fun::mausoleum::x0, aux_fun::mausoleum::y0);

	aux_fun::mausoleum::LayFoundation(x, y);
	aux_fun::mausoleum::BuildArch(x, y);
	aux_fun::mausoleum::BricksOnArch(x, y);
	aux_fun::mausoleum::BuildGrayWall(x, y);
	aux_fun::mausoleum::BuildBrickFrontSide(x, y);
	aux_fun::mausoleum::BuildEntrance(x, y);
	aux_fun::mausoleum::BuildPyramid(x, y);
	aux_fun::mausoleum::BuildCrownFrame(x, y);
	aux_fun::mausoleum::BuildCrownInside(x, y);
	aux_fun::mausoleum::BuildDrawText(x, y);
}
void parade::buildings::BuildTower(int x, int y) {

	parade::aux_fun::ChangeCoordinates(x, y, aux_fun::tower::x0, aux_fun::tower::y0);

	aux_fun::tower::BuildWireframe(x, y);
	aux_fun::tower::BuildWindows(x, y);
	aux_fun::tower::BuildRoof(x, y);
}

void parade::vehicles::aux_fun::air_defense_system::AssembleGuns(int x, int y) {

	parade::aux_fun::ChangeCoordinates(x, y, x0, y0);

	for (int i = 0; i < gunsCount; i++) {

		AssembleLeft(x + step * i, y);
		AssembleMiddle(x + step * i, y);
		AssembleRight(x + step * i, y);
	}
}
void parade::vehicles::aux_fun::air_defense_system::AssembleLeft(int x, int y) {

	parade::aux_fun::SetShapeColor(77, 82, 55);
	POINT left[] = {
		{x + 653, y + 491}, {x + 631, y + 455}, {x + 632, y + 454}, {x + 631, y + 451}, {x + 633, y + 450},
		{x + 634, y + 450}, {x + 636, y + 452}, {x + 637, y + 452}, {x + 639, y + 453}, {x + 642, y + 451},
		{x + 666, y + 491}
	};
	txPolygon(left, 11);
}
void parade::vehicles::aux_fun::air_defense_system::AssembleMiddle(int x, int y) {

	parade::aux_fun::SetShapeColor(86, 90, 68);
	POINT middle[] = {
		{x + 666, y + 491}, {x + 633, y + 436}, {x + 626, y + 421}, {x + 601, y + 377}, {x + 579, y + 339},
		{x + 585, y + 336}, {x + 610, y + 378}, {x + 628, y + 409}, {x + 643, y + 433}, {x + 656, y + 457},
		{x + 676, y + 491}
	};
	txPolygon(middle, 11);

	parade::aux_fun::SetShapeColor(48, 43, 45);
	POINT tip[] = {
		{x + 579, y + 339}, {x + 569, y + 324}, {x + 566, y + 320}, {x + 574, y + 315}, {x + 576, y + 316},
		{x + 585, y + 336}
	};
	txPolygon(tip, 6);
}
void parade::vehicles::aux_fun::air_defense_system::AssembleRight(int x, int y) {

	parade::aux_fun::SetShapeColor(86, 90, 68);
	POINT right[] = { {x + 679, y + 491}, {x + 664, y + 465}, {x + 666, y + 461}, {x + 670, y + 461}, {x + 688, y + 491} };
	txPolygon(right, 5);

	parade::aux_fun::SetShapeColor(77, 82, 55);
	POINT bracing[] = { {x + 670, y + 481}, {x + 667, y + 475}, {x + 669, y + 473}, {x + 673, y + 479} };
	txPolygon(bracing, 4);
}

void parade::vehicles::aux_fun::beams::CreateLightBeams(int x, int y) {

	parade::aux_fun::SetShapeColor(124, 143, 158);

	POINT lightBeam1[] = { {x + 270, y + 325}, {x + 400, y + 325}, {x + 286, y + 0}, {x + 58, y + 0} };
	POINT lightBeam2[] = { {x + 440, y + 325}, {x + 513, y + 325}, {x + 590, y + 0}, {x + 363, y + 0} };
	POINT lightBeam3[] = { {x + 556, y + 325}, {x + 686, y + 325}, {x + 899, y + 0}, {x + 671, y + 0} };

	txPolygon(lightBeam1, 4);
	txPolygon(lightBeam2, 4);
	txPolygon(lightBeam3, 4);
}

void parade::vehicles::aux_fun::gaz_aa::AssembleBody(int x, int y, data::CurrentCamouflage currentCamouflage) {

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.frameColor);
	txRectangle(x + 326, y + 682, x + 662, y + 556);

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.boardColor);
	txRectangle(x + 326, y + 756, x + 662, y + 682);

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.awningColor);

	txRectangle(x + 345, y + 758, x + 351, y + 682);
	txRectangle(x + 448, y + 758, x + 454, y + 682);
	txRectangle(x + 538, y + 758, x + 544, y + 682);
	txRectangle(x + 635, y + 758, x + 641, y + 682);

	txRectangle(x + 326, y + 772, x + 333, y + 756);
	txRectangle(x + 436, y + 772, x + 443, y + 756);
	txRectangle(x + 547, y + 772, x + 554, y + 756);
	txRectangle(x + 655, y + 772, x + 662, y + 756);

	txRectangle(x + 313, y + 792, x + 665, y + 772);
}
void parade::vehicles::aux_fun::gaz_aa::AssembleCab(int x, int y, data::CurrentCamouflage currentCamouflage) {

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.cabColor);
	POINT cab[] = {
		{x + 313, y + 792}, {x + 313, y + 623}, {x + 188, y + 632}, {x + 176, y + 644}, {x + 188, y + 652},
		{x + 188, y + 700}, {x + 37, y + 708},  {x + 37, y + 792},  {x + 188, y + 792}
	};
	txPolygon(cab, 9);
}
void parade::vehicles::aux_fun::gaz_aa::AssembleFrontEnd(int x, int y, data::CurrentCamouflage currentCamouflage) {

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.frontEndColor);
	POINT front[] = { {x + 37, y + 708}, {x + 26, y + 708}, {x + 27, y + 816}, {x + 39, y + 816} };
	txPolygon(front, 4);
}
void parade::vehicles::aux_fun::gaz_aa::AssembleGimbal(int x, int y, data::CurrentCamouflage currentCamouflage) {

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.gimbalColor);

	txRectangle(x + 37, y + 816, x + 510, y + 792);
	txRectangle(x + 526, y + 805, x + 636, y + 792);
	txRectangle(x + 541, y + 831, x + 630, y + 807);

	POINT gimbal[] = { {x + 444, y + 834}, {x + 443, y + 822}, {x + 308, y + 808}, {x + 286, y + 815} };
	txPolygon(gimbal, 4);
}
void parade::vehicles::aux_fun::gaz_aa::AssembleWheels(int x, int y, data::CurrentCamouflage currentCamouflage) {

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.tireColor);
	txCircle(x + 494, y + 829, 55);
	txCircle(x + 93, y + 829, 55);

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.wheelColor);
	txCircle(x + 494, y + 829, 35);
	txCircle(x + 93, y + 829, 35);
}
void parade::vehicles::aux_fun::gaz_aa::AssembleWindow(int x, int y, data::CurrentCamouflage currentCamouflage) {

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.windowColor);
	txRectangle(x + 201, y + 700, x + 289, y + 648);
}
void parade::vehicles::aux_fun::gaz_aa::CarDrawText(int x, int y, data::CurrentCamouflage currentCamouflage) {

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.textColor);
	txSelectFont("Verdana", 40, 0, false, false, false, false, 0);
	txDrawText(x + 326, y + 556, x + 662, y + 682, "ŒÚÒÚÓËÏ ÃÓÒÍ‚Û!");
}

void parade::vehicles::aux_fun::bm_13::AssembleBody(int x, int y, data::CurrentCamouflage currentCamouflage) {

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.bodyColor);
	txRectangle(x + 1343, y + 740, x + 1462, y + 797);
	txRectangle(x + 1456, y + 758, x + 1634, y + 785);

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.boomColor);
	txRectangle(x + 1343, y + 712, x + 1383, y + 780);
}
void parade::vehicles::aux_fun::bm_13::AssembleBoom(int x, int y, data::CurrentCamouflage currentCamouflage) {

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.bodyColor);

	POINT beam_1[] = { {x + 1386, y + 660}, {x + 1364, y + 639}, {x + 1263, y + 600}, {x + 1225, y + 593} };
	POINT beam_2[] = { {x + 1431, y + 705}, {x + 1426, y + 690}, {x + 1356, y + 623}, {x + 1346, y + 625} };
	POINT beam_3[] = { {x + 1431, y + 742}, {x + 1424, y + 742}, {x + 1372, y + 574}, {x + 1381, y + 572} };
	POINT beam_4[] = { {x + 1454, y + 761}, {x + 1468, y + 761}, {x + 1457, y + 722}, {x + 1445, y + 720} };
	POINT beam_5[] = { {x + 1462, y + 697}, {x + 1454, y + 695}, {x + 1472, y + 645}, {x + 1480, y + 646} };
	POINT beam_6[] = { {x + 1577, y + 737}, {x + 1576, y + 728}, {x + 1469, y + 716}, {x + 1474, y + 725} };
	POINT beam_7[] = { {x + 1577, y + 737}, {x + 1571, y + 725}, {x + 1475, y + 660}, {x + 1473, y + 667} };
	POINT beam_8[] = { {x + 1579, y + 716}, {x + 1586, y + 711}, {x + 1520, y + 650}, {x + 1506, y + 648} };
	POINT beam_9[] = { {x + 1632, y + 717}, {x + 1631, y + 708}, {x + 1695, y + 649}, {x + 1709, y + 650} };

	txPolygon(beam_1, 4);
	txPolygon(beam_2, 4);
	txPolygon(beam_3, 4);
	txPolygon(beam_4, 4);
	txPolygon(beam_5, 4);
	txPolygon(beam_6, 4);
	txPolygon(beam_7, 4);
	txPolygon(beam_8, 4);
	txPolygon(beam_9, 4);

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.boomColor);
	POINT boom[] = { {x + 1756, y + 657}, {x + 1756, y + 635}, {x + 1186, y + 573}, {x + 1183, y + 594} };
	txPolygon(boom, 4);
}
void parade::vehicles::aux_fun::bm_13::AssembleBoomConnections(int x, int y, data::CurrentCamouflage currentCamouflage) {

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.bodyColor);

	POINT connection_1[] = { {x + 1632, y + 758}, {x + 1607, y + 728}, {x + 1581, y + 758} };
	txPolygon(connection_1, 3);

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.boomColor);

	POINT connection_2[] = { {x + 1639, y + 724}, {x + 1630, y + 697}, {x + 1568, y + 717}, {x + 1577, y + 743} };
	POINT connection_3[] = { {x + 1520, y + 650}, {x + 1522, y + 630}, {x + 1470, y + 625}, {x + 1468, y + 645} };
	POINT connection_4[] = { {x + 1476, y + 728}, {x + 1481, y + 701}, {x + 1418, y + 688}, {x + 1412, y + 715} };
	POINT connection_5[] = { {x + 1369, y + 632}, {x + 1371, y + 612}, {x + 1327, y + 608}, {x + 1326, y + 628} };

	txPolygon(connection_2, 4);
	txPolygon(connection_3, 4);
	txPolygon(connection_4, 4);
	txPolygon(connection_5, 4);
}
void parade::vehicles::aux_fun::bm_13::AssembleCab(int x, int y, data::CurrentCamouflage currentCamouflage) {

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.bodyColor);
	POINT cab[] = {
		{x + 1343, y + 808}, {x + 1343, y + 658}, {x + 1321, y + 635}, {x + 1212, y + 643}, {x + 1212, y + 654},
		{x + 1215, y + 655}, {x + 1215, y + 719}, {x + 1069, y + 721}, {x + 1069, y + 789}, {x + 1142, y + 808}
	};
	txPolygon(cab, 10);
}
void parade::vehicles::aux_fun::bm_13::AssembleGimbal(int x, int y, data::CurrentCamouflage currentCamouflage) {

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.gimbalColor);
	txRectangle(x + 1122, y + 797, x + 1421, y + 834);
}
void parade::vehicles::aux_fun::bm_13::AssembleLever(int x, int y, data::CurrentCamouflage currentCamouflage) {

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.gimbalColor);
	POINT lever[] = {
		{x + 1486, y + 759}, {x + 1486, y + 754}, {x + 1565, y + 751}, {x + 1564, y + 746}, {x + 1476, y + 748},
		{x + 1477, y + 759}
	};
	txPolygon(lever, 6);
}
void parade::vehicles::aux_fun::bm_13::AssemblepPotection(int x, int y, data::CurrentCamouflage currentCamouflage) {

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.gimbalColor);

	txCircle(x + 1459, y + 805, 39);
	txCircle(x + 1604, y + 805, 39);

	txRectangle(x + 1454, y + 766, x + 1604, y + 843);
	txRectangle(x + 1420, y + 843, x + 1644, y + 805);
}
void parade::vehicles::aux_fun::bm_13::AssembleShells(int x, int y, data::CurrentCamouflage currentCamouflage) {

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.bulletColor);

	POINT bullet_1[] = { {x + 1757, y + 674}, {x + 1758, y + 657}, {x + 1648, y + 645}, {x + 1630, y + 650}, {x + 1642, y + 660} };
	POINT bullet_2[] = { {x + 1758, y + 636}, {x + 1759, y + 618}, {x + 1648, y + 606}, {x + 1627, y + 612}, {x + 1643, y + 623} };

	txPolygon(bullet_1, 5);
	txPolygon(bullet_2, 5);
}
void parade::vehicles::aux_fun::bm_13::AssembleWheels(int x, int y, data::CurrentCamouflage currentCamouflage) {

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.tireColor);
	txCircle(x + 1473, y + 834, 50);
	txCircle(x + 1591, y + 834, 50);
	txCircle(x + 1092, y + 834, 50);

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.wheelColor);
	txCircle(x + 1473, y + 834, 29);
	txCircle(x + 1591, y + 834, 29);
	txCircle(x + 1092, y + 834, 29);
}
void parade::vehicles::aux_fun::bm_13::AssembleWindow(int x, int y, data::CurrentCamouflage currentCamouflage) {

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.windowColor);
	txRectangle(x + 1227, y + 662, x + 1299, y + 712);
}
void parade::vehicles::aux_fun::bm_13::CarDrawText(int x, int y, data::CurrentCamouflage currentCamouflage) {

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.textColor);
	txSelectFont("Verdana", 30, 0, false, true, false, false, 0);
	txDrawText(x + 1074, y + 726, x + 1299, y + 759, "¡ÂÈ Ù‡¯ËÒÚÓ‚!");
}

void parade::vehicles::aux_fun::t_34::AssembleBody(int x, int y, data::CurrentCamouflage currentCamouflage) {

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.bodyColor);
	POINT body[] = { {x + 197, y + 170}, {x + 280, y + 120}, {x + 691, y + 120}, {x + 752, y + 170} };
	txPolygon(body, 4);

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.cargoColor);
	txRectangle(x + 432, y + 153, x + 691, y + 110);

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.bracingColor);
	txRectangle(x + 451, y + 153, x + 457, y + 110);
	txRectangle(x + 535, y + 153, x + 541, y + 110);
	txRectangle(x + 581, y + 153, x + 586, y + 110);
	txRectangle(x + 667, y + 153, x + 673, y + 110);
}
void parade::vehicles::aux_fun::t_34::AssembleCasing(int x, int y, data::CurrentCamouflage currentCamouflage) {

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.casingColor);
	POINT casing[] = {
		{x + 183, y + 253}, {x + 107, y + 208}, {x + 145, y + 170}, {x + 752, y + 170}, {x + 792, y + 185},
		{x + 755, y + 253}
	};
	txPolygon(casing, 6);
}
void parade::vehicles::aux_fun::t_34::AssembleTrack(int x, int y, data::CurrentCamouflage currentCamouflage) {

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.trackColor);

	POINT part_1[] = { {x + 151, y + 194}, {x + 149, y + 191}, {x + 131, y + 206}, {x + 134, y + 209} };
	POINT part_2[] = { {x + 131, y + 206}, {x + 135, y + 206}, {x + 136, y + 229}, {x + 132, y + 229} };
	POINT part_3[] = { {x + 135, y + 227}, {x + 132, y + 229}, {x + 147, y + 247}, {x + 150, y + 245} };
	POINT part_4[] = { {x + 149, y + 244}, {x + 234, y + 288}, {x + 232, y + 291}, {x + 147, y + 247} };
	POINT part_5[] = { {x + 232, y + 291}, {x + 232, y + 288}, {x + 665, y + 288}, {x + 665, y + 291} };
	POINT part_6[] = { {x + 664, y + 288}, {x + 665, y + 291}, {x + 764, y + 260}, {x + 763, y + 257} };
	POINT part_7[] = { {x + 764, y + 260}, {x + 762, y + 257}, {x + 781, y + 244}, {x + 783, y + 247} };
	POINT part_8[] = { {x + 783, y + 247}, {x + 780, y + 246}, {x + 786, y + 224}, {x + 789, y + 225} };
	POINT part_9[] = { {x + 786, y + 226}, {x + 789, y + 225}, {x + 782, y + 203}, {x + 778, y + 204} };
	POINT part_10[] = { {x + 780,  y + 206}, {x + 782, y + 203}, {x + 763, y + 191}, {x + 761, y + 194} };
	POINT part_11[] = { {x + 763, y + 195}, {x + 763, y + 191}, {x + 148, y + 191}, {x + 148, y + 195} };

	txPolygon(part_1, 4);
	txPolygon(part_2, 4);
	txPolygon(part_3, 4);
	txPolygon(part_4, 4);
	txPolygon(part_5, 4);
	txPolygon(part_6, 4);
	txPolygon(part_7, 4);
	txPolygon(part_8, 4);
	txPolygon(part_9, 4);
	txPolygon(part_10, 4);
	txPolygon(part_11, 4);
}
void parade::vehicles::aux_fun::t_34::AssembleTurret(int x, int y, data::CurrentCamouflage currentCamouflage) {

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.turretColor);
	POINT turret[] = {
		{x + 432, y + 120}, {x + 432, y + 110}, {x + 474, y + 110}, {x + 474, y + 106}, {x + 518, y + 106},
		{x + 485, y + 51},  {x + 452, y + 51},  {x + 452, y + 41},  {x + 386, y + 41},	{x + 386, y + 51},
		{x + 291, y + 51},  {x + 273, y + 59},  {x + 241, y + 59},  {x + 235, y + 68},	{x + 31, y + 68},
		{x + 31, y + 83},   {x + 226, y + 83},  {x + 224, y + 86},  {x + 224, y + 106}, {x + 270, y + 106},
		{x + 285,y + 113},  {x + 285, y + 120}
	};
	txPolygon(turret, 22);
}
void parade::vehicles::aux_fun::t_34::AssembleWheels(int x, int y, data::CurrentCamouflage currentCamouflage) {

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.tireColor);
	txCircle(x + 159, y + 220, 26);
	txCircle(x + 243, y + 241, 48);
	txCircle(x + 355, y + 241, 48);
	txCircle(x + 469, y + 241, 48);
	txCircle(x + 568, y + 241, 48);
	txCircle(x + 668, y + 241, 48);
	txCircle(x + 754, y + 226, 32);

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.wheelColor);
	txCircle(x + 159, y + 220, 11);
	txCircle(x + 243, y + 241, 16);
	txCircle(x + 355, y + 241, 16);
	txCircle(x + 469, y + 241, 16);
	txCircle(x + 568, y + 241, 16);
	txCircle(x + 668, y + 241, 16);

	txCircle(x + 754, y + 226, 11);
}
void parade::vehicles::aux_fun::t_34::CarDrawText(int x, int y, data::CurrentCamouflage currentCamouflage) {

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.textColor);
	txSelectFont("Verdana", 40, 0, false, true, false, false, 0);
	txDrawText(x + 344, y + 60, x + 469, y + 96, "–Ó‰ËÌ‡");
}

void parade::vehicles::aux_fun::ba_3::AssembleBody(int x, int y, data::CurrentCamouflage currentCamouflage) {

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.bobyColor);
	POINT body[] = {
		{x + 1230, y + 254}, {x + 1251, y + 158}, {x + 1406, y + 141}, {x + 1428, y + 107}, {x + 1512, y + 98},
		{x + 1529, y + 114}, {x + 1694, y + 109}, {x + 1759, y + 229}
	};
	txPolygon(body, 8);
}
void parade::vehicles::aux_fun::ba_3::AssembleIron(int x, int y, data::CurrentCamouflage currentCamouflage) {

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.ironColor);
	txRectangle(x + 1288, y + 204, x + 1341, y + 176);
	txRectangle(x + 1445, y + 194, x + 1497, y + 117);
	txRectangle(x + 1532, y + 204, x + 1704, y + 166);
}
void parade::vehicles::aux_fun::ba_3::AssembleStar(int x, int y, data::CurrentCamouflage currentCamouflage) {

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.starColor);
	POINT star[] = {
		{x + 1610, y + 87}, {x + 1627, y + 100}, {x + 1621, y + 80}, {x + 1638, y + 67}, {x + 1616, y + 67},
		{x + 1610, y + 47}, {x + 1603, y + 67},  {x + 1582, y + 67}, {x + 1599, y + 80}, {x + 1593, y + 100}
	};
	txPolygon(star, 10);
}
void parade::vehicles::aux_fun::ba_3::AssembleTurret(int x, int y, data::CurrentCamouflage currentCamouflage) {

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.turretColor);
	POINT turret[] = {
		{x + 1685, y + 113}, {x + 1685, y + 92}, {x + 1730, y + 89}, {x + 1730, y + 45}, {x + 1539, y + 43},
		{x + 1539, y + 48},  {x + 1533, y + 48}, {x + 1533, y + 55}, {x + 1523, y + 69}, {x + 1486, y + 70},
		{x + 1482, y + 72},  {x + 1455, y + 73}, {x + 1450, y + 76}, {x + 1380, y + 76}, {x + 1380, y + 84},
		{x + 1451, y + 84},  {x + 1454, y + 85}, {x + 1482, y + 85}, {x + 1486, y + 88}, {x + 1520, y + 88},
		{x + 1536, y + 104}, {x + 1536, y + 113}
	};
	txPolygon(turret, 22);
}
void parade::vehicles::aux_fun::ba_3::AssembleWheels(int x, int y, data::CurrentCamouflage currentCamouflage) {

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.tireColor);
	txCircle(x + 1275, y + 259, 45);
	txCircle(x + 1383, y + 239, 45);
	txCircle(x + 1584, y + 259, 45);
	txCircle(x + 1691, y + 259, 45);

	parade::aux_fun::SetShapeColor(currentCamouflage.myCamouflage.wheelColor);
	txCircle(x + 1275, y + 259, 31);
	txCircle(x + 1383, y + 239, 31);
	txCircle(x + 1584, y + 259, 31);
	txCircle(x + 1691, y + 259, 31);
}

void parade::vehicles::AssebmleGAZAA(int x, int y, parade::Òamouflage camouflageStatus) {

	parade::aux_fun::ChangeCoordinates(x, y, aux_fun::gaz_aa::data::x0, aux_fun::gaz_aa::data::y0);

	aux_fun::gaz_aa::data::CurrentCamouflage currentCamouflage(camouflageStatus);

	aux_fun::gaz_aa::AssembleBody(x, y, currentCamouflage);
	aux_fun::gaz_aa::AssembleCab(x, y, currentCamouflage);
	aux_fun::gaz_aa::AssembleGimbal(x, y, currentCamouflage);
	aux_fun::gaz_aa::AssembleWheels(x, y, currentCamouflage);
	aux_fun::gaz_aa::AssembleFrontEnd(x, y, currentCamouflage);
	aux_fun::gaz_aa::AssembleWindow(x, y, currentCamouflage);
	aux_fun::gaz_aa::CarDrawText(x, y, currentCamouflage);
}
void parade::vehicles::AssembleAirDefenseSystem(int x, int y) {

	aux_fun::air_defense_system::AssembleGuns(x, y);
}
void parade::vehicles::AssembleBA3(int x, int y, parade::Òamouflage camouflageStatus) {

	parade::aux_fun::ChangeCoordinates(x, y, aux_fun::ba_3::data::x0, aux_fun::ba_3::data::y0);

	aux_fun::ba_3::data::CurrentCamouflage currentCamouflage(camouflageStatus);

	aux_fun::ba_3::AssembleTurret(x, y, currentCamouflage);
	aux_fun::ba_3::AssembleStar(x, y, currentCamouflage);
	aux_fun::ba_3::AssembleBody(x, y, currentCamouflage);
	aux_fun::ba_3::AssembleWheels(x, y, currentCamouflage);
	aux_fun::ba_3::AssembleIron(x, y, currentCamouflage);
}
void parade::vehicles::AssembleBM13(int x, int y, parade::Òamouflage camouflageStatus) {

	parade::aux_fun::ChangeCoordinates(x, y, aux_fun::bm_13::data::x0, aux_fun::bm_13::data::y0);

	aux_fun::bm_13::data::CurrentCamouflage currentCamouflage(camouflageStatus);

	aux_fun::bm_13::AssembleLever(x, y, currentCamouflage);
	aux_fun::bm_13::AssembleBody(x, y, currentCamouflage);
	aux_fun::bm_13::AssembleCab(x, y, currentCamouflage);
	aux_fun::bm_13::AssembleWindow(x, y, currentCamouflage);
	aux_fun::bm_13::AssemblepPotection(x, y, currentCamouflage);
	aux_fun::bm_13::AssembleGimbal(x, y, currentCamouflage);
	aux_fun::bm_13::AssembleWheels(x, y, currentCamouflage);
	aux_fun::bm_13::AssembleBoom(x, y, currentCamouflage);
	aux_fun::bm_13::AssembleBoomConnections(x, y, currentCamouflage);
	aux_fun::bm_13::AssembleShells(x, y, currentCamouflage);
	aux_fun::bm_13::CarDrawText(x, y, currentCamouflage);
}
void parade::vehicles::AssembleT34(int x, int y, parade::Òamouflage camouflageStatus) {

	parade::aux_fun::ChangeCoordinates(x, y, aux_fun::t_34::data::x0, aux_fun::t_34::data::y0);

	aux_fun::t_34::data::CurrentCamouflage currentCamouflage(camouflageStatus);

	aux_fun::t_34::AssembleCasing(x, y, currentCamouflage);
	aux_fun::t_34::AssembleWheels(x, y, currentCamouflage);
	aux_fun::t_34::AssembleTrack(x, y, currentCamouflage);
	aux_fun::t_34::AssembleTurret(x, y, currentCamouflage);
	aux_fun::t_34::AssembleBody(x, y, currentCamouflage);
	aux_fun::t_34::CarDrawText(x, y, currentCamouflage);
}
void parade::vehicles::CreateLightBeams(int x, int y) {

	parade::aux_fun::ChangeCoordinates(x, y, aux_fun::beams::x0, aux_fun::beams::y0);
	aux_fun::beams::CreateLightBeams(x, y);
}

void parade::aircraft::aux_fun::il_2::AssembleBody(int x, int y) {

	parade::aux_fun::SetShapeColor(101, 101, 73);

	POINT leftPart[] = {
		{x + 1058, y + 141}, {x + 1154, y + 125}, {x + 1155, y + 121}, {x + 1192, y + 116}, {x + 1223, y + 115},
		{x + 1252, y + 112}, {x + 1280, y + 137}, {x + 1357, y + 137}, {x + 1360, y + 134}, {x + 1360, y + 129},
		{x + 1405, y + 129}, {x + 1407, y + 189}, {x + 1394, y + 186}, {x + 1365, y + 168}, {x + 1355, y + 165},
		{x + 1341, y + 161}, {x + 1293, y + 158}, {x + 1258, y + 160}, {x + 1220, y + 169}, {x + 1192, y + 179},
		{x + 1174, y + 188}, {x + 1164, y + 190}, {x + 1163, y + 197}, {x + 1165, y + 202}, {x + 1163, y + 201},
		{x + 1105, y + 197}, {x + 1066, y + 191}, {x + 1058, y + 189}
	};
	txPolygon(leftPart, 28);

	POINT right_part[] = {
		{x + 1405, y + 124}, {x + 1614, y + 127}, {x + 1622, y + 124}, {x + 1626, y + 119}, {x + 1637, y + 103},
		{x + 1652, y + 83},  {x + 1664, y + 65},  {x + 1679, y + 44},  {x + 1694, y + 32},  {x + 1709, y + 26},
		{x + 1722, y + 26},  {x + 1734, y + 31},  {x + 1743, y + 39},  {x + 1751, y + 51},  {x + 1754, y + 60},
		{x + 1758, y + 74},  {x + 1761, y + 87},  {x + 1765, y + 102}, {x + 1768, y + 114}, {x + 1769, y + 124},
		{x + 1770, y + 129}, {x + 1775, y + 138}, {x + 1778, y + 143}, {x + 1780, y + 147}, {x + 1785, y + 150},
		{x + 1788, y + 153}, {x + 1609, y + 152}, {x + 1608, y + 155}, {x + 1599, y + 162}, {x + 1578, y + 169},
		{x + 1563, y + 173}, {x + 1546, y + 175}, {x + 1530, y + 178}, {x + 1424, y + 191}, {x + 1415, y + 191},
		{x + 1407, y + 189}, {x + 1405, y + 129}
	};
	txPolygon(right_part, 37);

	parade::aux_fun::SetShapeColor(74, 101, 112);

	POINT down[] = {
		{x + 1058, y + 189}, {x + 1165, y + 202}, {x + 1163, y + 197}, {x + 1164, y + 190}, {x + 1174, y + 188},
		{x + 1184, y + 183}, {x + 1192, y + 179}, {x + 1220, y + 169}, {x + 1258, y + 160}, {x + 1293, y + 158},
		{x + 1341, y + 161}, {x + 1355, y + 165}, {x + 1365, y + 168}, {x + 1378, y + 176}, {x + 1394, y + 186},
		{x + 1407, y + 189}, {x + 1415, y + 191}, {x + 1424, y + 191}, {x + 1517, y + 179}, {x + 1530, y + 178},
		{x + 1546, y + 175}, {x + 1563, y + 173}, {x + 1578, y + 169}, {x + 1599, y + 162}, {x + 1608, y + 155},
		{x + 1610, y + 155}, {x + 1616, y + 159}, {x + 1624, y + 166}, {x + 1630, y + 174}, {x + 1635, y + 186},
		{x + 1592, y + 192}, {x + 1554, y + 196}, {x + 1489, y + 200}, {x + 1426, y + 202}, {x + 1325, y + 202},
		{x + 1287, y + 213}, {x + 1255, y + 218}, {x + 1218, y + 219}, {x + 1197, y + 218}, {x + 1185, y + 214},
		{x + 1157, y + 213}, {x + 1141, y + 212}, {x + 1135, y + 210}, {x + 1129, y + 212}, {x + 1122, y + 212},
		{x + 1117, y + 210}, {x + 1114, y + 207}, {x + 1101, y + 205}, {x + 1087, y + 202}, {x + 1071, y + 197},
		{x + 1058, y + 191}
	};
	txPolygon(down, 51);

}
void parade::aircraft::aux_fun::il_2::AssembleBracing(int x, int y) {

	parade::aux_fun::SetShapeColor(71, 94, 100);
	POINT left[] = {
		{x + 1352, y + 92}, {x + 1353, y + 91}, {x + 1353, y + 68}, {x + 1358, y + 68}, {x + 1358, y + 91},
		{x + 1359, y + 92}
	};
	txPolygon(left, 6);

	parade::aux_fun::SetShapeColor(88, 88, 88);
	POINT up[] = {
		{x + 1358, y + 72}, {x + 1358, y + 70}, {x + 1692, y + 33}, {x + 1691, y + 35}
	};
	txPolygon(up, 4);
}
void parade::aircraft::aux_fun::il_2::AssembleCab(int x, int y) {

	parade::aux_fun::SetShapeColor(90, 93, 68);
	POINT cabBody[] = {
		{x + 1268,  y + 91}, {x + 1318, y + 91},  {x + 1320, y + 92},  {x + 1393, y + 92},  {x + 1406, y + 98},
		{x + 1406, y + 103}, {x + 1405, y + 103}, {x + 1405, y + 129}, {x + 1360, y + 129}, {x + 1360, y + 134},
		{x + 1357, y + 137}, {x + 1280, y + 137}, {x + 1252, y + 112}
	};
	txPolygon(cabBody, 13);

	parade::aux_fun::SetShapeColor(95, 115, 130);

	POINT frontWindow[] = {
		{x + 1255, y + 111}, {x + 1268, y + 93}, {x + 1276, y + 100}, {x + 1275, y + 125}, {x + 1268, y + 118}
	};
	txPolygon(frontWindow, 5);

	txRectangle(x + 1284, y + 130, x + 1296, y + 101);
	txRectangle(x + 1284, y + 97, x + 1299, y + 92);
	txRectangle(x + 1323, y + 130, x + 1356, y + 102);
	txRectangle(x + 1363, y + 123, x + 1389, y + 102);
	txRectangle(x + 1363, y + 98, x + 1392, y + 94);
	txRectangle(x + 1392, y + 123, x + 1402, y + 102);
}
void parade::aircraft::aux_fun::il_2::AssembleCamouflage(int x, int y) {

	parade::aux_fun::SetShapeColor(45, 54, 59);

	POINT leftPart[] = {
		{x + 1058, y + 189}, {x + 1058, y + 162}, {x + 1066, y + 158}, {x + 1073, y + 155}, {x + 1087, y + 152},
		{x + 1101, y + 149}, {x + 1119, y + 146}, {x + 1124, y + 144}, {x + 1130, y + 139}, {x + 1132, y + 129},
		{x + 1154, y + 125}, {x + 1155, y + 121}, {x + 1178, y + 118}, {x + 1197, y + 116}, {x + 1222, y + 115},
		{x + 1213, y + 117}, {x + 1205, y + 119}, {x + 1199, y + 122}, {x + 1198, y + 131}, {x + 1197, y + 143},
		{x + 1194, y + 160}, {x + 1190, y + 171}, {x + 1185, y + 178}, {x + 1184, y + 183}, {x + 1174, y + 188},
		{x + 1164, y + 190}, {x + 1163, y + 197}, {x + 1165, y + 202}, {x + 1136, y + 201}, {x + 1105, y + 197}
	};
	txPolygon(leftPart, 30);

	POINT rightPart[] = {
		{x + 1424, y + 191}, {x + 1424, y + 189}, {x + 1430, y + 177}, {x + 1438, y + 173}, {x + 1445, y + 170},
		{x + 1453, y + 159}, {x + 1458, y + 146}, {x + 1465, y + 136}, {x + 1471, y + 132}, {x + 1480, y + 125},
		{x + 1539, y + 126}, {x + 1532, y + 139}, {x + 1526, y + 149}, {x + 1524, y + 164}, {x + 1517, y + 179}
	};
	txPolygon(rightPart, 15);
}
void parade::aircraft::aux_fun::il_2::AssembleChassis(int x, int y) {

	parade::aux_fun::SetShapeColor(8, 19, 25);
	txCircle(x + 1758, y + 180, 14);

	parade::aux_fun::SetShapeColor(57, 86, 100);
	txCircle(x + 1758, y + 180, 5);

	parade::aux_fun::SetShapeColor(71, 94, 100);
	POINT iron[] = {
		{x + 1741, y + 172}, {x + 1745, y + 170}, {x + 1745, y + 166}, {x + 1758, y + 177}, {x + 1760, y + 180},
		{x + 1757, y + 181}
	};
	txPolygon(iron, 6);
}
void parade::aircraft::aux_fun::il_2::AssembleExhaustPipes(int x, int y) {

	parade::aux_fun::SetShapeColor(4, 17, 26);
	txRectangle(x + 1090, y + 158, x + 1155, y + 149);

	parade::aux_fun::SetShapeColor(151, 77, 42);
	txRectangle(x + 1093, y + 155, x + 1101, y + 151);
	txRectangle(x + 1106, y + 155, x + 1114, y + 151);
	txRectangle(x + 1119, y + 155, x + 1127, y + 151);
	txRectangle(x + 1132, y + 155, x + 1140, y + 151);
	txRectangle(x + 1145, y + 155, x + 1153, y + 151);
}
void parade::aircraft::aux_fun::il_2::AssembleGun(int x, int y) {

	parade::aux_fun::SetShapeColor(9, 15, 29);
	POINT gun[] = {
		{x + 1419, y + 124}, {x + 1414, y + 120}, {x + 1414, y + 118}, {x + 1416, y + 118}, {x + 1420, y + 116},
		{x + 1430, y + 116}, {x + 1430, y + 115}, {x + 1463, y + 115}, {x + 1463, y + 113}, {x + 1448, y + 113},
		{x + 1448, y + 111}, {x + 1447, y + 111}, {x + 1447, y + 110}, {x + 1444, y + 110}, {x + 1444, y + 111},
		{x + 1430, y + 111}, {x + 1430, y + 111}, {x + 1426, y + 111}, {x + 1426, y + 112}, {x + 1405, y + 112},
		{x + 1405, y + 118}, {x + 1410, y + 118}, {x + 1410, y + 124}
	};
	txPolygon(gun, 23);
}
void parade::aircraft::aux_fun::il_2::AssembleScrew(int x, int y) {

	parade::aux_fun::SetShapeColor(101, 101, 73);
	POINT screwRight[] = {
		{x + 1044, y + 186}, {x + 1044, y + 146}, {x + 1058, y + 141}, {x + 1058, y + 191}
	};
	txPolygon(screwRight, 4);

	parade::aux_fun::SetShapeColor(181, 174, 68);
	POINT screwLeft[] = {
		{x + 1044, y + 186}, {x + 1036, y + 182}, {x + 1027, y + 177}, {x + 1019, y + 170}, {x + 1019, y + 162},
		{x + 1027, y + 155}, {x + 1036, y + 150}, {x + 1044, y + 146}
	};
	txPolygon(screwLeft, 8);

	parade::aux_fun::SetShapeColor(66, 69, 60);
	txRectangle(x + 1014, y + 170, x + 1019, y + 162);
}
void parade::aircraft::aux_fun::il_2::AssembleStars(int x, int y) {

	parade::aux_fun::SetShapeColor(194, 2, 0);

	POINT star1[] = {
		{x + 1710, y + 85}, {x + 1730, y + 100}, {x + 1722, y + 76}, {x + 1742, y + 62}, {x + 1717, y + 62},
		{x + 1710, y + 39}, {x + 1702,  y + 62}, {x + 1677, y + 62}, {x + 1697, y + 77}, {x + 1690, y + 100}
	};
	POINT star2[] = {
		{x + 1550, y + 171}, {x + 1567, y + 183}, {x + 1560, y + 163}, {x + 1577, y + 151}, {x + 1556, y + 151},
		{x + 1550, y + 131}, {x + 1543, y + 151}, {x + 1522, y + 151}, {x + 1539, y + 163}, {x + 1532, y + 183}
	};

	txPolygon(star1, 10);
	txPolygon(star2, 10);
}
void parade::aircraft::aux_fun::il_2::AssembleTailBottom(int x, int y) {

	parade::aux_fun::SetShapeColor(74, 101, 112);
	POINT up[] = {
		{x + 1609, y + 152}, {x + 1770, y + 153}, {x + 1758, y + 157}, {x + 1682, y + 164}, {x + 1610, y + 155},
		{x + 1608, y + 155}
	};
	txPolygon(up, 6);

	parade::aux_fun::SetShapeColor(32, 50, 70);
	POINT down[] = {
		{x + 1610, y + 155}, {x + 1634, y + 157}, {x + 1659, y + 158}, {x + 1691, y + 158}, {x + 1723, y + 156},
		{x + 1759, y + 155}, {x + 1770, y + 153}, {x + 1760, y + 159}, {x + 1748, y + 161}, {x + 1745, y + 164},
		{x + 1745, y + 170}, {x + 1741, y + 172}, {x + 1733, y + 173}, {x + 1724, y + 173}, {x + 1713, y + 171},
		{x + 1708, y + 172}, {x + 1694, y + 175}, {x + 1673, y + 179}, {x + 1656, y + 183}, {x + 1643, y + 185},
		{x + 1635, y + 186}, {x + 1630, y + 174}, {x + 1624, y + 166}, {x + 1616, y + 159}
	};
	txPolygon(down, 24);

	parade::aux_fun::SetShapeColor(95, 115, 130);
	POINT right[] = {
		{x + 1760, y + 159}, {x + 1770, y + 153}, {x + 1788, y + 153}, {x + 1761, y + 161}, {x + 1760, y + 159}
	};
	txPolygon(right, 5);
}

void parade::aircraft::AssembleIL2(int x, int y) {

	parade::aux_fun::ChangeCoordinates(x, y, aux_fun::il_2::x0, aux_fun::il_2::y0);

	aux_fun::il_2::AssembleBody(x, y);
	aux_fun::il_2::AssembleTailBottom(x, y);
	aux_fun::il_2::AssembleChassis(x, y);
	aux_fun::il_2::AssembleCab(x, y);
	aux_fun::il_2::AssembleCamouflage(x, y);
	aux_fun::il_2::AssembleExhaustPipes(x, y);
	aux_fun::il_2::AssembleScrew(x, y);
	aux_fun::il_2::AssembleGun(x, y);
	aux_fun::il_2::AssembleBracing(x, y);
	aux_fun::il_2::AssembleStars(x, y);
}