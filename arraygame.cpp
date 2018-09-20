#include <iostream>
#include <math.h>
#include <string>
#include <chrono>
#include <thread>
#include <cstdlib>
#include <ctime>
#include <array>
using namespace std;

int main() {

//Collection Initializer
string game[5] = {"Battlefield", "Call of Duty", "GTA", "NBA"};
//Random game of the day
srand(time(NULL));
cout << "Hello there, did you play this game today by any chance: " << game[rand() % 4] << endl;
string answer;
cin >> answer;
if(answer == "yes")
{
	cout << "Cool!\n\n";
}
//Write the game list
cout << "Here is a list of game: \n";
int i = 0;
while(i < 4)
{
	cout << i + 1 << ". " << game[i] << endl;
	i++;
}
 
//Look for a game, Call of Duty it is
i = 0;
cout << "\nImma look for a game called Call of Duty...\n";
while(i < 4)
{
if(game[i].find("Call of Duty") < game[i].size())
{
cout << "There is Call of Duty in the list.\n";
break;
}
else
{
i++;
}
}

//User input a game name
string input;
cout << "Let's add some games to the list.\n";
cin >> input;
game[4] = input;

cout << "\nHere is a list of game after that was added: \n";
i = 0;
while(i < 5)
{
	cout << i + 1 << ". " << game[i] << endl;
	i++;
}
}