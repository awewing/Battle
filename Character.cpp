// Alex Ewing
// Character.cpp

#include "Character.h"
#include "Stats.h"
#include <iostream>
#include <string>

Character::Character(std::string nm) {
	name = nm;
	maxStats = new Stats;
	battleStats = new Stats;
	// weapon = NULL;
	// armor = NULL;
}

// Getters
Stats* Character::getMaxStats(){ return maxStats; }
Stats* Character::getBattleStats(){ return battleStats; }

// Main for testing
int main() {
	std::cout << "Reached Main, congratulations\n";

	Character Carl = Character::Character("Carl");
	Stats* charStats = Carl.getMaxStats();

	charStats->printStats();

	charStats->incHealth(10);
	charStats->incMana(5);
	charStats->incSpeed(2);
	charStats->incPower(2);
	charStats->incMagic(2);
	charStats->incDefense(2);
	charStats->incMDefense(2);

	std::cout << "\nAfter incrementing stats:\n";
	charStats->printStats();

	std::cout << "\nBattle Stats should still be zero\n";
	Carl.getBattleStats()->printStats();

	Carl.getBattleStats()->setStats(charStats);

	std::cout << "\nBattle Stats after being set\n";
	Carl.getBattleStats()->printStats();

}