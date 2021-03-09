#include <TXLib.h>

namespace parade {

	namespace aux_fun {
		void SetShapeColor(int x, int y, int z) {

			txSetFillColor(RGB(x, y, z));
			txSetColor(RGB(x, y, z));
		}
	}

	namespace environment {

		namespace aux_fun {

			void CreateSky() {

				parade::aux_fun::SetShapeColor(86, 150, 198);
				txRectangle(0, 0, 1800, 326);
			}
			void CreateWall() {

				parade::aux_fun::SetShapeColor(158, 86, 64);
				txRectangle(0, 326, 1800, 780);
			}

			void CreateWhiteMarkup() {

				parade::aux_fun::SetShapeColor(202, 202, 202);
				txRectangle(0, 832, 393, 836);
				txRectangle(654, 832, 1189, 836);
				txRectangle(1462, 832, 1800, 836);
			}
			void CreateYellowMarkup() {

				parade::aux_fun::SetShapeColor(200, 190, 163);
				txRectangle(0, 873, 1800, 877);
			}
			void CreateRoad() {

				parade::aux_fun::SetShapeColor(115, 115, 117);
				txRectangle(0, 780, 1800, 900);

				CreateWhiteMarkup();
				CreateYellowMarkup();
			}
		}

		void CreateEnvironment() {
			aux_fun::CreateSky();
			aux_fun::CreateWall();
			aux_fun::CreateRoad();
		}
	}

	namespace buildings {

		namespace aux_fun {

			namespace mausoleum {

				void LayFoundation() {

					parade::aux_fun::SetShapeColor(60, 65, 68);
					txRectangle(223, 780, 1578, 736);
				}
				void BuildArch() {

					parade::aux_fun::SetShapeColor(16, 16, 16);
					txRectangle(364, 624, 1451, 544);

					parade::aux_fun::SetShapeColor(158, 86, 64);
					txRectangle(1451, 544, 1298, 599);
					txRectangle(364, 544, 522, 599);
				}
				void BricksOnArch() {

					parade::aux_fun::SetShapeColor(33, 37, 40);
					txRectangle(522, 599, 378, 581);
					txRectangle(1298, 599, 1442, 581);
				}
				void BuildGrayWall() {

					parade::aux_fun::SetShapeColor(33, 37, 40);
					txRectangle(842, 599, 600, 736);
					txRectangle(973, 599, 1216, 736);
				}
				void BuildBrickFrontSide() {

					parade::aux_fun::SetShapeColor(129, 74, 54);
					txRectangle(364, 624, 654, 736);
					txRectangle(1161, 624, 1451, 736);
				}
				void BuildEntrance() {

					parade::aux_fun::SetShapeColor(0, 0, 0);
					txRectangle(842, 599, 973, 736);
				}
				void BuildPyramid() {

					parade::aux_fun::SetShapeColor(129, 74, 54);
					txRectangle(522, 544, 1298, 491);

					parade::aux_fun::SetShapeColor(106, 53, 37);
					txRectangle(609, 491, 1217, 479);

					parade::aux_fun::SetShapeColor(129, 74, 54);
					txRectangle(682, 479, 1147, 396);

					parade::aux_fun::SetShapeColor(106, 53, 37);
					txRectangle(752, 396, 1077, 374);
				}
				void BuildCrownFrame() {

					parade::aux_fun::SetShapeColor(129, 74, 54);
					txRectangle(778, 374, 1052, 357);
					txRectangle(803, 357, 826, 314);
					txRectangle(1006, 357, 1029, 314);
					txRectangle(803, 314, 1029, 289);
					txRectangle(814, 289, 1018, 279);
				}
				void BuildCrownInside() {

					parade::aux_fun::SetShapeColor(42, 36, 36);
					txRectangle(826, 337, 1006, 314);

					parade::aux_fun::SetShapeColor(16, 16, 16);
					txRectangle(847, 356, 867, 314);
					txRectangle(889, 356, 909, 314);
					txRectangle(927, 356, 948, 314);
					txRectangle(966, 356, 987, 314);
				}
				void BuildDrawText() {
					txSetColor(RGB(106, 53, 37));
					txSelectFont("Verdana", 40, 25, false, false, false, false, 0);
					txDrawText(806, 555, 1009, 591, "À≈Õ»Õ");
				}
			}
			namespace tower {

				void BuildWireframe() {

					parade::aux_fun::SetShapeColor(106, 53, 37);
					POINT tower_low[] = { {793, 356}, {793, 259}, {777, 229}, {777, 184}, {1055, 184}, {1055, 229}, {1039, 259}, {1039, 356} };
					txPolygon(tower_low, 8);

					parade::aux_fun::SetShapeColor(129, 74, 54);
					txRectangle(823, 184, 1009, 107);
				}
				void BuildWindows() {

					parade::aux_fun::SetShapeColor(16, 16, 16);
					txRectangle(854, 184, 901, 129);
					txRectangle(931, 184, 978, 129);
				}
				void BuildRoof() {

					parade::aux_fun::SetShapeColor(21, 102, 85);
					POINT roof[] = { {823, 107}, {846, 0}, {986, 0}, {1008, 107} };
					txPolygon(roof, 4);
				}
			}
		}

		void BuildMausoleum() {
			aux_fun::mausoleum::LayFoundation();
			aux_fun::mausoleum::BuildArch();
			aux_fun::mausoleum::BricksOnArch();
			aux_fun::mausoleum::BuildGrayWall();
			aux_fun::mausoleum::BuildBrickFrontSide();
			aux_fun::mausoleum::BuildEntrance();
			aux_fun::mausoleum::BuildPyramid();
			aux_fun::mausoleum::BuildCrownFrame();
			aux_fun::mausoleum::BuildCrownInside();
			aux_fun::mausoleum::BuildDrawText();
		}
		void BuildTower() {
			aux_fun::tower::BuildWireframe();
			aux_fun::tower::BuildWindows();
			aux_fun::tower::BuildRoof();
		}
	}

	namespace vehicles {

		namespace gaz_aa {

			void AssembleBody() {

				parade::aux_fun::SetShapeColor(72, 112, 75);
				txRectangle(326, 756, 662, 682);

				parade::aux_fun::SetShapeColor(45, 74, 44);

				txRectangle(345, 758, 351, 682);
				txRectangle(448, 758, 454, 682);
				txRectangle(538, 758, 544, 682);
				txRectangle(635, 758, 641, 682);

				txRectangle(326, 772, 333, 756);
				txRectangle(436, 772, 443, 756);
				txRectangle(547, 772, 554, 756);
				txRectangle(655, 772, 662, 756);

				txRectangle(313, 792, 665, 772);
			}
			void AssembleCab() {

				parade::aux_fun::SetShapeColor(58, 69, 3);
				POINT cab[] = { {313, 792}, {313, 623}, {188, 632}, {176, 644}, {188, 652}, {188, 700}, {37, 708}, {37, 792}, {188, 792} };
				txPolygon(cab, 9);
			}
			void AssembleGimbal() {

				parade::aux_fun::SetShapeColor(21, 26, 19);

				txRectangle(37, 816, 510, 792);
				txRectangle(526, 805, 636, 792);

				POINT gimbal[] = { {444, 834}, {443, 822}, {308, 808}, {286, 815} };
				txPolygon(gimbal, 4);
			}
			void AssembleWheels() {

				parade::aux_fun::SetShapeColor(81, 81, 79);
				txCircle(494, 829, 55);
				txCircle(93, 829, 55);

				parade::aux_fun::SetShapeColor(14, 12, 13);
				txCircle(494, 829, 35);
				txCircle(93, 829, 35);
			}
			void AssembleFrontEnd() {

				parade::aux_fun::SetShapeColor(82, 80, 59);
				POINT front[] = { {37, 708}, {26, 708}, {27, 816}, {39, 816} };
				txPolygon(front, 4);
			}
			void AssembleWindow() {

				parade::aux_fun::SetShapeColor(191, 199, 220);
				txRectangle(201, 700, 289, 648);
			}
			void CarDrawText() {

				txSetColor(TX_WHITE);
				txSelectFont("Verdana", 40);
				txDrawText(203, 721, 290, 757, "√¿«");
			}
		}
		namespace bm_13 {
			void AssembleLever() {

				parade::aux_fun::SetShapeColor(57, 74, 38);
				POINT lever[] = { {1486, 759}, {1486, 754}, {1565, 751}, {1564, 746}, {1476, 748}, {1477, 759} };
				txPolygon(lever, 6);
			}
			void AssembleBody() {

				parade::aux_fun::SetShapeColor(76, 96, 43);
				txRectangle(1343, 740, 1462, 797);
				txRectangle(1456, 758, 1634, 785);

				parade::aux_fun::SetShapeColor(57, 74, 38);
				txRectangle(1343, 712, 1383, 780);
			}
			void AssembleCab() {

				parade::aux_fun::SetShapeColor(76, 96, 43);
				POINT cab[] = { {1343, 808}, {1343, 658}, {1321, 635}, {1212, 643}, {1212, 654}, {1215, 655}, {1215, 719}, {1069, 721}, {1069, 789}, {1142, 808} };
				txPolygon(cab, 10);
			}
			void AssembleWindow() {

				parade::aux_fun::SetShapeColor(191, 199, 220);
				txRectangle(1227, 662, 1299, 712);
			}
			void AssemblepPotection() {

				parade::aux_fun::SetShapeColor(57, 74, 38);

				txCircle(1459, 805, 39);
				txCircle(1604, 805, 39);

				txRectangle(1454, 766, 1604, 843);
				txRectangle(1420, 843, 1644, 805);
			}
			void AssembleGimbal() {

				parade::aux_fun::SetShapeColor(57, 74, 38);
				txRectangle(1122, 797, 1421, 834);
			}
			void AssembleWheels() {

				parade::aux_fun::SetShapeColor(68, 63, 41);
				txCircle(1473, 834, 50);
				txCircle(1591, 834, 50);
				txCircle(1092, 834, 50);

				parade::aux_fun::SetShapeColor(57, 80, 38);
				txCircle(1473, 834, 29);
				txCircle(1591, 834, 29);
				txCircle(1092, 834, 29);
			}
			void AssembleBoom() {

				parade::aux_fun::SetShapeColor(76, 96, 43);

				POINT beam_1[] = { {1386, 660}, {1364, 639}, {1263, 600}, {1225, 593} };
				POINT beam_2[] = { {1431, 705}, {1426, 690}, {1356, 623}, {1346, 625} };
				POINT beam_3[] = { {1431, 742}, {1424, 742}, {1372, 574}, {1381, 572} };
				POINT beam_4[] = { {1454, 761}, {1468, 761}, {1457, 722}, {1445, 720} };
				POINT beam_5[] = { {1462, 697}, {1454, 695}, {1472, 645}, {1480, 646} };
				POINT beam_6[] = { {1577, 737}, {1576, 728}, {1469, 716}, {1474, 725} };
				POINT beam_7[] = { {1577, 737}, {1571, 725}, {1475, 660}, {1473, 667} };
				POINT beam_8[] = { {1579, 716}, {1586, 711}, {1520, 650}, {1506, 648} };
				POINT beam_9[] = { {1632, 717}, {1631, 708}, {1695, 649}, {1709, 650} };

				txPolygon(beam_1, 4);
				txPolygon(beam_2, 4);
				txPolygon(beam_3, 4);
				txPolygon(beam_4, 4);
				txPolygon(beam_5, 4);
				txPolygon(beam_6, 4);
				txPolygon(beam_7, 4);
				txPolygon(beam_8, 4);
				txPolygon(beam_9, 4);

				parade::aux_fun::SetShapeColor(57, 74, 38);
				POINT boom[] = { {1756, 657}, {1756, 635}, {1186, 573}, {1183, 594} };
				txPolygon(boom, 4);
			}
			void AssembleBoomConnections() {

				parade::aux_fun::SetShapeColor(76, 96, 43);

				POINT connection_1[] = { {1632, 758}, {1607, 728}, {1581, 758} };
				txPolygon(connection_1, 3);

				parade::aux_fun::SetShapeColor(57, 74, 38);

				POINT connection_2[] = { {1639, 724}, {1630, 697}, {1568, 717}, {1577, 743} };
				POINT connection_3[] = { {1520, 650}, {1522, 630}, {1470, 625}, {1468, 645} };
				POINT connection_4[] = { {1476, 728}, {1481, 701}, {1418, 688}, {1412, 715} };
				POINT connection_5[] = { {1369, 632}, {1371, 612}, {1327, 608}, {1326, 628} };

				txPolygon(connection_2, 4);
				txPolygon(connection_3, 4);
				txPolygon(connection_4, 4);
				txPolygon(connection_5, 4);
			}
			void AssembleShells() {

				parade::aux_fun::SetShapeColor(70, 61, 30);

				POINT bullet_1[] = { {1757, 674}, {1758, 657}, {1648, 645}, {1630, 650}, {1642, 660} };
				POINT bullet_2[] = { {1758, 636}, {1759, 618}, {1648, 606}, {1627, 612}, {1643, 623} };

				txPolygon(bullet_1, 5);
				txPolygon(bullet_2, 5);
			}
			void CarDrawText() {
				txSetColor(TX_WHITE);
				txSelectFont("Verdana", 40);
				txDrawText(1227, 726, 1314, 762, "¡Ã-13");

			}
		}
		namespace t_34 {
			void AssembleCasing() {

				parade::aux_fun::SetShapeColor(50, 50, 42);
				POINT casing[] = { {183, 253}, {107, 208}, {145, 170}, {752, 170}, {792, 185}, {755, 253} };
				txPolygon(casing, 6);
			}
			void AssembleWheels() {

				parade::aux_fun::SetShapeColor(70, 61, 30);
				txCircle(159, 220, 26);
				txCircle(243, 241, 48);
				txCircle(355, 241, 48);
				txCircle(469, 241, 48);
				txCircle(568, 241, 48);
				txCircle(668, 241, 48);
				txCircle(754, 226, 32);

				parade::aux_fun::SetShapeColor(52, 51, 47);
				txCircle(159, 220, 11);
				txCircle(243, 241, 16);
				txCircle(355, 241, 16);
				txCircle(469, 241, 16);
				txCircle(568, 241, 16);
				txCircle(668, 241, 16);

				txCircle(754, 226, 11);
			}
			void AssembleTrack() {

				parade::aux_fun::SetShapeColor(34, 25, 26);

				POINT part_1[] = { {151, 194}, {149, 191}, {131, 206}, {134, 209} };
				POINT part_2[] = { {131, 206}, {135, 206}, {136, 229}, {132, 229} };
				POINT part_3[] = { {135, 227}, {132, 229}, {147, 247}, {150, 245} };
				POINT part_4[] = { {149, 244}, {234, 288}, {232, 291}, {147, 247} };
				POINT part_5[] = { {232, 291}, {232, 288}, {665, 288}, {665, 291} };
				POINT part_6[] = { {664, 288}, {665, 291}, {764, 260}, {763, 257} };
				POINT part_7[] = { {764, 260}, {762, 257}, {781, 244}, {783, 247} };
				POINT part_8[] = { {783, 247}, {780, 246}, {786, 224}, {789, 225} };
				POINT part_9[] = { {786, 226}, {789, 225}, {782, 203}, {778, 204} };
				POINT part_10[] = { {780,  206}, {782, 203}, {763, 191}, {761, 194} };
				POINT part_11[] = { {763, 195}, {763, 191}, {148, 191}, {148, 195} };

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
			void AssembleTurret() {

				parade::aux_fun::SetShapeColor(89, 82, 63);
				POINT turret[] = {
					{432, 120}, {432, 110}, {474, 110}, {474, 106}, {518, 106},
					{485, 51}, {452, 51},{452, 41}, {386, 41}, {386, 51},
					{291, 51}, {273, 59},{241, 59}, {235, 68}, {31, 68},
					{31,83}, {226,83}, {224,86}, {224,106}, {270,106},
					{285,113}, {285,120}
				};
				txPolygon(turret, 22);
			}
			void AssembleBody() {

				parade::aux_fun::SetShapeColor(75, 71, 60);
				POINT body[] = { {197, 170}, {280, 120}, {691, 120}, {752, 170} };
				txPolygon(body, 4);

				parade::aux_fun::SetShapeColor(104, 97, 81);
				txRectangle(432, 153, 691, 110);

				parade::aux_fun::SetShapeColor(96, 73, 59);
				txRectangle(451, 153, 457, 110);
				txRectangle(535, 153, 541, 110);
				txRectangle(581, 153, 586, 110);
				txRectangle(667, 153, 673, 110);
			}
			void CarDrawText() {

				txSetColor(TX_WHITE);
				txSelectFont("Verdana", 40, 0, false, true, false, false, 0);
				txDrawText(344, 60, 469, 96, "–Ó‰ËÌ‡");
			}
		}
		namespace ba_3 {
			void AssembleTurret() {

				parade::aux_fun::SetShapeColor(158, 169, 104);
				POINT turret[] = {
					{1685, 113},{1685, 92},{1730, 89},{1730, 45},{1539, 43},{1539, 48},{1533, 48},{1533, 55},{1523, 69},{1486, 70},{1482, 72},{1455, 73},{1450, 76},{1380, 76},
					{1380, 84},{1451, 84},{1454, 85},{1482, 85},{1486, 88},{1520, 88},{1536, 104},{1536, 113}
				};
				txPolygon(turret, 22);
			}
			void AssembleStar() {

				parade::aux_fun::SetShapeColor(253, 106, 72);
				POINT star[] = {
					{1608, 90},{1593, 98},{1596, 81},{1584, 69},{1601, 67},{1608, 52},{1616, 67},{1632, 69},{1620, 81},{1623, 98}
				};
				txPolygon(star, 10);
			}
			void AssembleBody() {

				parade::aux_fun::SetShapeColor(168, 179, 113);
				POINT body[] = { {1230, 254}, {1251, 158}, {1406, 141}, {1428, 107}, {1512, 98}, {1529, 114}, {1694, 109}, {1759, 229} };
				txPolygon(body, 8);
			}
			void AssembleWheels() {

				parade::aux_fun::SetShapeColor(60, 82, 93);
				txCircle(1275, 259, 45);
				txCircle(1383, 239, 45);
				txCircle(1584, 259, 45);
				txCircle(1691, 259, 45);

				parade::aux_fun::SetShapeColor(102, 101, 53);
				txCircle(1275, 259, 31);
				txCircle(1383, 239, 31);
				txCircle(1584, 259, 31);
				txCircle(1691, 259, 31);
			}
			void AssembleIron() {

				parade::aux_fun::SetShapeColor(158, 169, 104);
				txRectangle(1288, 204, 1341, 176);
				txRectangle(1445, 194, 1497, 117);
				txRectangle(1532, 204, 1704, 166);
			}
			void CarDrawText() {
				txSetColor(TX_WHITE);
				txSelectFont("Verdana", 40);
				txDrawText(1543, 121, 1687, 158, "¡¿-3");

			}
		}

		void AssebmleGAZAA() {
			gaz_aa::AssembleBody();
			gaz_aa::AssembleCab();
			gaz_aa::AssembleGimbal();
			gaz_aa::AssembleWheels();
			gaz_aa::AssembleFrontEnd();
			gaz_aa::AssembleWindow();
			gaz_aa::CarDrawText();
		}
		void AssembleT34() {
			t_34::AssembleCasing();
			t_34::AssembleWheels();
			t_34::AssembleTrack();
			t_34::AssembleTurret();
			t_34::AssembleBody();
			t_34::CarDrawText();
		}
		void AssembleBA3() {
			ba_3::AssembleTurret();
			ba_3::AssembleStar();
			ba_3::AssembleBody();
			ba_3::AssembleWheels();
			ba_3::AssembleIron();
			ba_3::CarDrawText();
		}
		void AssembleBM13() {
			bm_13::AssembleLever();
			bm_13::AssembleBody();
			bm_13::AssembleCab();
			bm_13::AssembleWindow();
			bm_13::AssemblepPotection();
			bm_13::AssembleGimbal();
			bm_13::AssembleWheels();
			bm_13::AssembleBoom();
			bm_13::AssembleBoomConnections();
			bm_13::AssembleShells();
			bm_13::CarDrawText();
		}
	}
}

int main() {

	txCreateWindow(1800, 900);

	parade::environment::CreateEnvironment();

	parade::buildings::BuildTower();
	parade::buildings::BuildMausoleum();

	parade::vehicles::AssebmleGAZAA();
	parade::vehicles::AssembleT34();
	parade::vehicles::AssembleBA3();
	parade::vehicles::AssembleBM13();

	return 0;
}