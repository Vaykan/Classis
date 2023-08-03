#ifndef PERSON_H_
#define PERSON_H_
using namespace std;

class Person{
private:
string name;
int id;
signed int strong, health, maxEnergy, energyRecovery, agility;
bool alive{true};
public:
	Person();
	void randH();
    void getStats();
    int getVisibleId();
    int getId();
    int setId(int SetId);
    int setVisibleId(int SetVisibleId);
    string getName();
    int getStrong();
    int getHealth();
    int getMaxEnergy();
    int getEnergyRecovery();
    int getAgility();
    void setHealth(int xp);
    void setEnergy(int eng);
    void setDead();
    bool getAlive();
};

#endif





