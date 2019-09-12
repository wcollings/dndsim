#ifndef __SIM_H__
#define __SIM_H__
#include "Char.hpp"
#include <vector>
#include <fstream>
class Simulation{
	public:
		std::vector<Char> PCs;
		Char boss;
		std::ofstream out;
	Simulation();
	void addPC(Char);
	void setNPC(Char);
	void simulate();
};

#endif
