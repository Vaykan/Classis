#include <iostream>
#include "Person.h"
#include "Fight.h"
#include "Classis.h"
using namespace std;

void startFight(int nof, Person *people[]){
	int first, second;
	do {
	cout << "Time To Fight \n" << "Select First Fighter: \n" << "#: \n";
	first = getCorrectCinUnSignedInt2();
	cout << "Select Second Fighter: \n" << "#:\n";
	second = getCorrectCinUnSignedInt2();
	second--;
	first--;
	}while(first >= nof || second >= nof);
	fight(*people[first], *people[second]);
//	people[4]->getStats();
}

void fight(Person first, Person second){
Person one = first;
Person two = second;

while(one.getAlive() == true && two.getAlive() == true){
	{

cout << "\nPress Enter to continue \n" << endl;
system("pause");

// one start attack two
_sleep (1000);
cout << "///////////////////////////////////////////////////\n";
cout << one.getName() << "(#: " << one.getVisibleId() << ")" << ": Start attack: " << two.getName() << "(#: " << two.getVisibleId() << ") \n";
cout << "///////////////////////////////////////////////////\n";
int damage = 0.3 * one.getStrong() *  (100 - (rand()%30) ) / 100;
cout << "...................................................\n";
// energy and Agility
{
	if (two.getMaxEnergy() > 0){
		bool got_away = false;
		int randAgility = (rand()%100);

		if(one.getMaxEnergy() > 0)
		randAgility = randAgility * randAgility;

		if(randAgility < two.getAgility())
				got_away = true;
			else
				got_away = false;

		if(got_away == true){
			int dmg = damage * 5;
			int in = two.getMaxEnergy();
		    int en = two.getMaxEnergy() - dmg;

		    if(en < 0)
		    en = 0;

			cout << two.getName() << "(#: " << two.getVisibleId() << ")" << ": Successfully dodged an attack \n1";
			cout << two.getName() << "(#: " << two.getVisibleId() << ")" << ": Lost energy dodging: " << dmg << endl;
			cout << two.getName() << "(#: " << two.getVisibleId() << ")" << ": Has energy: " << en << " (" << in << " - " << dmg << ")\n";
			    damage = 0;
			    two.setEnergy(en);
			}
		}


	if(one.getMaxEnergy() > 0 && two.getMaxEnergy() > 0){
	int dmg = damage * 5;
	int in = two.getMaxEnergy();
    int en = two.getMaxEnergy() - dmg;

    if(en < 0)
  	en = 0;

    two.setEnergy(en);
    cout << two.getName() << "(#: " << two.getVisibleId() << ")" << ": Lost energy during defense: " << dmg << endl;
    cout << two.getName() << "(#: " << two.getVisibleId() << ")" << ": Has energy: " << en << " (" << in << " - " << dmg << ")\n";
	}


}
if(two.getMaxEnergy() <= 0 && one.getMaxEnergy() > 0) {
	cout << two.getName() << "(#: " << two.getVisibleId() << ")" << ": Is tired \n";
	damage = damage * (rand()%40) / 100+ 1;
	//cout << damage << endl;
} else if(two.getMaxEnergy() <= 0)
	cout << two.getName() << "(#: " << two.getVisibleId() << ")" << ": Is tired \n";

cout << two.getName() << "(#: " << two.getVisibleId() << ")" << ": Took damage: " << damage << endl;
int pp = two.getHealth();
int xp = two.getHealth() - damage;

if(xp < 0)
xp = 0;

two.setHealth(xp);
cout << two.getName() << "(#: " << two.getVisibleId() << ")" << ": Has health: " << two.getHealth() << " (" << pp <<
" - "<< damage << ")" << endl;
//energy2
if (two.getMaxEnergy() > 0){
  int sex = two.getMaxEnergy();
  two.setEnergy(two.getMaxEnergy() + two.getEnergyRecovery());
  cout << two.getName() << "(#: " << two.getVisibleId() << ")" << ": Energy restored: " << two.getEnergyRecovery() << endl;
  cout << two.getName() << "(#: " << two.getVisibleId() << ")" << ": Has energy: " << two.getMaxEnergy() << " (" << sex << " + " << two.getEnergyRecovery() << ")\n";
  }
cout << "...................................................\n";
two.getStats();
cout << "\n" << "\n";
}
{

cout << "Press Enter to continue\n \n" << endl;
system("pause");
/*cin.clear();
cin.ignore();
cin.get();
*/


// two start attack one
_sleep (1000);
cout << "///////////////////////////////////////////////////\n";
cout << two.getName() << "(#: " << two.getVisibleId() << ")" << ": Start attack: " << one.getName() << "(#: " << one.getVisibleId() << ") \n";
cout << "///////////////////////////////////////////////////\n";
int damage = 0.3 * two.getStrong() *  (100 - (rand()%30) ) / 100;
cout << "...................................................\n";
// energy and Agility
{
	if (one.getMaxEnergy() > 0){
			bool got_away = false;
			int randAgility = (rand()%100);

			if(two.getMaxEnergy() > 0)
			randAgility = randAgility * randAgility;

			if(randAgility < one.getAgility())
					got_away = true;
				else
					got_away = false;

			if(got_away == true){
				int dmg = damage * 5;
				int in = one.getMaxEnergy();
			    int en = one.getMaxEnergy() - dmg;

			    if(en < 0)
			    en = 0;

				cout << one.getName() << "(#: " << one.getVisibleId() << ")" << ": Successfully dodged an attack \n";
				cout << one.getName() << "(#: " << one.getVisibleId() << ")" << ": Lost energy dodging: " << dmg << endl;
				cout << one.getName() << "(#: " << one.getVisibleId() << ")" << ": Has energy: " << en << " (" << in << " - " << dmg << ")\n";
				    damage = 0;
				    one.setEnergy(en);
				}
			}

	if(two.getMaxEnergy() > 0 && one.getMaxEnergy() > 0){
		int dmg = damage * 5;
		int in = one.getMaxEnergy();
	    int en = one.getMaxEnergy() - dmg;

	    if(en < 0)
	   	en = 0;

	    one.setEnergy(en);
	    cout << one.getName() << "(#: " << one.getVisibleId() << ")" << ": Lost energy during defense: " << dmg << endl;
	    cout << one.getName() << "(#: " << one.getVisibleId() << ")" << ": Has energy: " << en << " (" << in << " - " << dmg << ")\n";
		}


}
if(one.getMaxEnergy() <= 0 && two.getMaxEnergy() > 0) {
	cout << one.getName() << "(#: " << one.getVisibleId() << ")" << ": Is tired \n";
	damage = damage * (rand()%40) / 100+ 1;
	//cout << damage << endl;
} else if(one.getMaxEnergy() <= 0)
	cout << one.getName() << "(#: " << one.getVisibleId() << ")" << ": Is tired \n";

cout << one.getName() << "(#: " << one.getVisibleId() << ")" << ": Took damage: " << damage << endl;
int pp = one.getHealth();
int xp = one.getHealth() - damage;

if(xp < 0)
xp = 0;

one.setHealth(xp);
cout << one.getName() << "(#: " << one.getVisibleId() << ")" << ": Has health: " << one.getHealth() << " (" << pp <<
" - "<< damage << ")" << endl;
//energy2
if (one.getMaxEnergy() > 0){
  int sex = one.getMaxEnergy();
  one.setEnergy(one.getMaxEnergy() + one.getEnergyRecovery());
  cout << one.getName() << "(#: " << one.getVisibleId() << ")" << ": Energy restored: " << one.getEnergyRecovery() << endl;
  cout << one.getName() << "(#: " << one.getVisibleId() << ")" << ": Has energy: " << one.getMaxEnergy() << " (" << sex << " + " << one.getEnergyRecovery() << ")\n";
  }
cout << "...................................................\n";
one.getStats();
cout << "\n" << "\n" << "\n";
}

// end

if(one.getHealth() <= 0){
one.setDead();
cout << one.getName() << "(#: " << one.getVisibleId() << "): " << "Is DIED\n";
}
if(two.getHealth() <= 0){
two.setDead();
cout << two.getName() << "(#: " << two.getVisibleId() << "): " << "Is DIED\n";

while(true){
	system("pause");
	int a;
	cin >> a;
}


}
}
}







void endFight(){

}
