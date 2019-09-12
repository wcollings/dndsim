#ifndef __CHAR_H__
#define __CHAR_H__

#include <tuple>
#include <string>

class Char{
	public:
	int ac;
	char rolls[100];
	char highestRoll, lowestRoll;
	int total;
	std::string name;
	std::tuple<int, int, int> toHit;
	Char(int,int);
	Char();
};


#endif
