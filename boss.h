// BOSS . H 

#ifndef BOSS_H
#define BOSS_H
#include "mob.h"

/****************************************************************************************************/
class Parham : public Mob{
	public:	
		int get_damage();
		void health_edit(int);
		string get_pokemon();
		int get_hp();
		Parham();	
};
/****************************************************************************************************/
class Gyarados : public Mob{
	public:	
		int get_damage();
		void health_edit(int);
		string get_pokemon();
		int get_hp();
		Gyarados();	
};
/****************************************************************************************************/
#endif
