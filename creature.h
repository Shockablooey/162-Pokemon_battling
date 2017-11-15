#ifndef CREATURE_H
#define CREATURE_H
#include "error.h"

class Creature{
	protected:
		Error e; // error class used for just one simple user input
		string pokemon; // stats given to all inheritance classes
		int hp;
		int dmg;
	public:
		int creature_damage(); // damage to give to starter/mob_damage
};

#endif
