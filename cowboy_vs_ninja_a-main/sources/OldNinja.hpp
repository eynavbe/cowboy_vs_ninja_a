#include <iostream>
using namespace std;
#include "Ninja.hpp"

#ifndef OLDNINJA_H
#define OLDNINJA_H
namespace ariel
{
class OldNinja: public Ninja {

public:
	// OldNinja(): Ninja(Point(),150,"OldNinja1",8){ }
	OldNinja(std::string nameC,Point placeC): Ninja(placeC, 150, nameC,8){ }

	
};
#endif

}




