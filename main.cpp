#include "TXparade.h"
#include <thread>
#include <chrono>

int main() {

	parade::CreateParadeWindow();

	parade::сamouflage currentCamouflage = parade::сamouflage::SUMMER;

	while (true) {

		for (int i = 1800; i >= -2800; i -= 20) {

			parade::environment::CreateEnvironment();

			parade::vehicles::CreateLightBeams(916, 325);
			parade::vehicles::CreateLightBeams(0, 325);
			parade::vehicles::CreateLightBeams(1800, 325);

			parade::buildings::BuildTower(916, 780);
			parade::buildings::BuildMausoleum(901, 780);

			parade::vehicles::AssembleAirDefenseSystem(491, 670);

			parade::vehicles::AssebmleGAZAA(i, 820, currentCamouflage);
			parade::vehicles::AssembleBM13(i + 900, 820, currentCamouflage);
			parade::vehicles::AssembleBM13(i + 1700, 820, currentCamouflage);

			parade::vehicles::AssembleT34(i + 500, 890, currentCamouflage);
			parade::vehicles::AssembleBA3(i + 1200, 890, currentCamouflage);
			parade::vehicles::AssembleT34(i + 2100, 890, currentCamouflage);

			parade::aircraft::AssembleIL2(i, 200);
			parade::aircraft::AssembleIL2(i + 1000, 200);

			std::this_thread::sleep_for(std::chrono::milliseconds(50));

		}
	}

	return 0;
}