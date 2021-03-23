#include "TXparade.h"

int main() {

	parade::CreateParadeWindow();

	parade::environment::CreateEnvironment();

	parade::vehicles::CreateLightBeams(916, 325);
	parade::vehicles::CreateLightBeams(0, 325);
	parade::vehicles::CreateLightBeams(1800, 325);

	parade::buildings::BuildTower(916, 780);
	parade::buildings::BuildMausoleum(901, 780);

	parade::vehicles::AssembleAirDefenseSystem(491, 670);

	parade::сamouflage currentCamouflage = parade::сamouflage::SUMMER;

	parade::vehicles::AssebmleGAZAA(70, 820, currentCamouflage);
	parade::vehicles::AssembleBM13(800, 820, currentCamouflage);
	parade::vehicles::AssembleBM13(1500, 820, currentCamouflage);

	parade::vehicles::AssembleT34(200, 890, currentCamouflage);
	parade::vehicles::AssembleBA3(850, 890, currentCamouflage);
	parade::vehicles::AssembleT34(1550, 890, currentCamouflage);

	parade::aircraft::AssembleIL2(1000, 200);
	parade::aircraft::AssembleIL2(100, 200);

	return 0;
}