// EASY . H 
#ifndef EASY_H
#define EASY_H
#include "mob.h"

/****************************************************************************************************/
class Caterpie : public Mob{
	public:	
		int get_damage();
		void health_edit(int);
		string get_pokemon();
		int get_hp();
		Caterpie();	
};
/****************************************************************************************************/
class Weedle : public Mob{
	public:	
		int get_damage();
		void health_edit(int);
		string get_pokemon();
		int get_hp();
		Weedle();	
};
/****************************************************************************************************/
class Pidgey : public Mob{
	public:
		int get_damage();
		void health_edit(int);
		string get_pokemon();
		int get_hp();
		Pidgey();
};
/****************************************************************************************************/
class Rattata : public Mob{
	public:
		int get_damage();
		void health_edit(int);
		string get_pokemon();
		int get_hp();
		Rattata();
};
/****************************************************************************************************/
class Poliwag : public Mob{
	public:
		int get_damage();
		void health_edit(int);
		string get_pokemon();
		int get_hp();
		Poliwag();
};
/****************************************************************************************************/
class Nidoran : public Mob{
	public:
		int get_damage();
		void health_edit(int);
		string get_pokemon();
		int get_hp();
		Nidoran();
};
/****************************************************************************************************/
class Pikachu : public Mob{
	public:
		int get_damage();
		void health_edit(int);
		string get_pokemon();
		int get_hp();
		Pikachu();
};
/****************************************************************************************************/
class Vulpix : public Mob{
	public:
		int get_damage();
		void health_edit(int);
		string get_pokemon();
		int get_hp();
		Vulpix();
};
/****************************************************************************************************/
#endif
