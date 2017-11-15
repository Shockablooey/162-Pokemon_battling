// GRASS . C P P 
#include "grass.h"

/********************************************************************* 
 ** Function: get_damage
 ** Description: gets damage for a pokemon, calling mob_damage 
 ** and creature_damage as well, printing picture and text to console
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: a damage value is returned and text is outputted
 *********************************************************************/
int Bulbasaur::get_damage(){
	ifstream input; 
	input.open("ascii/sbulbasaur");
	string temp;
	int damage = 0;

	while(!input.eof()){ // PRINTS
		getline(input,temp);
		cout << temp << endl;
	}
	input.close();

	if (rand()%100 < 20){ // use special
		cout << name << " uses power whip!" << endl;
		damage = starter_damage() + 3; // get super/not effective
	} 
	else{ // use basic
		cout << name << " uses vine whip!" << endl;
		damage = starter_damage(); // get super/not effective
	}	
	cout << "Damage: " << damage << endl;	
	return damage;
}
/********************************************************************* 
 ** Function: win
 ** Description: edits xp, dmg, and hp for a pokemon 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: stats are added 
 *********************************************************************/
void Bulbasaur::win(){
	cout << name << " won!" << endl;
	xp += 10;
	cout << "+10 XP" << endl;

	maxHp += 1;
	hp += 1;
	cout << "+1 HP" << endl;

	if(rand()%100 < 50){ // 1/3rd chance of adding 1 damage
		cout << "+1 damage" << endl;
		dmg += 1;
	}
	cout << "Press ENTER to continue" << endl;
	cin.ignore();
}
/********************************************************************* 
 ** Function: get_hp 
 ** Description: returns the object's hp value 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: hp returned
 *********************************************************************/
int Bulbasaur::get_hp(){
	return hp;
}
/********************************************************************* 
 ** Function: get_name
 ** Description: returns the object's hp value 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: hp returned
 *********************************************************************/
string Bulbasaur::get_name(){
	return name;
}
/********************************************************************* 
 ** Function: health_edit
 ** Description: takes in an int and changes the objects health
 ** Parameters: int for damage inflicted upon object
 ** Pre-Conditions: damage is given
 ** Post-Conditions: object's health is decreased/increased
 *********************************************************************/
void Bulbasaur::health_edit(int damage){
	hp -= damage;
}
/********************************************************************* 
 ** Function: DEFAULT CONSTRUCTOR
 ** Description: sets default values 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: none
 *********************************************************************/
Bulbasaur::Bulbasaur(){
	name = "Bulbasaur"; // temporary
	pokemon = "Bulbasaur";
	maxHp = 15; // caps at 30, increasing by 1
	hp = 15; 
	dmg = 2; // increases by 1 1/3rd of every win
	xp = 0;
}
/********************************************************************* 
 ** Function: get_damage
 ** Description: gets damage for a pokemon, calling mob_damage 
 ** and creature_damage as well, printing picture and text to console
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: a damage value is returned and text is outputted
 *********************************************************************/
int Ivysaur::get_damage(){
	ifstream input; 
	input.open("ascii/sivysaur");
	string temp;
	int damage = 0;

	while(!input.eof()){ // PRINTS
		getline(input,temp);
		cout << temp << endl;
	}
	input.close();

	if (rand()%100 < 20){ // use special
		cout << name << " uses solar beam!" << endl;
		damage = starter_damage() + 10; // get super/not effective
	} 
	else{ // use basic
		cout << name << " uses razor leaf!" << endl;
		damage = starter_damage(); // get super/not effective
	}	
	cout << "Damage: " << damage << endl;	
	return damage;
}
/********************************************************************* 
 ** Function: win
 ** Description: edits xp, dmg, and hp for a pokemon 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: stats are added 
 *********************************************************************/
void Ivysaur::win(){
	cout << name << " won!" << endl;
	xp += 100;
	cout << "+100 XP" << endl;

	maxHp += 10;
	hp += 10;
	cout << "+10 HP" << endl;

	cout << "+1 damage" << endl;
	dmg += 1;

	cout << "Press ENTER to continue" << endl;
	cin.ignore();
}
/********************************************************************* 
 ** Function: get_hp 
 ** Description: returns the object's hp value 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: hp returned
 *********************************************************************/
int Ivysaur::get_hp(){
	return hp;
}
/********************************************************************* 
 ** Function: get_name
 ** Description: returns the object's hp value 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: hp returned
 *********************************************************************/
string Ivysaur::get_name(){
	return name;
}
/********************************************************************* 
 ** Function: health_edit
 ** Description: takes in an int and changes the objects health
 ** Parameters: int for damage inflicted upon object
 ** Pre-Conditions: damage is given
 ** Post-Conditions: object's health is decreased/increased
 *********************************************************************/
void Ivysaur::health_edit(int damage){
	hp -= damage;
}
/********************************************************************* 
 ** Function: DEFAULT CONSTRUCTOR
 ** Description: sets default values 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: none
 *********************************************************************/
Ivysaur::Ivysaur(){
	name = "Ivysaur"; // temporary
	pokemon = "Ivysaur";
	maxHp = 60; // caps at 160, increasing by 10
	hp = 60; 
	dmg = 14; // increases by 1 every win
	xp = 101;
}
/********************************************************************* 
 ** Function: get_damage
 ** Description: gets damage for a pokemon, calling mob_damage 
 ** and creature_damage as well, printing picture and text to console
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: a damage value is returned and text is outputted
 *********************************************************************/
int Venusaur::get_damage(){
	ifstream input; 
	input.open("ascii/svenusaur");
	string temp;
	int damage = 0;

	while(!input.eof()){ // PRINTS
		getline(input,temp);
		cout << temp << endl;
	}
	input.close();

	if (rand()%100 < 20){ // use special
		cout << name << " uses petal blizzard!" << endl;
		damage = starter_damage() + 50; // get super/not effective
	} 
	else{ // use basic
		cout << name << " uses vine whip!" << endl;
		damage = starter_damage(); // get super/not effective
	}	
	cout << "Damage: " << damage << endl;	
	return damage;
}
/********************************************************************* 
 ** Function: win
 ** Description: edits xp, dmg, and hp for a pokemon 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: stats are added 
 *********************************************************************/
void Venusaur::win(){
	cout << name << " won!" << endl;
	xp += 1000;
	cout << "+1000 XP" << endl;

	maxHp += 20;
	hp += 20;
	cout << "+20 HP" << endl;

	cout << "+5 damage" << endl;
	dmg += 5;

	cout << "Press ENTER to continue" << endl;
	cin.ignore();
}
/********************************************************************* 
 ** Function: get_hp 
 ** Description: returns the object's hp value 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: hp returned
 *********************************************************************/
int Venusaur::get_hp(){
	return hp;
}
/********************************************************************* 
 ** Function: get_name
 ** Description: returns the object's hp value 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: hp returned
 *********************************************************************/
string Venusaur::get_name(){
	return name;
}
/********************************************************************* 
 ** Function: health_edit
 ** Description: takes in an int and changes the objects health
 ** Parameters: int for damage inflicted upon object
 ** Pre-Conditions: damage is given
 ** Post-Conditions: object's health is decreased/increased
 *********************************************************************/
void Venusaur::health_edit(int damage){
	hp -= damage;
}
/********************************************************************* 
 ** Function: DEFAULT CONSTRUCTOR
 ** Description: sets default values 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: none
 *********************************************************************/
Venusaur::Venusaur(){
	name = "Venusaur"; // temporary
	pokemon = "Venusaur";
	maxHp = 350; // caps at 550, increasing by 20
	hp = 350; 
	dmg = 75; // increases by 5 every win
	xp = 1102;
}
/********************************************************************* 
 ** Function: set_name 
 ** Description: sets name for pokemon
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: name is set
 *********************************************************************/
void Bulbasaur::set_name(){
	cout << "What is your " << pokemon << "'s name? ";
	cin >> name;
}
/********************************************************************* 
 ** Function: set_name 
 ** Description: sets name for pokemon
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: name is set
 *********************************************************************/
void Ivysaur::set_name(){
	cout << "What is your " << pokemon << "'s name? ";
	cin >> name;
}
/********************************************************************* 
 ** Function: set_name 
 ** Description: sets name for pokemon
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: name is set
 *********************************************************************/
void Venusaur::set_name(){
	cout << "What is your " << pokemon << "'s name? ";
	cin >> name;
}
/********************************************************************* 
 ** Function: get_xp 
 ** Description: returns the object's xp value 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: xp returned
 *********************************************************************/
int Bulbasaur::get_xp(){
	return xp;
}
/********************************************************************* 
 ** Function: get_xp 
 ** Description: returns the object's xp value 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: xp returned
 *********************************************************************/
int Ivysaur::get_xp(){
	return xp;
}
/********************************************************************* 
 ** Function: get_xp 
 ** Description: returns the object's xp value 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: xp returned
 *********************************************************************/
int Venusaur::get_xp(){
	return xp;
}
/********************************************************************* 
 ** Function: maxHp 
 ** Description: restores pokemon to full health 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: hp restored
 *********************************************************************/
void Bulbasaur::set_maxHp(){
	hp = maxHp;
	cout << name << " has been restored to full health!" << endl;
}
/********************************************************************* 
 ** Function: maxHp 
 ** Description: restores pokemon to full health 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: hp restored
 *********************************************************************/
void Ivysaur::set_maxHp(){
	hp = maxHp;
	cout << name << " has been restored to full health!" << endl;
}
/********************************************************************* 
 ** Function: maxHp 
 ** Description: restores pokemon to full health 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: hp restored
 *********************************************************************/
void Venusaur::set_maxHp(){
	hp = maxHp;
	cout << name << " has been restored to full health!" << endl;
}
/********************************************************************* 
 ** Function: evolve 
 ** Description: does a visual sequence for the pokemon
 ** Parameters: none
 ** Pre-Conditions: none 
 ** Post-Conditions: none
 *********************************************************************/
void Bulbasaur::evolve(){
	ifstream input;
	string temp;
	string portrait1;
	string portrait2;
	int time = 100000; // half a second

	system("clear");	
	input.open("ascii/wordWhat");
	while(!input.eof()){
		getline(input,temp);
		cout << temp << endl;
	}
	input.close();

	input.open("ascii/sbulbasaur");
	while(!input.eof()){
		getline(input,temp,'%'); // get entire file, including new lines
		portrait1 = temp;
	}
	input.close();
	
	input.open("ascii/sivysaur");	
	while(!input.eof()){
		getline(input,temp,'%'); // get entire file, including new lines
		portrait2 = temp;
	}
	input.close();
	
	usleep(2000000); 
	cout << portrait1;
	cout << name << " is evolving!" << endl;
	usleep(3000000);
	
	for(int i=0; i < 10; i++){ // FAST animations
		system("clear");	
		cout << portrait1;
		usleep(100000); // one hundredth of a second
		system("clear");	
		cout << portrait2;
		usleep(100000); // one hundredth of a second
	}
	for(int i=0; i < 8; i++){ // GRADUALLY SLOWER animations
		system("clear");	
		cout << portrait1;
		usleep(time);
		system("clear");	
		cout << portrait2;
		usleep(time);
		time += 50000; // decrement flash time by 5 hundredths of a second
	}
	system("clear");
	cout << portrait2 << endl;
	cout << name << " evolved into Ivysaur!" << endl;
	cout << "Press ENTER to continue" << endl;
	cin.ignore();
	cin.ignore();
	 
}
/********************************************************************* 
 ** Function: evolve 
 ** Description: does a visual sequence for the pokemon
 ** Parameters: none
 ** Pre-Conditions: none 
 ** Post-Conditions: none
 *********************************************************************/
void Ivysaur::evolve(){
	ifstream input;
	string temp;
	string portrait1;
	string portrait2;
	int time = 100000; // half a second

	system("clear");	
	input.open("ascii/wordWhat");
	while(!input.eof()){
		getline(input,temp);
		cout << temp << endl;
	}
	input.close();

	input.open("ascii/sivysaur");
	while(!input.eof()){
		getline(input,temp,'%'); // get entire file, including new lines
		portrait1 = temp;
	}
	input.close();
	
	input.open("ascii/svenusaur");	
	while(!input.eof()){
		getline(input,temp,'%'); // get entire file, including new lines
		portrait2 = temp;
	}
	input.close();
	
	usleep(2000000); 
	cout << portrait1;
	cout << name << " is evolving!" << endl;
	usleep(3000000);
	
	for(int i=0; i < 10; i++){ // FAST animations
		system("clear");	
		cout << portrait1;
		usleep(100000); // one hundredth of a second
		system("clear");	
		cout << portrait2;
		usleep(100000); // one hundredth of a second
	}
	for(int i=0; i < 8; i++){ // GRADUALLY SLOWER animations
		system("clear");	
		cout << portrait1;
		usleep(time);
		system("clear");	
		cout << portrait2;
		usleep(time);
		time += 50000; // decrement flash time by 5 hundredths of a second
	}
	system("clear");
	cout << portrait2 << endl;
	cout << name << " evolved into Venusaur!" << endl;
	cout << "Press ENTER to continue" << endl;
	cin.ignore();
	cin.ignore();
	 
}
/********************************************************************* 
 ** Function: evolve 
 ** Description: does a visual sequence for the pokemon
 ** Parameters: none
 ** Pre-Conditions: none 
 ** Post-Conditions: none
 *********************************************************************/
void Venusaur::evolve(){}
