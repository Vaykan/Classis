#include <iostream>
#include <ctime>
//#include <cstdlib>
#include "Person.h"
#include "Classis.h"
#include "Fight.h"
using namespace std;

int main() {
getRandSeed();
int nof = getNof();
Person *people[nof];
createPeople(people, nof);
startFight(nof, people);


return 0;
}

int getNof(){
	cout << "How many people create? (min:1 max:100) \n";
	int nof;
	bool IsRepeating = {false};
	do{
		if(IsRepeating == true)
			cout << "No more than 100!" << endl;
		nof = getCorrectCinUnSignedInt2();
		IsRepeating = true;
	}while(nof > 100);
	return nof;
}

void createPeople(Person *people[], int nof){
	for (int x = 0; x < nof; x++){
		people[x] = new Person();
		people[x]->setId(x);
		people[x]->getStats();
	}
}

void getRandSeed(){
	srand(time(0));
}

int getCorrectCinUnSignedInt(){
	signed int x;
	do{
		cin >> x;
		if (!cin.fail() && x > 0){
			cin.sync();
			break;
		}
		cout << "incorrect values" << endl;
		cin.clear();
		cin.sync();
	}while(true);
	return x;
}


int getCorrectCinUnSignedInt2(){
	signed int x;
	bool IsRepeating = {false};
	do{
		if (IsRepeating == true)
			cout << "incorrect values" << endl;
		cin.clear();
		cin.sync();
		cin >> x;
		IsRepeating = true;
	}while (cin.fail() || x <= 0);
	cin.sync();
	return x;
}
