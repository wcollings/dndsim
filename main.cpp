
#include "sim.hpp"

using namespace std;

int main()
{
	simulation profile;
	Char temp;
	//Mike
		temp.name="Blark Bent";
		temp.ac=20;
		temp.toHit=std::make_tuple(1,20,4);
		profile.addPC(temp);
	//Moose
		temp.name="Rellik";
		temp.ac=21;
		temp.toHit=std::make_tuple(1,20,5);
		profile.addPC(temp);
	//Anthony
		temp.name="Baldur";
		temp.ac=18;
		temp.toHit=std::make_tuple(1,20,3);
		profile.addPC(temp);
	//Jon
		temp.name="Roperos";
		temp.ac=19;
		temp.toHit=std::make_tuple(1,20,2);
		profile.push_back(temp);


}
