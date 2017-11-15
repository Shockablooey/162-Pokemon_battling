// EASY . C P P 
#include "easy.h"

/********************************************************************* 
 ** Function: get_damage
 ** Description: gets damage for a pokemon, calling mob_damage 
 ** and creature_damage as well, printing picture and text to console
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: a damage value is returned and text is outputted
 *********************************************************************/
int Caterpie::get_damage(){
	ifstream input; 
	input.open("ascii/1caterpie");
	string temp;
	int damage = 0;

	while(!input.eof()){ // PRINTS
		getline(input,temp);
		cout << temp << endl;
	}
	input.close();

	if (rand()%100 < 20){ // use special
		cout << "Caterpie uses struggle!" << endl;
		damage = mob_damage() + 1; // get super/not effective
	} 
	else{ // use basic
		cout << "Caterpie uses bug bite!" << endl;
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
int Caterpie::get_hp(){
	return hp;
}
/********************************************************************* 
 ** Function: get_pokemon 
 ** Description: returns the object's hp value 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: hp returned
 *********************************************************************/
string Caterpie::get_pokemon(){
	return pokemon;
}
/********************************************************************* 
 ** Function: health_edit
 ** Description: takes in an int and changes the objects health
 ** Parameters: int for damage inflicted upon object
 ** Pre-Conditions: damage is given
 ** Post-Conditions: object's health is decreased/increased
 *********************************************************************/
void Caterpie::health_edit(int damage){
	hp -= damage;
}
/********************************************************************* 
 ** Function: DEFAULT CONSTRUCTOR
 ** Description: sets default values 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: none
 *********************************************************************/
Caterpie::Caterpie(){
	pokemon = "Caterpie";
	hp = 10; 
	dmg = 2; 
	payoff = 10; // XP given
}
/********************************************************************* 
 ** Function: get_damage
 ** Description: gets damage for a pokemon, calling mob_damage 
 ** and creature_damage as well, printing picture and text to console
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: a damage value is returned and text is outputted
 *********************************************************************/
int Weedle::get_damage(){
	ifstream input; 
	input.open("ascii/1weedle");
	string temp;
	int damage = 0;
	
	while(!input.eof()){ // PRINTS
		getline(input,temp);
		cout << temp << endl;
	}
	input.close();

	if (rand()%100 < 20){
		cout << "Weedle uses struggle!" << endl;
		damage = mob_damage() + 1; // get super/not effective
	}
	else{
		cout << "Weedle uses bug bite!" << endl;
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
int Weedle::get_hp(){
	return hp;
}
/********************************************************************* 
 ** Function: get_pokemon 
 ** Description: returns the object's hp value 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: hp returned
 *********************************************************************/
string Weedle::get_pokemon(){
	return pokemon;
}
/********************************************************************* 
 ** Function: health_edit
 ** Description: takes in an int and changes the objects health
 ** Parameters: int for damage inflicted upon object
 ** Pre-Conditions: damage is given
 ** Post-Conditions: object's health is decreased/increased
 *********************************************************************/
void Weedle::health_edit(int damage){
	hp -= damage;
}
/********************************************************************* 
 ** Function: DEFAULT CONSTRUCTOR
 ** Description: sets default values 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: none
 *********************************************************************/
Weedle::Weedle(){
	pokemon = "Weedle";
	hp = 10;
	dmg = 2;
	payoff = 10;	
}
/********************************************************************* 
 ** Function: get_damage
 ** Description: gets damage for a pokemon, calling mob_damage 
 ** and creature_damage as well, printing picture and text to console
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: a damage value is returned and text is outputted
 *********************************************************************/
int Pidgey::get_damage(){
	ifstream input; 
	input.open("ascii/1pidgey");
	string temp;
	int damage = 0;
	
	while(!input.eof()){
		getline(input,temp);
		cout << temp << endl;
	}
	input.close();

	if (rand()%100 < 20){
		cout << "Pidgey uses aerial ace!" << endl;
		damage = mob_damage() + 1;
	}
	else{
		cout << "Pidgey uses quick attack!" << endl;
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
int Pidgey::get_hp(){
	return hp;
}
/********************************************************************* 
 ** Function: get_pokemon 
 ** Description: returns the object's hp value 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: hp returned
 *********************************************************************/
string Pidgey::get_pokemon(){
	return pokemon;
}
/********************************************************************* 
 ** Function: health_edit
 ** Description: takes in an int and changes the objects health
 ** Parameters: int for damage inflicted upon object
 ** Pre-Conditions: damage is given
 ** Post-Conditions: object's health is decreased/increased
 *********************************************************************/
void Pidgey::health_edit(int damage){
	hp -= damage;
}
/********************************************************************* 
 ** Function: DEFAULT CONSTRUCTOR
 ** Description: sets default values 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: none
 *********************************************************************/
Pidgey::Pidgey(){
	pokemon = "Pidgey";
	hp = 11;
	dmg = 2;
	payoff = 10;	
}
/********************************************************************* 
 ** Function: get_damage
 ** Description: gets damage for a pokemon, calling mob_damage 
 ** and creature_damage as well, printing picture and text to console
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: a damage value is returned and text is outputted
 *********************************************************************/
int Rattata::get_damage(){
	ifstream input; 
	input.open("ascii/1rattata");
	string temp;
	int damage = 0;
	
	while(!input.eof()){
		getline(input,temp);
		cout << temp << endl;
	}
	input.close();

	if (rand()%100 < 20){
		cout << "Rattata uses hyper fang!" << endl;
		damage = mob_damage() + 1;
	}
	else{
		cout << "Rattata uses quick attack!" << endl;
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
int Rattata::get_hp(){
	return hp;
}
/********************************************************************* 
 ** Function: get_pokemon 
 ** Description: returns the object's hp value 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: hp returned
 *********************************************************************/
string Rattata::get_pokemon(){
	return pokemon;
}
/********************************************************************* 
 ** Function: health_edit
 ** Description: takes in an int and changes the objects health
 ** Parameters: int for damage inflicted upon object
 ** Pre-Conditions: damage is given
 ** Post-Conditions: object's health is decreased/increased
 *********************************************************************/
void Rattata::health_edit(int damage){
	hp -= damage;
}
/********************************************************************* 
 ** Function: DEFAULT CONSTRUCTOR
 ** Description: sets default values 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: none
 *********************************************************************/
Rattata::Rattata(){
	pokemon = "Rattata";
	hp = 11;
	dmg = 2;
	payoff = 10;	
}
/********************************************************************* 
 ** Function: get_damage
 ** Description: gets damage for a pokemon, calling mob_damage 
 ** and creature_damage as well, printing picture and text to console
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: a damage value is returned and text is outputted
 *********************************************************************/
int Poliwag::get_damage(){
	ifstream input; 
	input.open("ascii/1poliwag");
	string temp;
	int damage = 0;
	
	while(!input.eof()){
		getline(input,temp);
		cout << temp << endl;
	}
	input.close();

	if (rand()%100 < 20){
		cout << "Poliwag uses bubble beam!!" << endl;
		damage = mob_damage() + 1;
	}
	else{
		cout << "Poliwag uses bubble!" << endl;
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
int Poliwag::get_hp(){
	return hp;
}
/********************************************************************* 
 ** Function: get_pokemon 
 ** Description: returns the object's hp value 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: hp returned
 *********************************************************************/
string Poliwag::get_pokemon(){
	return pokemon;
}
/********************************************************************* 
 ** Function: health_edit
 ** Description: takes in an int and changes the objects health
 ** Parameters: int for damage inflicted upon object
 ** Pre-Conditions: damage is given
 ** Post-Conditions: object's health is decreased/increased
 *********************************************************************/
void Poliwag::health_edit(int damage){
	hp -= damage;
}
/********************************************************************* 
 ** Function: DEFAULT CONSTRUCTOR
 ** Description: sets default values 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: none
 *********************************************************************/
Poliwag::Poliwag(){
	pokemon = "Poliwag";
	hp = 13;
	dmg = 3;
	payoff = 10;	
}
/********************************************************************* 
 ** Function: get_damage
 ** Description: gets damage for a pokemon, calling mob_damage 
 ** and creature_damage as well, printing picture and text to console
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: a damage value is returned and text is outputted
 *********************************************************************/
int Nidoran::get_damage(){
	ifstream input; 
	input.open("ascii/1nidoran");
	string temp;
	int damage = 0;
	
	while(!input.eof()){
		getline(input,temp);
		cout << temp << endl;
	}
	input.close();

	if (rand()%100 < 20){
		cout << "Nidoran uses sludge bomb!" << endl;
		damage = mob_damage() + 2;
	}
	else{
		cout << "Nidoran uses poison sting!" << endl;
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
int Nidoran::get_hp(){
	return hp;
}
/********************************************************************* 
 ** Function: get_pokemon 
 ** Description: returns the object's hp value 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: hp returned
 *********************************************************************/
string Nidoran::get_pokemon(){
	return pokemon;
}
/********************************************************************* 
 ** Function: health_edit
 ** Description: takes in an int and changes the objects health
 ** Parameters: int for damage inflicted upon object
 ** Pre-Conditions: damage is given
 ** Post-Conditions: object's health is decreased/increased
 *********************************************************************/
void Nidoran::health_edit(int damage){
	hp -= damage;
}
/********************************************************************* 
 ** Function: DEFAULT CONSTRUCTOR
 ** Description: sets default values 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: none
 *********************************************************************/
Nidoran::Nidoran(){
	pokemon = "Nidoran";
	hp = 15;
	dmg = 4;
	payoff = 10;	
}
/********************************************************************* 
 ** Function: get_damage
 ** Description: gets damage for a pokemon, calling mob_damage 
 ** and creature_damage as well, printing picture and text to console
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: a damage value is returned and text is outputted
 *********************************************************************/
int Pikachu::get_damage(){
	ifstream input; 
	input.open("ascii/1pikachu");
	string temp;
	int damage = 0;
	
	while(!input.eof()){
		getline(input,temp);
		cout << temp << endl;
	}
	input.close();

	if (rand()%100 < 20){
		cout << "Pikachu uses thunder shock!" << endl;
		damage = mob_damage() + 2;
	}
	else{
		cout << "Pikachu uses wild charge!" << endl;
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
int Pikachu::get_hp(){
	return hp;
}
/********************************************************************* 
 ** Function: get_pokemon 
 ** Description: returns the object's hp value 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: hp returned
 *********************************************************************/
string Pikachu::get_pokemon(){
	return pokemon;
}
/********************************************************************* 
 ** Function: health_edit
 ** Description: takes in an int and changes the objects health
 ** Parameters: int for damage inflicted upon object
 ** Pre-Conditions: damage is given
 ** Post-Conditions: object's health is decreased/increased
 *********************************************************************/
void Pikachu::health_edit(int damage){
	hp -= damage;
}
/********************************************************************* 
 ** Function: DEFAULT CONSTRUCTOR
 ** Description: sets default values 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: none
 *********************************************************************/
Pikachu::Pikachu(){
	pokemon = "Pikachu";
	hp = 19;
	dmg = 4;
	payoff = 10;	
}
/********************************************************************* 
 ** Function: get_damage
 ** Description: gets damage for a pokemon, calling mob_damage 
 ** and creature_damage as well, printing picture and text to console
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: a damage value is returned and text is outputted
 *********************************************************************/
int Vulpix::get_damage(){
	ifstream input; 
	input.open("ascii/1vulpix");
	string temp;
	int damage = 0;
	
	while(!input.eof()){
		getline(input,temp);
		cout << temp << endl;
	}
	input.close();

	if (rand()%100 < 20){
		cout << "Vulpix uses flamethrower!" << endl;
		damage = mob_damage() + 2;
	}
	else{
		cout << "Vulpix uses ember!" << endl;
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
int Vulpix::get_hp(){
	return hp;
}
/********************************************************************* 
 ** Function: get_pokemon 
 ** Description: returns the object's hp value 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: hp returned
 *********************************************************************/
string Vulpix::get_pokemon(){
	return pokemon;
}
/********************************************************************* 
 ** Function: health_edit
 ** Description: takes in an int and changes the objects health
 ** Parameters: int for damage inflicted upon object
 ** Pre-Conditions: damage is given
 ** Post-Conditions: object's health is decreased/increased
 *********************************************************************/
void Vulpix::health_edit(int damage){
	hp -= damage;
}
/********************************************************************* 
 ** Function: DEFAULT CONSTRUCTOR
 ** Description: sets default values 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: none
 *********************************************************************/
Vulpix::Vulpix(){
	pokemon = "Vulpix";
	hp = 20;
	dmg = 5;
	payoff = 10;	
}

