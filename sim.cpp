#include "sim.hpp"
#include <ctime>
#include <cmath>
Simulation::Simulation()
{
	PCwin=0;
	NPCwin=0;
}

void Simulation::addPC(Char pc)
{
	PCs.push_back(pc);
};

void Simulation::setNPC(Char npc)
{
	boss=npc;
}

void Simulation::simulate()
{
	for (int i=0; i <100; ++i)
	{
		
	}

}

void Simulation::simulateBattle(int strategy)
{
	std::vector<int> startingHP;
	int target=0;
	bool done=false;
	for (auto i : PCs)
	{
		startingHP.push_back(i.hp);
	}
	startingHP.push_back(boss.hp);
	while (!done)
	{
		PCs[target].hit(roll(roll(boss.toHit), roll(boss.damage));
		if (PCs[target].isDead())
		{
			PCs.erase(PCs.begin()+target);

		}
		for (int i=0; i < 3; ++i)
		{
			if (PCs.size() >=i)
				boss.hit(roll(PCs[i].toHit), roll(PCs[i].damage));
		if (boss.isDead())
		{
			PCwin++;
			return;
		}


	}

}

int roll(std::tuple<int, int, int> die)
{
	srand(time(NULL));
	int result=0;
	for (int i=0; i < std::get<0>die; ++i)
		result+=rand() %std::get<1>die;
	return result+std::get<2>die;
}
