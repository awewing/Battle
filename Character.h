// Alex Ewing
// Character.h

#ifndef CHARACTER_H
#define CHARACTER_H

#include "Stats.h"
#include <string>


class Character {
private:
	std::string name;
	Stats* maxStats;
	Stats* battleStats;
	// Weapon weapon;
	// Armor armor;

public:
	// Constructor
	Character(std::string nm);

	// Getters
	Stats* getMaxStats();
	Stats* getBattleStats();
	// Weapon getWeapon();
	// Armor getArmor();
};

#endif