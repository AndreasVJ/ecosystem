#include <iostream>
using namespace std;

#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"

#include "entity.h"

class Simulation : public olc::PixelGameEngine {
public:
	Simulation() {
		sAppName = "MOST EPIC SIMULATION YOU WILL EVER SEEE!!!! OMG, WTF";
	}

private:
	Entity* testEntity;

public:
	bool OnUserCreate() override
	{
		testEntity = new Entity(0, 69.420, 420.420);
		return true;
	}

	bool OnUserUpdate(float fElapsedTime) override
	{
		// called once per frame
		for (int x = 0; x < ScreenWidth(); x++)
			for (int y = 0; y < ScreenHeight(); y++)
				Draw(x, y, olc::Pixel(rand() % 255, rand() % 255, rand() % 255));
		return true;
	}
};

int main() {
	Simulation simulation;
	if (simulation.Construct(1980, 1080, 1, 1))
		simulation.Start();
	return 0;
}