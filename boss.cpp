// BOSS . C P P 
#include "boss.h"

/********************************************************************* 
 ** Function: get_damage
 ** Description: gets damage for a pokemon, calling mob_damage 
 ** and creature_damage as well, printing picture and text to console
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: a damage value is returned and text is outputted
 *********************************************************************/
int Parham::get_damage(){
	ifstream input; 
	input.open("ascii/Bparham");
	string temp;
	int damage = 0;

	while(!input.eof()){ // PRINTS
		getline(input,temp);
		cout << temp << endl;
	}
	input.close();

	if (rand()%100 < 5){ 
		cout << "Classes, classes, and classes (Oh My!)" << endl;
		damage = mob_damage() + 400; // get super/not effective
	} 
	else if (rand()%100 < 10){
		cout << "One problem with this implementation is it is unwieldly to add new creatures!" << endl;
		damage = mob_damage() + 75;
	}
	else if (rand()%100 < 15){
		cout << "Jennifer uses towers of hanoi!  The student's have no problem finishing the lab in class!" << endl;
		damage = mob_damage() + 50;
	}
	else if (rand()%100 < 20){
		cout << "Jennifer uses bowling assignment!" << endl;
		damage = mob_damage() + 50;
	}
	else if (rand()%100 < 20){
		cout << "Jennifer uses cart class!  It's super ambiguous!" << endl;
		damage = mob_damage() + 50;
	}
	else{ 
		cout << "Jennifer goes skiing over the weekend!" << endl;
		damage = mob_damage();
	}	
	cout << "Damage: " << damage << endl;	
	return damage;
}
/********************************************************************* 
 ** Function: get_hp 
 ** Description: returns the object's hp value 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: hp returned
 *********************************************************************/
int Parham::get_hp(){
	return hp;
}
/********************************************************************* 
 ** Function: get_pokemon 
 ** Description: returns the object's hp value 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: hp returned
 *********************************************************************/
string Parham::get_pokemon(){
	return pokemon;
}
/********************************************************************* 
 ** Function: health_edit
 ** Description: takes in an int and changes the objects health
 ** Parameters: int for damage inflicted upon object
 ** Pre-Conditions: damage is given
 ** Post-Conditions: object's health is decreased/increased
 *********************************************************************/
void Parham::health_edit(int damage){
	hp -= damage;
}
/********************************************************************* 
 ** Function: DEFAULT CONSTRUCTOR
 ** Description: sets default values 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: none
 *********************************************************************/
Parham::Parham(){
	pokemon = "Parham";
	hp = 600; 
	dmg = 120; 
	payoff = 162; // XP given
}
/********************************************************************* 
 ** Function: get_damage
 ** Description: gets damage for a pokemon, calling mob_damage 
 ** and creature_damage as well, printing picture and text to console
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: a damage value is returned and text is outputted
 *********************************************************************/
int Gyarados::get_damage(){
	ifstream input; 
	input.open("ascii/Bgyarados");
	string temp;
	int damage = 0;
	
	while(!input.eof()){ // PRINTS
		getline(input,temp);
		cout << temp << endl;
	}
	input.close();

	if (rand()%100 < 5){
		cout << "Gyarados uses outrage!" << endl;
		damage = mob_damage() + 200;
	}
	else if (rand()%100 < 20){
		cout << "Gyarados uses hydro pump!" << endl;
		damage = mob_damage() + 75; // get super/not effective
	}
	else{
		cout << "Gyarados uses dragon tail!" << endl;
		damage = mob_damage(); // get super/not effective
	}
	cout << "Damage: " << damage << endl;	
	return damage;
}
/********************************************************************* 
 ** Function: get_hp 
 ** Description: returns the object's hp value 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: hp returned
 *********************************************************************/
int Gyarados::get_hp(){
	return hp;
}
/********************************************************************* 
 ** Function: get_pokemon 
 ** Description: returns the object's hp value 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: hp returned
 *********************************************************************/
string Gyarados::get_pokemon(){
	return pokemon;
}
/********************************************************************* 
 ** Function: health_edit
 ** Description: takes in an int and changes the objects health
 ** Parameters: int for damage inflicted upon object
 ** Pre-Conditions: damage is given
 ** Post-Conditions: object's health is decreased/increased
 *********************************************************************/
void Gyarados::health_edit(int damage){
	hp -= damage;
}
/********************************************************************* 
 ** Function: DEFAULT CONSTRUCTOR
 ** Description: sets default values 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: none
 *********************************************************************/
Gyarados::Gyarados(){
	pokemon = "Gyarados";
	hp = 600;
	dmg = 120;
	payoff = 9001;	
}
