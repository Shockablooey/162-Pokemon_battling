// GRASS . H 
#ifndef GRASS_H
#define GRASS_H
#include "starter.h"

/****************************************************************************************************/
class Bulbasaur : public Starter{
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
		Bulbasaur();	
};
/****************************************************************************************************/
class Ivysaur : public Starter{
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
		Ivysaur();	
};
/****************************************************************************************************/
class Venusaur : public Starter{
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
		Venusaur();
};
/****************************************************************************************************/
#endif
