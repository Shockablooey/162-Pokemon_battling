#include "starter.h"

/********************************************************************* 
 ** Function: starter_damage
 ** Description: either doubles or halfs the damage it is given from
 ** creature damage and sends it to the lowest inherited class 
 ** Parameters: none
 ** Pre-Conditions: creature damage is set
 ** Post-Conditions: damage is given to the baby classes
 *********************************************************************/
int Starter::starter_damage(){
	int damage = creature_damage();
	
	if (rand()%100 < 20 && damage != 0){
		cout << "It's super effective!" << endl;
		damage = damage*2;
	}
	else if (rand()%100 < 20 && damage != 0 && damage != 1){
		// don't try to halve a MISS or an attack that is already 1 damage
		cout << "It's not very effective..." << endl;
		damage = damage/2;
	}
	return damage;
}
/********************************************************************* 
 ** Function: virtual Starter destructor
 ** Description: used for polymorph destructing
 ** Parameters: none
 ** Pre-Conditions: array goes out of scope
 ** Post-Conditions: polymorph destruction happens
 *********************************************************************/
Starter::~Starter(){
}
/********************************************************************* 
 ** Function: shameful clone function 
 ** Description: would have been used to make copies of objects for 
 ** the big three
 ** Parameters: none 
 ** Pre-Conditions: none
 ** Post-Conditions: returns a new object that is really the same object
 *********************************************************************/
/*Starter* Starter::clone(){
	Starter* temp = new Starter;
	*temp = *this;
	return temp;
}*/
