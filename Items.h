// Alex Ewing
// Items.h

#ifndef ITEMS_H
#define ITEMS_H

#define ITEM_TYPE_QUEST 0
#define ITEM_TYPE_USE 1
#define ITEM_TYPE_WEAPON 2
#define ITEM_TYPE_ARMOR 3

class Item {
	int itemType;
	int itemID;
}

// class Use {
	
// }


class Weapon {
private:
	int power;
	int magic;
public:
	int getPower();
	int getMagic();
	Weapon(int power, int magic);
}

class Armor {
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