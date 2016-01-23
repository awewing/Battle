// Alex Ewing
// Stats.h

#ifndef STATS_H
#define STATS_H

class Stats {
private:
	int health;
	int mana;
	int speed;
	int power;
	int magic;
	int defense;
	int mDefense;
public:
	// Constructor	
	Stats();
	Stats(int h, int m, int s, int p, int mg, int d, int md);

	// Functions
	void setStats(Stats* stat);
	void printStats();

	// Getter methods
	int getHealth();
	int getMana();
	int getSpeed();
	int getPower();
	int getMagic();
	int getDefense();
	int getMDefense();

	// Increment stats (leveling and in battle)
	void incHealth(int increase);
	void incMana(int increase);
	void incSpeed(int increase);
	void incPower(int increase);
	void incMagic(int increase);
	void incDefense(int increase);
	void incMDefense(int increase);

	// Decrement stats (only in battle)
	void decHealth(int decrease);
	void decMana(int decrease);
	void decSpeed(int decrease);
	void decPower(int decrease);
	void decMagic(int decrease);
	void decDefense(int decrease);
	void decMDefense(int decrease);
};

#endif