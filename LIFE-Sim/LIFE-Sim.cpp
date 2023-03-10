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
	EntityGenes* preyGenes;
	Entity* testEntity;

public:
	bool OnUserCreate() override
	{
		preyGenes = new EntityGenes(1.0, 1.0, 1.0, 1.0, 1.0);
		testEntity = new Entity(0, 69.420, 420.420, preyGenes);
		return true;
	}

	bool OnUserUpdate(float fElapsedTime) override
	{
		// Input
		if (GetKey(olc::Key::ESCAPE).bPressed)
			return false;
		
		// Render
		FillRectDecal(olc::vf2d(testEntity->pos.x, testEntity->pos.y), olc::vi2d(5, 5), olc::WHITE);

		return true;
	}
};

int main() {
	Simulation simulation;
	if (simulation.Construct(1920, 1080, 1, 1, 1))
		simulation.Start();
	return 0;
}