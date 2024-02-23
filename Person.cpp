#include <iostream>
#include "Person.h"
using namespace std;
Person::Person(){
	randH();
}
void Person::randH(){
	const string nameStorage[6] {"Josh", "Steve", "Dave", "Alex", "Jeck", "Hanna"};
	name = nameStorage[rand()%6];
	strong = (rand()%20+10);
	health = (rand()%90+10);
	maxEnergy = (rand()%190+10);
	energyRecovery = (rand()%9+1);
	agility = (rand()%90+10);
}
void Person::getStats(){
cout << name << "(#: " << getVisibleId() << ")" << endl <<"Health: " << health << endl << "Strong: " << strong << endl <<
		"Energy: " << maxEnergy << endl << "Energy Recovery: " << energyRecovery << endl <<
		"Agility: " << agility << endl << endl;

}
int Person::getId(){
	return id;
}
int Person::getVisibleId() {
	int x;
	x = id + 1;
	return x;
}
int Person::setId(int SetId){
return id = SetId;
}
int setVisibleId(int SetVisibleId){
	int x;
	x = 1 - SetVisibleId;
	return x;
}
string Person::getName(){
	return name;
}
int Person::getStrong(){
	return strong;
}
int Person::getHealth(){
	return health;
}
int Person::getMaxEnergy(){
	return maxEnergy;
}
int Person::getEnergyRecovery(){
	return energyRecovery;
}
int Person::getAgility(){
	return agility;
}

void Person::setHealth(int xp){
	health = xp;
}
void Person::setEnergy(int eng){
	maxEnergy = eng;
}

void Person::setDead(){
	alive = false;
}
bool Person::getAlive(){
	return alive;
}

