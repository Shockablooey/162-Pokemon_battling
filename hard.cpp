// HARD . C P P 
#include "hard.h"

/********************************************************************* 
 ** Function: get_damage
 ** Description: gets damage for a pokemon, calling mob_damage 
 ** and creature_damage as well, printing picture and text to console
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: a damage value is returned and text is outputted
 *********************************************************************/
int Slowbro::get_damage(){
	ifstream input; 
	input.open("ascii/3slowbro");
	string temp;
	int damage = 0;

	while(!input.eof()){ // PRINTS
		getline(input,temp);
		cout << temp << endl;
	}
	input.close();

	if (rand()%100 < 20){ // use special
		cout << "Slowbro uses ice beam!" << endl;
		damage = mob_damage() + 40; // get super/not effective
	} 
	else{ // use basic
		cout << "Slowbro uses confusion!" << endl;
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
int Slowbro::get_hp(){
	return hp;
}
/********************************************************************* 
 ** Function: get_pokemon 
 ** Description: returns the object's hp value 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: hp returned
 *********************************************************************/
string Slowbro::get_pokemon(){
	return pokemon;
}
/********************************************************************* 
 ** Function: health_edit
 ** Description: takes in an int and changes the objects health
 ** Parameters: int for damage inflicted upon object
 ** Pre-Conditions: damage is given
 ** Post-Conditions: object's health is decreased/increased
 *********************************************************************/
void Slowbro::health_edit(int damage){
	hp -= damage;
}
/********************************************************************* 
 ** Function: DEFAULT CONSTRUCTOR
 ** Description: sets default values 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: none
 *********************************************************************/
Slowbro::Slowbro(){
	pokemon = "Slowbro";
	hp = 298; 
	dmg = 68; 
	payoff = 1000; // XP given
}
/********************************************************************* 
 ** Function: get_damage
 ** Description: gets damage for a pokemon, calling mob_damage 
 ** and creature_damage as well, printing picture and text to console
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: a damage value is returned and text is outputted
 *********************************************************************/
int Exeggutor::get_damage(){
	ifstream input; 
	input.open("ascii/3exeggutor");
	string temp;
	int damage = 0;
	
	while(!input.eof()){ // PRINTS
		getline(input,temp);
		cout << temp << endl;
	}
	input.close();

	if (rand()%100 < 20){
		cout << "Exeggutor uses solar beam!" << endl;
		damage = mob_damage() + 43; // get super/not effective
	}
	else{
		cout << "Exeggutor uses extrasensory!" << endl;
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
int Exeggutor::get_hp(){
	return hp;
}
/********************************************************************* 
 ** Function: get_pokemon 
 ** Description: returns the object's hp value 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: hp returned
 *********************************************************************/
string Exeggutor::get_pokemon(){
	return pokemon;
}
/********************************************************************* 
 ** Function: health_edit
 ** Description: takes in an int and changes the objects health
 ** Parameters: int for damage inflicted upon object
 ** Pre-Conditions: damage is given
 ** Post-Conditions: object's health is decreased/increased
 *********************************************************************/
void Exeggutor::health_edit(int damage){
	hp -= damage;
}
/********************************************************************* 
 ** Function: DEFAULT CONSTRUCTOR
 ** Description: sets default values 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: none
 *********************************************************************/
Exeggutor::Exeggutor(){
	pokemon = "Exeggutor";
	hp = 431;
	dmg = 86;
	payoff = 1000;	
}
/********************************************************************* 
 ** Function: get_damage
 ** Description: gets damage for a pokemon, calling mob_damage 
 ** and creature_damage as well, printing picture and text to console
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: a damage value is returned and text is outputted
 *********************************************************************/
int Rhydon::get_damage(){
	ifstream input; 
	input.open("ascii/3rhydon");
	string temp;
	int damage = 0;
	
	while(!input.eof()){
		getline(input,temp);
		cout << temp << endl;
	}
	input.close();

	if (rand()%100 < 20){
		cout << "Rhydon uses earthquake!" << endl;
		damage = mob_damage() + 47;
	}
	else{
		cout << "Rhydon uses mud slap!" << endl;
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
int Rhydon::get_hp(){
	return hp;
}
/********************************************************************* 
 ** Function: get_pokemon 
 ** Description: returns the object's hp value 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: hp returned
 *********************************************************************/
string Rhydon::get_pokemon(){
	return pokemon;
}
/********************************************************************* 
 ** Function: health_edit
 ** Description: takes in an int and changes the objects health
 ** Parameters: int for damage inflicted upon object
 ** Pre-Conditions: damage is given
 ** Post-Conditions: object's health is decreased/increased
 *********************************************************************/
void Rhydon::health_edit(int damage){
	hp -= damage;
}
/********************************************************************* 
 ** Function: DEFAULT CONSTRUCTOR
 ** Description: sets default values 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: none
 *********************************************************************/
Rhydon::Rhydon(){
	pokemon = "Rhydon";
	hp = 472;
	dmg = 94;
	payoff = 1000;	
}
/********************************************************************* 
 ** Function: get_damage
 ** Description: gets damage for a pokemon, calling mob_damage 
 ** and creature_damage as well, printing picture and text to console
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: a damage value is returned and text is outputted
 *********************************************************************/
int Golem::get_damage(){
	ifstream input; 
	input.open("ascii/3golem");
	string temp;
	int damage = 0;
	
	while(!input.eof()){
		getline(input,temp);
		cout << temp << endl;
	}
	input.close();

	if (rand()%100 < 20){
		cout << "Golem uses stone edge!" << endl;
		damage = mob_damage() + 40;
	}
	else{
		cout << "Golem uses mud slap!" << endl;
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
int Golem::get_hp(){
	return hp;
}
/********************************************************************* 
 ** Function: get_pokemon 
 ** Description: returns the object's hp value 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: hp returned
 *********************************************************************/
string Golem::get_pokemon(){
	return pokemon;
}
/********************************************************************* 
 ** Function: health_edit
 ** Description: takes in an int and changes the objects health
 ** Parameters: int for damage inflicted upon object
 ** Pre-Conditions: damage is given
 ** Post-Conditions: object's health is decreased/increased
 *********************************************************************/
void Golem::health_edit(int damage){
	hp -= damage;
}
/********************************************************************* 
 ** Function: DEFAULT CONSTRUCTOR
 ** Description: sets default values 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: none
 *********************************************************************/
Golem::Golem(){
	pokemon = "Golem";
	hp = 403;
	dmg = 80;
	payoff = 1000;	
}
/********************************************************************* 
 ** Function: get_damage
 ** Description: gets damage for a pokemon, calling mob_damage 
 ** and creature_damage as well, printing picture and text to console
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: a damage value is returned and text is outputted
 *********************************************************************/
int Ditto::get_damage(){
	ifstream input; 
	input.open("ascii/3ditto");
	string temp;
	int damage = 0;
	
	while(!input.eof()){
		getline(input,temp);
		cout << temp << endl;
	}
	input.close();

	if (rand()%100 < 20){
		cout << "Ditto uses struggle!" << endl;
		damage = mob_damage() + 200;
	}
	else{
		cout << "Ditto uses transform!" << endl;
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
int Ditto::get_hp(){
	return hp;
}
/********************************************************************* 
 ** Function: get_pokemon 
 ** Description: returns the object's hp value 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: hp returned
 *********************************************************************/
string Ditto::get_pokemon(){
	return pokemon;
}
/********************************************************************* 
 ** Function: health_edit
 ** Description: takes in an int and changes the objects health
 ** Parameters: int for damage inflicted upon object
 ** Pre-Conditions: damage is given
 ** Post-Conditions: object's health is decreased/increased
 *********************************************************************/
void Ditto::health_edit(int damage){
	hp -= damage;
}
/********************************************************************* 
 ** Function: DEFAULT CONSTRUCTOR
 ** Description: sets default values 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: none
 *********************************************************************/
Ditto::Ditto(){
	pokemon = "Ditto";
	hp = 230;
	dmg = 92;
	payoff = 1000;	
}
