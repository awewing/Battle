// Alex Ewing
// Stats.cpp

#include "Stats.h"
#include <iostream>

Stats::Stats() {
	health = 0;
	mana = 0;
	speed = 0;
	power = 0;
	magic = 0;
	defense = 0;
	mDefense = 0;
}

Stats::Stats(int h, int m, int s, int p, int mg, int d, int md) {
	health = h;
	mana = m;
	speed = s;
	power = p;
	magic = mg;
	defense = d;
	mDefense = md;
}

void Stats::setStats(Stats* stat) {
	health = stat->getHealth();
	mana = stat->getMana();
	speed = stat->getSpeed();
	power = stat->getPower();
	magic = stat->getMagic();
	defense = stat->getDefense();
	mDefense = stat->getMDefense();
}

void Stats::printStats() {
	std::cout << "Stats:\n\tHealth:\t\t" << health << "\n\tMana:\t\t" << mana << "\n\tSpeed:\t\t"
			<< speed << "\n\tPower:\t\t" << power << "\n\tMagic:\t\t" << magic
			<< "\n\tDefense:\t" << defense << "\n\tMDefense:\t" << mDefense << "\n";
}

// Getters
int Stats::getHealth() {return health;}
int Stats::getMana() {return mana;}
int Stats::getSpeed() {return speed;}
int Stats::getPower() {return power;}
int Stats::getMagic() {return magic;}
int Stats::getDefense() {return defense;}
int Stats::getMDefense() {return mDefense;}

// Increment
void Stats::incHealth(int increase) {health += increase;}
void Stats::incMana(int increase) {mana += increase;}
void Stats::incSpeed(int increase) {speed += increase;}
void Stats::incPower(int increase) {power += increase;}
void Stats::incMagic(int increase) {magic += increase;}
void Stats::incDefense(int increase) {defense += increase;}
void Stats::incMDefense(int increase) {mDefense += increase;}

// Decrement
void Stats::decHealth(int decrease) {health -= decrease;}
void Stats::decMana(int decrease) {mana -= decrease;}
void Stats::decSpeed(int decrease) {speed -= decrease;}
void Stats::decPower(int decrease) {power -= decrease;}
void Stats::decMagic(int decrease) {magic -= decrease;}
void Stats::decDefense(int decrease) {defense -= decrease;}
void Stats::decMDefense(int decrease) {mDefense -= decrease;}