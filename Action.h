// Alex Ewing
// Action.h

#ifndef ACTION_H
#define ACTION_H

#include <string>
#include "Character.h"

#define ACTION_TOTALNUM 50

class Action {
private:
	std::string actionID;
	void (*actionFunction)(Character actor, Character target);

public:
	// Constructor
	Action(void (*funct)(Character actor, Character target));
};

#endif