// MEDIUM . H 

#ifndef MEDIUM_H
#define MEDIUM_H
#include "mob.h"

/****************************************************************************************************/
class Haunter : public Mob{
	public:	
		int get_damage();
		void health_edit(int);
		string get_pokemon();
		int get_hp();
		Haunter();	
};
/****************************************************************************************************/
class Lapras : public Mob{
	public:	
		int get_damage();
		void health_edit(int);
		string get_pokemon();
		int get_hp();
		Lapras();	
};
/****************************************************************************************************/
class Nidoking : public Mob{
	public:
		int get_damage();
		void health_edit(int);
		string get_pokemon();
		int get_hp();
		Nidoking();
};
/****************************************************************************************************/
class Rapidash : public Mob{
	public:
		int get_damage();
		void health_edit(int);
		string get_pokemon();
		int get_hp();
		Rapidash();
};
/****************************************************************************************************/
class Starmie : public Mob{
	public:
		int get_damage();
		void health_edit(int);
		string get_pokemon();
		int get_hp();
		Starmie();
};
/****************************************************************************************************/
class Onix : public Mob{
	public:
		int get_damage();
		void health_edit(int);
		string get_pokemon();
		int get_hp();
		Onix();
};
/****************************************************************************************************/
#endif
