#include "world.h"

/********************************************************************* 
 ** Function: boss_sequence
 ** Description: edits the done variable, changing it to true if the
 ** player wins, if they lose, it gives them another chance at fighting  
 ** Parameters: the indicis for the starter array 
 ** Pre-Conditions: stage 3 and pokemon has enough xp
 ** Post-Conditions: game is won and bool is changed
 *********************************************************************/
void World::boss_sequence(int s1, int s2){
	string input;

	system("clear");
	if(mob[3][0]->get_hp() <= 0 || mob[3][1]->get_hp() <= 0){ // IF YOU'VE WON THE GAME 
		cout << "====================================================================================================" << endl;
		cout << "\n\n\n" << endl;
		cout << get_swanson_quote() << endl;
		cout << "\n\n\n" << endl;
		cout << "GAME OVER" << endl;
		cout << "====================================================================================================" << endl;
		won = true;
	}
	if(won == false){
		cout << "====================================================================================================" << endl;
		cout << "\n\n\n                                Are you ready for your final test?                      \n\n\n" << endl;
		cout << "====================================================================================================" << endl;
		cin.ignore();
		cin >> input;

		if(input == "no" || input == "n" || input == "0" || input == "o"){
			cout << "Here, have some stats for your incompetence." << endl;
			cin.ignore();
			s[s1][s2]->win();
		}
		else if(input == "parham" || input == "arham")
			fight(s1,s2,3,0); // fight PARHAM

		else{
			fight(s1,s2,3,1); // fight GYARADOS
		}
	}
}
/********************************************************************* 
 ** Function: pokecenter
 ** Description: heals the pokemon to full hp
 ** Parameters: the indicis for the starter array
 ** Pre-Conditions: a battle has been completed
 ** Post-Conditions: pokemon is healed if user input was given
 *********************************************************************/
void World::pokecenter(int s1, int s2){
	char yes;
	string temp;

	system("clear");
	cout << "Press y to visit Pokecenter ";
	cin >> yes;
	if(yes == 'y'){

		ifstream input; // print ascii art
		input.open("ascii/pokecenter");
		while(!input.eof()){
			getline(input,temp);
			cout << temp << endl;
		}
		input.close();

		s[s1][s2]->set_maxHp(); // restore hp to max
		cout << "Press ENTER to continue" << endl;
		cin.ignore();
		cin.ignore();
	}
} 
/********************************************************************* 
 ** Function: check_xp 
 ** Description: checks xp values before initiating a fight
 ** Parameters:  the indicis for both the mob and starter array
 ** Pre-Conditions: a good mob and starter have been chosen
 ** Post-Conditions: either an evolution or fight is initiated 
 *********************************************************************/
void World::check_xp(int s1, int s2, int m1, int m2){

	if(s[s1][s2]->get_xp() > 11101 && level == 3){
		boss_sequence(s1,s2);
		if(won == false)
			pokecenter(s1,s2);
	}
	else if(s[s1][s2]->get_xp() > 1100 && level == 2){
		s[s1][s2]->evolve(); // EVOLVE POKEMON
		level = 3; // INCREASE LEVEL
		s[s1][s2+1]->set_name();
	}
	else if(s[s1][s2]->get_xp() > 149 && level == 1){
		s[s1][s2]->evolve(); // EVOLVE POKEMON
		level = 2; // INCREASE LEVEL
		s[s1][s2+1]->set_name();
	}
	else{
		fight(s1,s2,m1,m2); // if no need to evolve, call fight function
		pokecenter(s1,s2); 
	}
}
/********************************************************************* 
 ** Function: game_loop 
 ** Description: constant game loop as long as the boss has not been defeated
 ** Parameters: none
 ** Pre-Conditions: the world constructor was called and the function called
 ** Post-Conditions: game is over
 *********************************************************************/
void World::game_loop(){
	won = false;

	while(won == false){
		starter_for_fight(); // choose pokemon, check xp, run fight
	}
}
/********************************************************************* 
 ** Function: starter_for_fight 
 ** Description: chooses the right type and level starter
 ** Parameters: none
 ** Pre-Conditions: the game loop is still going
 ** Post-Conditions: a starter is sent to the mob choice function
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
 ** Description: chooses a good mob for the fight.  if the mob is dead,
 ** chooses another one
 ** Parameters: the starter indicis
 ** Pre-Conditions: a starter was chosen
 ** Post-Conditions: the indicis are sent to the check xp function
 *********************************************************************/
void World::mob_for_fight(int s1, int s2){
	int index;
	bool reroll = false;

	do{
		reroll = false; // reset reroll

		if(level == 1){ // if in 1st stage 
			index = rand()%numEasy; // get a random mob
			if(mob[0][index]->get_hp() > 0) // if alive
				check_xp(s1,s2,0,index); // fight sequence	
			else 
				reroll = true;	
		}
		else if(level == 2){ 
			index = rand()%20;
			if(mob[1][index]->get_hp() > 0)
				check_xp(s1,s2,1,index);	
			else 
				reroll = true;	
		}
		else if(level == 3){ 
			index = rand()%12; 
			if(mob[2][index]->get_hp() > 0)
				check_xp(s1,s2,2,index);
			else 
				reroll = true;	
		}
	}while(reroll == true);
}
/********************************************************************* 
 ** Function: fight 
 ** Description: pokemon take turns fighting untill one wins. 5 gets a
 ** random Ron Swanson quotes. 6 gives free xp for debugging purposes.
 ** 4 jumps to the final boss
 ** Parameters: the indicis for each of the pokemon battling
 ** Pre-Conditions: pokemon does not need to evolve and has not won the
 ** game.
 ** Post-Conditions: another iteration of the game loop runs if game is
 ** still going.
 *********************************************************************/
void World::fight(int s1, int s2, int mob1, int mob2){
	bool run = false;
	int choice;

	system("clear");

	cout << "A wild " << mob[mob1][mob2]->get_pokemon() << " appears!" << endl;
	choice = e.userinput_int(0,9,"Attack - 0, Run - 1\n"); // give user chance to run
	cin.ignore();

	if(choice != 1 && choice != 6 && choice != 5 && choice != 4){

		fight_loop(s1,s2,mob1,mob2); // fight the monsters	

		if( mob[mob1][mob2]->get_hp() < s[s1][s2]->get_hp() ) // if WON
			s[s1][s2]->win();
		else{ // if LOST 
			cout << endl << "Oh no! " << s[s1][s2]->get_name() << " fainted!" << endl << "Press ENTER to continue" << endl;
			cin.ignore();
		}
	}
	else if(choice == 6){
		for(int i=0; i < 15; i++)
			s[s1][s2]->win();
	}
	else if(choice == 5){
		cout << "====================================================================================================" << endl;
		cout << "\n\n\n" << endl;
		cout << get_swanson_quote() << endl;
		cout << "\n\n\n" << endl;
		cout << "====================================================================================================" << endl;
		cin.ignore();
	}
	else if(choice == 4){
		level = 3;
		for(int i=0; i < 20; i++)
			s[s1][2]->win();
	//	won = true;
	}
}
/********************************************************************* 
 ** Function: fight loop 
 ** Description: fights back and forth between monsters while they're alive 
 ** Parameters: the indexes for the two proper creatures
 ** Pre-Conditions: both are alive
 ** Post-Conditions: THERE CAN BE ONLY ONE
 *********************************************************************/
void World::fight_loop(int s1, int s2, int mob1, int mob2){

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
}
/********************************************************************* 
 ** Function: choose_starter
 ** Description: lets user pick a starter pokemon. the type chosen is 
 ** stored for later use
 ** Parameters: none
 ** Pre-Conditions: world was constructed
 ** Post-Conditions: type is set 
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
 ** Description: mostly ascii art code. type is set though
 ** Parameters: the choice of the user, the bool for continuing the loop
 ** and the ifstream for taking input
 ** Pre-Conditions: user has not chosen yet
 ** Post-Conditions: user chooses bulbasaur or selects a different 
 ** starter to view
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
 ** Description: mostly ascii art code. type is set though
 ** Parameters: the choice of the user, the bool for continuing the loop
 ** and the ifstream for taking input
 ** Pre-Conditions: user has not chosen yet
 ** Post-Conditions: user chooses charmander or selects a different 
 ** starter to view
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
 ** Description: mostly ascii art code. type is set though
 ** Parameters: the choice of the user, the bool for continuing the loop
 ** and the ifstream for taking input
 ** Pre-Conditions: user has not chosen yet
 ** Post-Conditions: user chooses squirtle or selects a different 
 ** starter to view
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
 ** Function: COPY CONSTRUCTOR
 ** Description: creates a new World object that is an exact (deep) copy  
 ** of another world object
 ** Parameters: world object
 ** Pre-Conditions: function call
 ** Post-Conditions: copy object is made
 *********************************************************************/
/*World::World(World& input){

	numEasy = input.get_numEasy();
	numMedium = input.get_numMedium();
	numHard = input.get_numHard();

	mob = new Mob**[4]; // create first dimension

	mob[0] = new Mob*[numEasy]; // EASY
	mob[1] = new Mob*[numMedium]; // MEDIUM
	mob[2] = new Mob*[numHard]; // HARD
	mob[3] = new Mob*[2]; // BOSS
	
	for(int i=0; i < numEasy; i++){
		mob[0][i] = (Mob*)malloc(sizeof(*input.get_mob()[0][i]));//new Mob;
		memcpy(mob[0][i], input.get_mob()[0][i], sizeof(*input.get_mob()[0][i]));
	}
	for(int j=0; j < numMedium; j++){
		mob[1][j] = (Mob*)malloc(sizeof(*input.get_mob()[1][j]));//new Mob;
		memcpy(mob[1][j], input.get_mob()[1][j], sizeof(*input.get_mob()[1][j]));
	}
	for(int k=0; k < numHard; k++){
		mob[2][k] = (Mob*)malloc(sizeof(*input.get_mob()[2][k]));//new Mob;
		memcpy(mob[2][k], input.get_mob()[2][k], sizeof(*input.get_mob()[2][k]));
	}
	for(int l=0; l < 2; l++){
		mob[3][l] = (Mob*)malloc(sizeof(*input.get_mob()[3][l]));//new Mob;
		memcpy(mob[3][l], input.get_mob()[3][l], sizeof(*input.get_mob()[3][l]));
	}

	s = new Starter**[3]; // create first dimension

	s[0] = new Starter*[3]; // GRASS 
	s[1] = new Starter*[3]; // FIRE
	s[2] = new Starter*[3]; // WATER

	s[0][0] = (Starter*)malloc(sizeof(*input.get_s()[0][0]));
	memcpy(s[0][0], input.get_s()[0][0], sizeof(*input.get_s()[0][0]));

	s[0][1] = (Starter*)malloc(sizeof(*input.get_s()[0][1]));
	memcpy(s[0][1], input.get_s()[0][1], sizeof(*input.get_s()[0][1]));

	s[0][2] = (Starter*)malloc(sizeof(*input.get_s()[0][2]));
	memcpy(s[0][2], input.get_s()[0][2], sizeof(*input.get_s()[0][2]));

	s[1][0] = (Starter*)malloc(sizeof(*input.get_s()[1][0]));
	memcpy(s[1][0], input.get_s()[1][0], sizeof(*input.get_s()[1][0]));

	s[1][1] = (Starter*)malloc(sizeof(*input.get_s()[1][1]));
	memcpy(s[1][1], input.get_s()[1][1], sizeof(*input.get_s()[1][1]));

	s[1][2] = (Starter*)malloc(sizeof(*input.get_s()[1][2]));
	memcpy(s[1][2], input.get_s()[1][2], sizeof(*input.get_s()[1][2]));

	s[2][0] = (Starter*)malloc(sizeof(*input.get_s()[2][0]));
	memcpy(s[2][0], input.get_s()[2][0], sizeof(*input.get_s()[2][0]));

	s[2][1] = (Starter*)malloc(sizeof(*input.get_s()[2][1]));
	memcpy(s[2][1], input.get_s()[2][1], sizeof(*input.get_s()[2][1]));

	s[2][2] = (Starter*)malloc(sizeof(*input.get_s()[2][2]));
	memcpy(s[2][2], input.get_s()[2][2], sizeof(*input.get_s()[2][2]));
}*/
/********************************************************************* 
 ** Function: get_s 
 ** Description: returns the pointer to the s array 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: triple pointer is returned
 *********************************************************************/
Starter*** World::get_s(){
	return s;
}
/********************************************************************* 
 ** Function: get_mob 
 ** Description: returns the pointer to the mob array 
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: triple pointer is returned
 *********************************************************************/
Mob*** World::get_mob(){
	return mob;
}
/********************************************************************* 
 ** Function: get_numEasy 
 ** Description: returns numEasy
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: int numEasy is returned 
 *********************************************************************/
int World::get_numEasy(){
	return numEasy;
}
/********************************************************************* 
 ** Function: get_numMedium 
 ** Description: returns numMedium
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: int numMedium is returned 
 *********************************************************************/
int World::get_numMedium(){
	return numMedium;
}
/********************************************************************* 
 ** Function: get_numHard 
 ** Description: returns numHard
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: int numHard is returned 
 *********************************************************************/
int World::get_numHard(){
	return numHard;
}
/********************************************************************* 
 ** Function: DEFAULT CONSTRUCTOR
 ** Description: creates the two polymorphic arrays
 ** Parameters: none
 ** Pre-Conditions: world does not exist
 ** Post-Conditions: world now exists. arrays and all.
 *********************************************************************/
World::World(){
	numWeedle = e.userinput_int(0,15, "How many weedles? ");
	numCaterpie = e.userinput_int(0,15, "How many caterpie? ");
	numEasy = 18 + numWeedle + numCaterpie;
	numMedium = 20;
	numHard = 12;

	mob = new Mob**[4];
	mob[0] = new Mob*[numEasy]; // EASY
	mob[1] = new Mob*[numMedium]; // MEDIUM
	mob[2] = new Mob*[numHard]; // HARD
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
 ** Description: creates new objects and assigns their addresses 
 ** to indicis of the polymorphic 3D array
 ** Parameters: none
 ** Pre-Conditions: objects have not been created
 ** Post-Conditions: objects created and addresses are assigned
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
 ** Description: creates new objects and assigns their addresses 
 ** to indicis of the polymorphic 3D array
 ** Parameters: none
 ** Pre-Conditions: objects have not been created
 ** Post-Conditions: objects created and addresses are assigned
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
 ** Description: creates new objects and assigns their addresses 
 ** to indicis of the polymorphic 3D array
 ** Parameters: none
 ** Pre-Conditions: objects have not been created
 ** Post-Conditions: objects created and addresses are assigned
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
 ** Description: creates new objects and assigns their addresses 
 ** to indicis of the polymorphic 3D array
 ** Parameters: none
 ** Pre-Conditions: objects have not been created
 ** Post-Conditions: objects created and addresses are assigned
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
 ** Description: creates new objects and assigns their addresses 
 ** to indicis of the polymorphic 3D array
 ** Parameters: none
 ** Pre-Conditions: objects have not been created
 ** Post-Conditions: objects created and addresses are assigned
 *********************************************************************/
void World::fill_boss(){
	mob[3][0] = new Parham;
	mob[3][1] = new Gyarados;
}
/********************************************************************* 
 ** Function: DESTRUCTOR
 ** Description: frees all dynamically allocated memory
 ** Parameters: none
 ** Pre-Conditions: array stuffs exist
 ** Post-Conditions: they are no more
 *********************************************************************/
World::~World(){


	for(int a=0; a < numEasy; a++){ // delete 3rd Dim.
		if(mob[0][a] != NULL){
			delete mob[0][a];
			mob[0][a] = NULL;
		}
	}
	for(int b=0; b < numMedium; b++){
		if(mob[1][b] != NULL){
			delete mob[1][b];
			mob[1][b] = NULL;
		}
	}
	for(int c=0; c < numHard; c++){
		if(mob[2][c] != NULL){
			delete mob[2][c];
			mob[2][c] = NULL;
		}
	}
	for(int d=0; d < 2; d++){
		if(mob[3][d] != NULL){
			delete mob[3][d];
			mob[3][d] = NULL;
		}
	}
	for(int i=0; i < 4; i++){ // delete 2nd Dim.
		if(mob[i] != NULL){
			delete [] mob[i];
			mob[i] = NULL;
		}
	}
	if(mob != NULL){
		delete [] mob; // delete 1st Dim.
		mob = NULL;
	}
	for(int e=0; e < 3; e++){ // delete 3rd Dim.
		if(s[0][e] != NULL){
			delete s[0][e];
			s[0][e] = NULL;
		}
	}
	for(int f=0; f < 3; f++){
		if(s[1][f] != NULL){
			delete s[1][f];
			s[1][f] = NULL;
		}
	}
	for(int g=0; g < 3; g++){
		if(s[2][g] != NULL){
			delete s[2][g];
			s[2][g] = NULL;
		}
	}
	for(int j=0; j < 3; j++){ // delete 2nd Dim.
		if(s[j] != NULL){
			delete [] s[j];
			s[j] = NULL;
		}
	}
	if(s != NULL){
		delete [] s; // delete 1st Dim. 
		s = NULL;
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
/********************************************************************* 
 ** Function: get_swanson_quote 
 ** Description: returns a random quote from Ron Swanson
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: no variables are altered
 *********************************************************************/
string World::get_swanson_quote(){
	int number;

	number = rand()%8;

	if(number == 0)
		return "Any dog under 50 pounds is a cat and cats are useless. -Ron Swanson";
	else if(number == 1)
		return "Swanson: I've had the same will since I was 8 years old:\n\n\"Upon my death, all of my belongings shall transfer to the man or animal who has killed me.\"\n\nBen: What are these weird symbols?\n\nSwanson: The man who kills me will know.";
	else if(number == 2)
		return "Anne: Do you have a history of mental illness in your family?\n\nSwanson: I have an uncle who does yoga.";
	else if(number == 3)
		return "Chris: Ron, would you like some salad?\n\nSwanson: Since I am not a rabbit, no I do not.";
	else if(number == 4)
		return "Clear alcohols are for rich women on diets. -Ron Swanson";
	else if(number == 5)
		return "There's only one thing I hate more than lying: skim milk.\n\nWhich is water lying about being milk. -Ron Swanson";
	else if(number == 6)
		return "Leslie: You're literally listening to turkey calls.\n\nSwanson: Is this not rap?!?";
	else if(number == 7)
		return "Fishing relaxes me. It's like yoga except I still get to kill something. -Ron Swanson";
}
