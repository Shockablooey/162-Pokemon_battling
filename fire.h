// FIRE . H 

#ifndef FIRE_H
#define FIRE_H
#include "starter.h"

/****************************************************************************************************/
class Charmander : public Starter{
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
		Charmander();	
};
/****************************************************************************************************/
class Charmeleon : public Starter{
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
		Charmeleon();	
};
/****************************************************************************************************/
class Charizard : public Starter{
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
		Charizard();
};
/****************************************************************************************************/
#endif
