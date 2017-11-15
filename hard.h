// HARD . H 

#ifndef HARD_H
#define HARD_H
#include "mob.h"

/****************************************************************************************************/
class Slowbro : public Mob{
	public:	
		int get_damage();
		void health_edit(int);
		string get_pokemon();
		int get_hp();
		Slowbro();	
};
/****************************************************************************************************/
class Exeggutor : public Mob{
	public:	
		int get_damage();
		void health_edit(int);
		string get_pokemon();
		int get_hp();
		Exeggutor();	
};
/****************************************************************************************************/
class Golem : public Mob{
	public:
		int get_damage();
		void health_edit(int);
		string get_pokemon();
		int get_hp();
		Golem();
};
/****************************************************************************************************/
class Ditto : public Mob{
	public:
		int get_damage();
		void health_edit(int);
		string get_pokemon();
		int get_hp();
		Ditto();
};
/****************************************************************************************************/
class Rhydon : public Mob{
	public:
		int get_damage();
		void health_edit(int);
		string get_pokemon();
		int get_hp();
		Rhydon();
};
/****************************************************************************************************/
#endif
