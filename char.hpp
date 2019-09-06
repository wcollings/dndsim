#ifndef __CHAR_H__
#define __CHAR_H__

#include <tuple>

class Char{
	public:
	int ac;
	int hp;
	std::tuple<int, int, int> toHit;
	std::tuple<int,int,int> damage;
	Char(int,int,int);
	bool isDead();
	void hit(int, int);
};


#endif
