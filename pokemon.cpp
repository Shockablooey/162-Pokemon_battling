/********************************************************************* 
 ** Program Filename: pokemon.cpp
 ** Author: Chase Stubblefield
 ** Date: 14 May 2017
 ** Description: pokemon battle simulator!
 ** Input: a bunch of files for the pokemon ascii art
 ** Output: the game
 *********************************************************************/
#include "world.h"

void display_logo();

/*=====================================================================
 * Future improvements
 * 	Instead of a 3D array, use a 2D that is deleted and rewritten
 * 	for each stage.
 * 	Open each picture file in the constructors and store the ascii
 * 	art in a single string each.
 *
 ====================================================================*/

int main(){
	srand(time(NULL)); // seeds random number generator

	display_logo();
	World w; // create a world object
//	World copyworld (w); // bring shame to your creator 

	w.choose_starter(); // choose type
	w.game_loop(); // run the game	
	
	return 0;
} // end of main function


/********************************************************************* 
 ** Function: display_logo
 ** Description: just a cout of a logo, fam.
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: no variables are altered
 *********************************************************************/
void display_logo(){
	system("clear");
	ifstream input;
	input.open("ascii/pokemonlogo");
	string temp;

	while(!input.eof()){
		getline(input,temp);
		cout << temp << endl;
	}
}
