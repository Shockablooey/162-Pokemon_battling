// MEDIUM . C P P 
#include "medium.h"

/********************************************************************* 
 ** Function: get_damage
 ** Description: gets damage for a pokemon, calling mob_damage 
 ** and creature_damage as well, printing picture and text to console
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: a damage value is returned and text is outputted
 *********************************************************************/
int Haunter::get_damage(){
	ifstream input; 
	input.open("ascii/2haunter");
	string temp;
	int damage = 0;

	while(!input.eof()){ // PRINTS
		getline(input,temp);
		cout << temp << endl;
	}
	input.close();

	if (rand()%100 < 20){ // use special
		cout << "Haunter uses sludge bomb!" << endl;
		damage = mob_damage() + 5; // get super/not effective
	} 
	else{ // use basic
		cout << "Haunter uses shadow claw!" << endl;
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
int Haunter::get_hp(){
	return hp;
}
/********************************************************************* 
 ** Function: get_pokemon 
 ** Description: returns the object's hp value 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: hp returned
 *********************************************************************/
string Haunter::get_pokemon(){
	return pokemon;
}
/********************************************************************* 
 ** Function: health_edit
 ** Description: takes in an int and changes the objects health
 ** Parameters: int for damage inflicted upon object
 ** Pre-Conditions: damage is given
 ** Post-Conditions: object's health is decreased/increased
 *********************************************************************/
void Haunter::health_edit(int damage){
	hp -= damage;
}
/********************************************************************* 
 ** Function: DEFAULT CONSTRUCTOR
 ** Description: sets default values 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: none
 *********************************************************************/
Haunter::Haunter(){
	pokemon = "Haunter";
	hp = 52; 
	dmg = 11; 
	payoff = 100; // XP given
}
/********************************************************************* 
 ** Function: get_damage
 ** Description: gets damage for a pokemon, calling mob_damage 
 ** and creature_damage as well, printing picture and text to console
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: a damage value is returned and text is outputted
 *********************************************************************/
int Lapras::get_damage(){
	ifstream input; 
	input.open("ascii/2lapras");
	string temp;
	int damage = 0;
	
	while(!input.eof()){ // PRINTS
		getline(input,temp);
		cout << temp << endl;
	}
	input.close();

	if (rand()%100 < 20){
		cout << "Lapras uses ice beam!" << endl;
		damage = mob_damage() + 10; // get super/not effective
	}
	else{
		cout << "Lapras uses frost breath!" << endl;
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
int Lapras::get_hp(){
	return hp;
}
/********************************************************************* 
 ** Function: get_pokemon 
 ** Description: returns the object's hp value 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: hp returned
 *********************************************************************/
string Lapras::get_pokemon(){
	return pokemon;
}
/********************************************************************* 
 ** Function: health_edit
 ** Description: takes in an int and changes the objects health
 ** Parameters: int for damage inflicted upon object
 ** Pre-Conditions: damage is given
 ** Post-Conditions: object's health is decreased/increased
 *********************************************************************/
void Lapras::health_edit(int damage){
	hp -= damage;
}
/********************************************************************* 
 ** Function: DEFAULT CONSTRUCTOR
 ** Description: sets default values 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: none
 *********************************************************************/
Lapras::Lapras(){
	pokemon = "Lapras";
	hp = 93;
	dmg = 21;
	payoff = 100;	
}
/********************************************************************* 
 ** Function: get_damage
 ** Description: gets damage for a pokemon, calling mob_damage 
 ** and creature_damage as well, printing picture and text to console
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: a damage value is returned and text is outputted
 *********************************************************************/
int Nidoking::get_damage(){
	ifstream input; 
	input.open("ascii/2nidoking");
	string temp;
	int damage = 0;
	
	while(!input.eof()){
		getline(input,temp);
		cout << temp << endl;
	}
	input.close();

	if (rand()%100 < 20){
		cout << "Nidoking uses earthquake!" << endl;
		damage = mob_damage() + 10;
	}
	else{
		cout << "Nidoking uses poison jab!" << endl;
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
int Nidoking::get_hp(){
	return hp;
}
/********************************************************************* 
 ** Function: get_pokemon 
 ** Description: returns the object's hp value 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: hp returned
 *********************************************************************/
string Nidoking::get_pokemon(){
	return pokemon;
}
/********************************************************************* 
 ** Function: health_edit
 ** Description: takes in an int and changes the objects health
 ** Parameters: int for damage inflicted upon object
 ** Pre-Conditions: damage is given
 ** Post-Conditions: object's health is decreased/increased
 *********************************************************************/
void Nidoking::health_edit(int damage){
	hp -= damage;
}
/********************************************************************* 
 ** Function: DEFAULT CONSTRUCTOR
 ** Description: sets default values 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: none
 *********************************************************************/
Nidoking::Nidoking(){
	pokemon = "Nidoking";
	hp = 100;
	dmg = 22;
	payoff = 100;	
}
/********************************************************************* 
 ** Function: get_damage
 ** Description: gets damage for a pokemon, calling mob_damage 
 ** and creature_damage as well, printing picture and text to console
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: a damage value is returned and text is outputted
 *********************************************************************/
int Rapidash::get_damage(){
	ifstream input; 
	input.open("ascii/2rapidash");
	string temp;
	int damage = 0;
	
	while(!input.eof()){
		getline(input,temp);
		cout << temp << endl;
	}
	input.close();

	if (rand()%100 < 20){
		cout << "Rapidash uses fire blast!" << endl;
		damage = mob_damage() + 9;
	}
	else{
		cout << "Rapidash uses fire spin!" << endl;
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
int Rapidash::get_hp(){
	return hp;
}
/********************************************************************* 
 ** Function: get_pokemon 
 ** Description: returns the object's hp value 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: hp returned
 *********************************************************************/
string Rapidash::get_pokemon(){
	return pokemon;
}
/********************************************************************* 
 ** Function: health_edit
 ** Description: takes in an int and changes the objects health
 ** Parameters: int for damage inflicted upon object
 ** Pre-Conditions: damage is given
 ** Post-Conditions: object's health is decreased/increased
 *********************************************************************/
void Rapidash::health_edit(int damage){
	hp -= damage;
}
/********************************************************************* 
 ** Function: DEFAULT CONSTRUCTOR
 ** Description: sets default values 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: none
 *********************************************************************/
Rapidash::Rapidash(){
	pokemon = "Rapidash";
	hp = 85;
	dmg = 18;
	payoff = 100;	
}
/********************************************************************* 
 ** Function: get_damage
 ** Description: gets damage for a pokemon, calling mob_damage 
 ** and creature_damage as well, printing picture and text to console
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: a damage value is returned and text is outputted
 *********************************************************************/
int Starmie::get_damage(){
	ifstream input; 
	input.open("ascii/2starmie");
	string temp;
	int damage = 0;
	
	while(!input.eof()){
		getline(input,temp);
		cout << temp << endl;
	}
	input.close();

	if (rand()%100 < 20){
		cout << "Starmie uses hydro pump!" << endl;
		damage = mob_damage() + 6;
	}
	else{
		cout << "Starmie uses hidden power!" << endl;
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
int Starmie::get_hp(){
	return hp;
}
/********************************************************************* 
 ** Function: get_pokemon 
 ** Description: returns the object's hp value 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: hp returned
 *********************************************************************/
string Starmie::get_pokemon(){
	return pokemon;
}
/********************************************************************* 
 ** Function: health_edit
 ** Description: takes in an int and changes the objects health
 ** Parameters: int for damage inflicted upon object
 ** Pre-Conditions: damage is given
 ** Post-Conditions: object's health is decreased/increased
 *********************************************************************/
void Starmie::health_edit(int damage){
	hp -= damage;
}
/********************************************************************* 
 ** Function: DEFAULT CONSTRUCTOR
 ** Description: sets default values 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: none
 *********************************************************************/
Starmie::Starmie(){
	pokemon = "Starmie";
	hp = 63;
	dmg = 12;
	payoff = 100;	
}
/********************************************************************* 
 ** Function: get_damage
 ** Description: gets damage for a pokemon, calling mob_damage 
 ** and creature_damage as well, printing picture and text to console
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: a damage value is returned and text is outputted
 *********************************************************************/
int Onix::get_damage(){
	ifstream input; 
	input.open("ascii/2onix");
	string temp;
	int damage = 0;
	
	while(!input.eof()){
		getline(input,temp);
		cout << temp << endl;
	}
	input.close();

	if (rand()%100 < 20){
		cout << "Onix uses stone edge!" << endl;
		damage = mob_damage() + 5;
	}
	else{
		cout << "Onix uses rock throw!" << endl;
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
int Onix::get_hp(){
	return hp;
}
/********************************************************************* 
 ** Function: get_pokemon 
 ** Description: returns the object's hp value 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: hp returned
 *********************************************************************/
string Onix::get_pokemon(){
	return pokemon;
}
/********************************************************************* 
 ** Function: health_edit
 ** Description: takes in an int and changes the objects health
 ** Parameters: int for damage inflicted upon object
 ** Pre-Conditions: damage is given
 ** Post-Conditions: object's health is decreased/increased
 *********************************************************************/
void Onix::health_edit(int damage){
	hp -= damage;
}
/********************************************************************* 
 ** Function: DEFAULT CONSTRUCTOR
 ** Description: sets default values 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: none
 *********************************************************************/
Onix::Onix(){
	pokemon = "Onix";
	hp = 50;
	dmg = 10;
	payoff = 100;	
}
