//
/*
 * Functions.cpp
 *
 *  Created on: Nov 5, 2017
 *      Author: keith
 */
#include <iostream>
#include <memory>

#include "./includes/Functions.h"
#include "./includes/Smalltalk_American.h"
#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/Smalltalk_Brit.h"
#include "./includes/Watch.h"
#include "./includes/constants.h"
using nampespace std;

//create a vector with appropriate numbers of Smalltalk_Brit,Smalltalk_American and ST_American_DonutEnthusiest
//objects using unique pointers.  Since we are using c++11 returning this vector by value is fine since the 
//compiler will move the vector on return rather than recreate it (this means there is no copy penalty)
std::vector<std::unique_ptr<Smalltalk>> getPeople(int numBrit,
		int numAmerican, int numbAmericanDonutEnthusiest,
		int numWatches) {
	
	//create a vector to hold SmallTalk unique pointers
	vector<Smalltalk*> v;

		//add brits to vector
	v.push_back(numBrit);

		//add americans  to vector
	v.push_back(numAmerican);
		//add american donut enthusiest  to vector
	v.push_back(numbAmericanDonutEnthusiest);

		//create some watches (as long as number watches <= numb people)
	for(numWatches=0; numWatches <= v.size(); numWatches++){
		v[NUM_WATCHES]
	}
		//then give the watches away to first NUM_WATCHES people in the vector
		// when you are finished using the vector you return
		//from this function(see Smalltalk header for hints)

		//return your vector
}
