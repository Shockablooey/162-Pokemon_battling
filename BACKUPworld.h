#ifndef WORLD_H
#define WORLD_H
#include "easy.h"
#include "medium.h"
#include "hard.h"
#include "boss.h"
#include "water.h"
#include "grass.h"
#include "fire.h"
#include "error.h"


class World{
	private:
		// USER INPUT
		int numCaterpie;
		int numWeedle;
		int numEasy;
		string type; // either grass, fire, or water
		int level; // either 1, 2, or 3	

		// POLYMORPHS 
		Mob ***mob; 
		Starter ***s;
		
		Error e; // error check class object

	public:
		// RUN GAME
		void choose_starter();
		void bulbasaur_choice(char*, bool*, ifstream&);
		void charmander_choice(char*, bool*, ifstream&);
		void squirtle_choice(char*, bool*, ifstream&);

		void game_loop();
		void starter_for_fight();
		void mob_for_fight(int, int);
		void check_xp(int, int, int, int);
		void fight(int, int, int, int);

		// AESTHETICS
		void display_logo();
		void display_logo2();
		
		// STARTUP
		void make_dynamic_arrays();
		void fill_easy();
		void fill_medium();
		void fill_hard();
		void fill_boss();
		void fill_s();
	
		// TESTING	
		void test();
 
		// BIG THREE
		~World();
};

#endif
