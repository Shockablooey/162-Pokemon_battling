// WATER . H 

#ifndef WATER_H
#define WATER_H
#include "starter.h"

/****************************************************************************************************/
class Squirtle : public Starter{
	public:	
		int get_damage();
		void health_edit(int);
		string get_name();
		int get_hp();
		void win();
		void set_name();
		int get_xp();
		void set_maxHp();
		void evolve();
		Squirtle();	
};
/****************************************************************************************************/
class Wartortle : public Starter{
	public:	
		int get_damage();
		void health_edit(int);
		string get_name();
		int get_hp();
		void win();
		void set_name();
		int get_xp();
		void set_maxHp();
		void evolve();
		Wartortle();	
};
/****************************************************************************************************/
class Blastoise : public Starter{
	public:
		int get_damage();
		void health_edit(int);
		string get_name();
		int get_hp();
		void win();
		void set_name();
		int get_xp();
		void set_maxHp();
		void evolve();
		Blastoise();
};
/****************************************************************************************************/
#endif
