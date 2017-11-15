#include "creature.h"

/********************************************************************* 
 ** Function: creature_damage
 ** Description: finds a random damage value from 0 to max. If result is
 ** 0, does a cout.
 ** Parameters: none
 ** Pre-Conditions: function call within starter/mob_damage 
 ** Post-Conditions: damage is given to mob/starter_damage
 *********************************************************************/
int Creature::creature_damage(){
	int damage = 0;
	damage = rand()%(dmg+1); // random int from 0 to creatures base dmg 

	if(damage == 0)
		cout << "MISS!" << endl;
	return damage;
}

