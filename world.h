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
		int numCaterpie; // user input
		int numWeedle; // user input
	
		// REGULATORY
		int numEasy; // for array creation/deletion
		int numMedium; // for array creation/deletion
		int numHard; // for array creation/deletion
		string type; // either grass, fire, or water
		int level; // either 1, 2, or 3
		bool won; // used for stopping the game loop/ending game	

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
		void pokecenter(int, int);
		void boss_sequence(int, int);
		void fight_loop(int,int,int,int);

		// AESTHETICS
		void display_logo2();
		string get_swanson_quote();
		
		// STARTUP
		World(); // DEFAULT CONSTRUCTOR
//		World(World&); // SHAMEFUL FUNCTION
		void fill_easy();
		void fill_medium();
		void fill_hard();
		void fill_boss();
		void fill_s();
 
		// BIG THREE
		~World();
		Mob*** get_mob();
		Starter*** get_s();
		int get_numEasy();
		int get_numMedium();
		int get_numHard();
};

#endif
