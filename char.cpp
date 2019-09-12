#include "Char.hpp"

Char::Char()
{
	highest=0;
	lowest=100;
	total=0;
}

Char::Char(int AC, int HP)
{
	ac=AC;
	toHit=HIT;
	highest=0;
	lowest=100;
	total=0;

}

void Char::setHit(int dice, int val, int bonus)
{
	toHit=make_tuple(dice, val, bonus);
}

void Char::setDamage(int dice, int val, int bonus)
{
	damage=std::make_tuple(dice, val, bonus);
}

bool isDead()
{
	return hp>1?true:false;
}
void hit(int hit, int damage)
{
	if (hit >=ac) hp-=damage;
}
