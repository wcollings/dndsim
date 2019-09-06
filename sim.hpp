#ifndef __SIM_H__
#define __SIM_H__
#include "Char.hpp"
#include <vector>
class Simulation{
	public:
		int PCwin;
		int NPCwin;
		std::vector<Char> PCs;
		Char boss;
	Simulation();
	void addPC(Char);
	void setNPC(Char);
	void simulate();
};

#endif
