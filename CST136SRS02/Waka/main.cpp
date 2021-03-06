// main.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "boat.h"
#include "raft.h"
#include "sailboat.h"
#include "canoe.h"


int main()
{
	Raft theRaft; 
	Boat & seaWitch{ theRaft };
	auto myName{ seaWitch.getName() };
	seaWitch.moveBoat(kNorth); // TEST CASE TO CONFIRM THE BOAT AT LEAST MOVES 

	Sailboat theSailBoat; 
	Boat & aquaholic{ theSailBoat };
	auto myName2{ aquaholic.getName() }; 
	aquaholic.moveBoat(kEast); // TEST CASE TO CONFIRM THE BOAT AT LEAST MOVES 

	Canoe theCanoe;
	Boat & journey{ theCanoe }; 
	auto myName3{ journey.getName() }; 
	journey.moveBoat(kSouth); // TEST CASE TO CONFIRM THE BOAT AT LEAST MOVES 

    return 0;
}

