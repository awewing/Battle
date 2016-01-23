// Alex Ewing
// Action.cpp

#include "Action.h"
#include <string>
#include "Character.h"

Action::Action(void (*fun)(Character, Character)) {
	actionFunction = fun;
}