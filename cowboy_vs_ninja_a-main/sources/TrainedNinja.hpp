#include <iostream>
using namespace std;
#include "Ninja.hpp"

#ifndef TRANIEDNINJA_H
#define TRANIEDNINJA_H
namespace ariel
{
class TrainedNinja: public Ninja {

public:
	// TrainedNinja(): Ninja(Point(),120,"TrainedNinja1",12){ }
	TrainedNinja(std::string nameC,Point placeC): Ninja(placeC, 120, nameC,12){ }

	
};
#endif

}




