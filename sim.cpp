#include "sim.hpp"
#include <ctime>
#include <cmath>
Simulation::Simulation()
{
	out.open("results.csv");
}

Simulation::~Simulation()
{
	out.close();
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
		simulateBattle();
#if logging
		for (auto j:PCs)
		{
			out <<"run " <<i+1 <<"\n"
			<<"char:," <<j.name <<",avg," <<j.total/100 <<"\n"
			<<"Highest," <<j.highest <<"\n"
			<<"Lowest," <<j.lowest <<"\n";
		}
		out <<"char:, Boss" <<",avg," <<boss.total/100 <<"\n"
		<<"Highest," <<boss.highest <<"\n"
		<<"Lowest," <<boss.lowest <<"\n";
#endif
		for (auto j:PCs)
		{
			j.total=0;
			j.highest=0;
			j.lowest=100;
		}
		boss.total=0;
		boss.highest=0;
		boss.lowest=100;
	}
}

void Simulation::simulateBattle()
{
	int result=0;
	for (int i=0; i < 100; ++i)
	{
		for (auto j : PCs)
		{
			result=roll(j.toHit);
			j.rolls[i]=result;
			if (j.highest < result) j.highest=result;
			if (j.lowest > result) j.lowest=result;
		}
		result=roll(boss.toHit);
		boss.rolls[i]=result;
		if (boss.highest < result) boss.highest=result;
		if (boss.lowest > result) boss.lowest=result;

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
