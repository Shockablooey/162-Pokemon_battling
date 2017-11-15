#include "world.h"

/********************************************************************* 
 ** Function: check_xp 
 ** Description: 
 ** Parameters: 
 ** Pre-Conditions:
 ** Post-Conditions:
 *********************************************************************/
void World::check_xp(int s1, int s2, int m1, int m2){

	if(s[s1][s2]->get_xp() > 11101 && level == 3)
		cout << "choose whether to fight boss" << endl; // FIGHT BOSS CHOICE

	else if(s[s1][s2]->get_xp() > 1100 && level == 2)
		cout << "evolve_to3();" << endl;

	else if(s[s1][s2]->get_xp() > 99 && level == 1)
		cout << "evolve_to2();" << endl;

	else 
		fight(s1,s2,m1,m2); // if no need to evolve, call fight function
}
/********************************************************************* 
 ** Function: game_loop 
 ** Description: 
 ** Parameters: 
 ** Pre-Conditions:
 ** Post-Conditions:
 *********************************************************************/
void World::game_loop(){
	bool won;

	while(won == false){
		starter_for_fight(); // choose pokemon, check xp, run fight
//		pokecenter(); 
	}
}
/********************************************************************* 
 ** Function: starter_for_fight 
 ** Description: 
 ** Parameters: 
 ** Pre-Conditions:
 ** Post-Conditions:
 *********************************************************************/
void World::starter_for_fight(){
	if(type == "grass"){
		if(level == 1){
			mob_for_fight(0,0);
		}
		else if(level == 2){
			mob_for_fight(0,1);
		}
		else if(level == 3){
			mob_for_fight(0,2);
		}
	}
	else if(type == "fire"){
		if(level == 1){
			mob_for_fight(1,0);
		}
		else if(level == 2){
			mob_for_fight(1,1);
		}
		else if(level == 3){
			mob_for_fight(1,2);
		}
	}
	else if(type == "water"){
		if(level == 1){
			mob_for_fight(2,0);
		}
		else if(level == 2){
			mob_for_fight(2,1);
		}
		else if(level == 3){
			mob_for_fight(2,2);
		}
	}
	else 
		cout << "Type unset..." << endl;	
}
/********************************************************************* 
 ** Function: mob_for_fight
 ** Description: 
 ** Parameters: 
 ** Pre-Conditions:
 ** Post-Conditions:
 *********************************************************************/
void World::mob_for_fight(int s1, int s2){
	int index;
	bool reroll = false;

	do{
		if(level == 1){ // IF IN FIRST STAGE
			index = rand()%numEasy;
			if(mob[0][index]->get_hp() > 0)
				check_xp(s1,s2,0,index);
			else 
				reroll = true;	
		}
		else if(level == 2){ // IF IN SECOND STAGE
			index = rand()%20;
			if(mob[0][index]->get_hp() > 0)
				check_xp(s1,s2,1,index);	
			else 
				reroll = true;	
		}
		else if(level == 3){ // IF IN THIRD STAGE
			index = rand()%12;
			if(mob[0][index]->get_hp() > 0)
				check_xp(s1,s2,2,index);	
			else 
				reroll = true;	
		}
	}while(reroll == true);
}
/********************************************************************* 
 ** Function: fight 
 ** Description: 
 ** Parameters: 
 ** Pre-Conditions:
 ** Post-Conditions:
 *********************************************************************/
void World::fight(int s1, int s2, int mob1, int mob2){
	bool run = false;
	int choice;

	system("clear");
	cout << "A wild " << mob[mob1][mob2]->get_pokemon() << " appears!" << endl;
	choice = e.userinput_int(0,9,"Attack - 0, Run - 1\n"); // give user chance to run
	cin.ignore();

	if(choice != 1){
		while(s[s1][s2]->get_hp() > 0 && mob[mob1][mob2]->get_hp() > 0){ // while both alive
			system("clear");
			s[s1][s2]->health_edit( mob[mob1][mob2]->get_damage() );
			cout << s[s1][s2]->get_name() << "'s HP: " << s[s1][s2]->get_hp() << endl; // print HP
			cout << "Press ENTER to continue!" << endl; 
			cin.ignore(); // get enter confirmation
			if(s[s1][s2]->get_hp() > 0 && mob[mob1][mob2]->get_hp() > 0){ // while both alive
				system("clear");
				mob[mob1][mob2]->health_edit( s[s1][s2]->get_damage() );
				cout << mob[mob1][mob2]->get_pokemon() << "'s HP: " << mob[mob1][mob2]->get_hp() << endl; // print HP	
				cout << "Press ENTER to continue!" << endl; 
				cin.ignore(); // get enter confirmation
			}
		}
		if( mob[mob1][mob2]->get_hp() < s[s1][s2]->get_hp() ) // if WON
			s[s1][s2]->win();
		else 
			cout << endl << "Oh no! " << s[s1][s2]->get_name() << " fainted!" << endl;
	}
}
/********************************************************************* 
 ** Function: choose_starter
 ** Description: 
 ** Parameters: 
 ** Pre-Conditions:
 ** Post-Conditions:
 *********************************************************************/
void World::choose_starter(){
	char choice = 'a';
	bool done = false;
	ifstream input;

	level = 1;

	while(done == false){
		system("clear");
		cout << "| CHOOSE A STARTER!" << endl;
		cout << "| Toggle with asd | Press y to select |" << endl << endl;
		cin >> choice;
		if(choice == 'a'){
			bulbasaur_choice(&choice, &done, input); // display
		}
		else if(choice == 's'){
			charmander_choice(&choice, &done, input); // display
		}
		else if(choice == 'd'){
			squirtle_choice(&choice, &done, input); // display
		}
		else
			cout << "Wrong input." << endl;
	}

}
/********************************************************************* 
 ** Function: bulbasaur_choice 
 ** Description: 
 ** Parameters: 
 ** Pre-Conditions:
 ** Post-Conditions:
 *********************************************************************/
void World::bulbasaur_choice(char* choice, bool* done, ifstream& input){
	string temp;

	input.open("ascii/wordBulbasaur");
	while(!input.eof()){
		getline(input,temp);
		cout << temp << endl;
	}
	input.close();
	cout << endl;

	input.open("ascii/sbulbasaur");
	while(!input.eof()){
		getline(input,temp);
		cout << temp << endl;
	}
	input.close();
	cout << endl;

	cout << "Choose Bulbasaur? ";
	cin >> *choice;
	if(*choice == 'y'){
		s[0][0]->set_name();
		*done = true;
		type = "grass";
	}

}
/********************************************************************* 
 ** Function: charmander_choice
 ** Description: 
 ** Parameters: 
 ** Pre-Conditions:
 ** Post-Conditions:
 *********************************************************************/
void World::charmander_choice(char* choice, bool* done, ifstream& input){
	string temp;

	input.open("ascii/wordCharmander");
	while(!input.eof()){
		getline(input,temp);
		cout << temp << endl;
	}
	input.close();
	cout << endl;

	input.open("ascii/scharmander");
	while(!input.eof()){
		getline(input,temp);
		cout << temp << endl;
	}
	input.close();
	cout << endl;

	cout << "Choose Charmander? ";
	cin >> *choice;
	if(*choice == 'y'){
		s[1][0]->set_name();
		*done = true;
		type = "fire";
	}

}
/********************************************************************* 
 ** Function: squirtle_choice
 ** Description: 
 ** Parameters: 
 ** Pre-Conditions:
 ** Post-Conditions:
 *********************************************************************/
void World::squirtle_choice(char* choice, bool* done, ifstream& input){
	string temp;

	input.open("ascii/wordSquirtle");
	while(!input.eof()){
		getline(input,temp);
		cout << temp << endl;
	}
	input.close();
	cout << endl;

	input.open("ascii/ssquirtle");
	while(!input.eof()){
		getline(input,temp);
		cout << temp << endl;
	}
	input.close();
	cout << endl;

	cout << "Choose Squirtle? ";
	cin >> *choice;
	if(*choice == 'y'){
		s[2][0]->set_name();
		*done = true;
		type = "water";
	}

}
/********************************************************************* 
 ** Function: TEST TEST TEST TEST TEST
 ** Description: 
 ** Parameters: 
 ** Pre-Conditions:
 ** Post-Conditions:
 *********************************************************************/
void World::test(){
	char again = '1';
	int i = 0;
	int j = 0;
	int k = 0;
	char choice;

	cout << "What would you like to test?" << endl;
	cout << " e m h b s" << endl;
	cin >> choice;

	if(choice == 'e'){
		while(again == '1' && i < numEasy){
			system("clear"); // clear screen
			cout << "Damage: " << mob[0][i]->get_damage() << endl;
			i++; // try another object

			cin >> again;
		}
	}
	else if(choice == 'm'){	
		while(again == '1' && j < 20){
			system("clear"); // clear screen
			cout << "Damage: " << mob[1][j]->get_damage() << endl;
			j++; // try another object

			cin >> again;
		}
	}
	else if(choice == 'h'){
		while(again == '1' && k < 12){
			system("clear"); // clear screen
			cout << "Damage: " << mob[2][k]->get_damage() << endl;
			k++; // try another object

			cin >> again;
		}
	}
	else if(choice == 'b'){
		while(again == '1'){
			system("clear"); // clear screen
			cout << "Damage: " << mob[3][0]->get_damage() << endl;
			cin >> again;
		}
		again = '1';
		while(again == '1'){
			system("clear"); // clear screen
			cout << "Damage: " << mob[3][1]->get_damage() << endl;

			cin >> again;
		}
	}
	else if(choice == 's'){
		while(again == '1'){
			cin.ignore();
			system("clear"); // clear screen
			cout << "Damage: " << s[0][0]->get_damage() << endl;
			cin.ignore();
			system("clear"); // clear screen
			cout << "Damage: " << s[0][1]->get_damage() << endl;
			cin.ignore();
			system("clear"); // clear screen
			cout << "Damage: " << s[0][2]->get_damage() << endl;
			cin.ignore();
			system("clear"); // clear screen
			cout << "Damage: " << s[1][0]->get_damage() << endl;
			cin.ignore();
			system("clear"); // clear screen
			cout << "Damage: " << s[1][1]->get_damage() << endl;
			cin.ignore();
			system("clear"); // clear screen
			cout << "Damage: " << s[1][2]->get_damage() << endl;
			cin.ignore();
			system("clear"); // clear screen
			cout << "Damage: " << s[2][0]->get_damage() << endl;
			cin.ignore();
			system("clear"); // clear screen
			cout << "Damage: " << s[2][1]->get_damage() << endl;
			cin.ignore();
			system("clear"); // clear screen
			cout << "Damage: " << s[2][2]->get_damage() << endl;
			cin.ignore();

			cin >> again;
		}
	}

}
/********************************************************************* 
 ** Function: make_dynamic_arrays
 ** Description: 
 ** Parameters: 
 ** Pre-Conditions:
 ** Post-Conditions:
 *********************************************************************/
void World::make_dynamic_arrays(){
	numWeedle = e.userinput_int(0,15, "How many weedles? ");
	numCaterpie = e.userinput_int(0,15, "How many caterpie? ");
	numEasy = 18 + numWeedle + numCaterpie;

	mob = new Mob**[4];
	mob[0] = new Mob*[numEasy]; // EASY
	mob[1] = new Mob*[20]; // MEDIUM
	mob[2] = new Mob*[12]; // HARD
	mob[3] = new Mob*[2]; // BOSS
	fill_easy();
	fill_medium();
	fill_hard();
	fill_boss();

	s = new Starter**[3];
	s[0] = new Starter*[3]; // GRASS 
	s[1] = new Starter*[3]; // FIRE
	s[2] = new Starter*[3]; // WATER
	fill_s();

}	
/********************************************************************* 
 ** Function: fill_s
 ** Description: 
 ** Parameters: 
 ** Pre-Conditions:
 ** Post-Conditions:
 *********************************************************************/
void World::fill_s(){
	s[0][0] = new Bulbasaur;
	s[0][1] = new Ivysaur;
	s[0][2] = new Venusaur;

	s[1][0] = new Charmander;
	s[1][1] = new Charmeleon;
	s[1][2] = new Charizard;

	s[2][0] = new Squirtle;
	s[2][1] = new Wartortle;
	s[2][2] = new Blastoise;
}
/********************************************************************* 
 ** Function: fill_easy
 ** Description: 
 ** Parameters: 
 ** Pre-Conditions:
 ** Post-Conditions:
 *********************************************************************/
void World::fill_easy(){
	int i = 0;

	for(int a=0; a < numCaterpie; a++){
		mob[0][i] = new Caterpie;
		i++;
	}
	for(int b=0; b < numWeedle; b++){
		mob[0][i] = new Weedle;
		i++;
	}
	for(int c=0; c < 4; c++){
		mob[0][i] = new Pidgey;
		i++;
	}
	for(int d=0; d < 4; d++){
		mob[0][i] = new Rattata;
		i++;
	}
	for(int e=0; e < 3; e++){
		mob[0][i] = new Poliwag;
		i++;
	}
	for(int f=0; f < 3; f++){
		mob[0][i] = new Nidoran;
		i++;
	}
	for(int g=0; g < 2; g++){
		mob[0][i] = new Pikachu;
		i++;
	}
	for(int h=0; h < 2; h++){
		mob[0][i] = new Vulpix;
		i++;
	}
}
/********************************************************************* 
 ** Function: fill_medium
 ** Description: 
 ** Parameters: 
 ** Pre-Conditions:
 ** Post-Conditions:
 *********************************************************************/
void World::fill_medium(){
	int i = 0;

	for(int a=0; a < 5; a++){
		mob[1][i] = new Haunter;
		i++;	
	}
	for(int b=0; b < 1; b++){
		mob[1][i] = new Lapras;
		i++;
	}
	for(int c=0; c < 3; c++){
		mob[1][i] = new Nidoking;
		i++;
	}
	for(int d=0; d < 2; d++){
		mob[1][i] = new Rapidash;
		i++;
	}
	for(int e=0; e < 3; e++){
		mob[1][i] = new Starmie;
		i++;
	}
	for(int f=0; f < 6; f++){
		mob[1][i] = new Onix;
		i++;
	}
}
/********************************************************************* 
 ** Function: fill_hard
 ** Description: 
 ** Parameters: 
 ** Pre-Conditions:
 ** Post-Conditions:
 *********************************************************************/
void World::fill_hard(){
	int i = 0;

	for(int a=0; a < 4; a++){
		mob[2][i] = new Slowbro;
		i++;
	}
	for(int b=0; b < 3; b++){
		mob[2][i] = new Exeggutor;
		i++;
	}
	for(int c=0; c < 2; c++){
		mob[2][i] = new Golem;
		i++;
	}
	for(int d=0; d < 2; d++){
		mob[2][i] = new Rhydon;
		i++;
	}
	for(int e=0; e < 1; e++){
		mob[2][i] = new Ditto;
		i++;
	}
}
/********************************************************************* 
 ** Function: fill_boss
 ** Description: 
 ** Parameters: 
 ** Pre-Conditions:
 ** Post-Conditions:
 *********************************************************************/
void World::fill_boss(){
	mob[3][0] = new Parham;
	mob[3][1] = new Gyarados;
}
/********************************************************************* 
 ** Function: DESTRUCTOR
 ** Description: 
 ** Parameters: 
 ** Pre-Conditions:
 ** Post-Conditions:
 *********************************************************************/
World::~World(){

	for(int a=0; a < numEasy; a++) // delete 3rd Dim.
		delete mob[0][a];
	for(int b=0; b < 20; b++)
		delete mob[1][b];
	for(int c=0; c < 12; c++)
		delete mob[2][c];
	for(int d=0; d < 2; d++)
		delete mob[3][d];

	for(int i=0; i < 4; i++) // delete 2nd Dim.
		delete[]mob[i];

	delete[]mob; // polymorph array pointer

	for(int e=0; e < 3; e++) // delete 3rd Dim.
		delete s[0][e];
	for(int f=0; f < 3; f++)
		delete s[1][f];
	for(int g=0; g < 3; g++)
		delete s[2][g];

	for(int j=0; j < 3; j++) // delete 2nd Dim.
		delete[]s[j];

	delete[]s; // polymorph array pointer
}
/********************************************************************* 
 ** Function: display_logo
 ** Description: couts a logo
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: no variables are altered
 *********************************************************************/
void World::display_logo(){
	system("clear");
	ifstream input;
	input.open("ascii/pokemonlogo");
	string temp;

	while(!input.eof()){
		getline(input,temp);
		cout << temp << endl;
	}
}
/********************************************************************* 
 ** Function: display_logo2
 ** Description: couts a logo
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: no variables are altered
 *********************************************************************/
void World::display_logo2(){
	ifstream input;
	input.open("ascii/pokemonlogo2");
	string temp;

	while(!input.eof()){
		getline(input,temp);
		cout << temp << endl;
	}
}
