// Alex Ewing
// Items.h

#ifndef ITEMS_H
#define ITEMS_H

Class Weapon {
private:
	int power;
	int magic;
public:
	int getPower();
	int getMagic();
	Weapon(int power, int magic);
}

Class Armor {
private:
	int defense;
	int mDefense;
	int health;
	int mana;
public:
	Armor(int defense, int mDefense, int health, int mana);
	int getDefense();
	int getMDefense();
	int getHealth();
	int getMana();
}

#endif