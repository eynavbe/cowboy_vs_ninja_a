#include <iostream>
using namespace std;
#include "Character.hpp"

#ifndef NINJA_H
#define NINJA_H
namespace ariel
{
class Ninja: public Character {
private:
	int speed;

public:
	// Ninja(int speedC): speed(speedC){ }
	Ninja(Point  placeC, int hitPointC, std::string nameC, int speedC): Character(placeC, hitPointC, nameC), speed(speedC){ }
	// Ninja(Point  placeC, int hitPointC, std::string nameC, int speedC): Character(placeC, hitPointC, nameC), speed(speedC){ }

	// Ninja(): speed(0){ }  
	
	int getSpeed() const {
		return speed;
	}
	

	operator string() const {             
            return std::to_string(speed) + "," + string(getLocation()) + "," + std::to_string(getHitPoint()) + "," + getName();
	}

	// virtual void print() {             
    //         cout << std::to_string(speed) + "," + string(getLocation()) + "," + std::to_string(getHitPoint()) + "," + getName() << endl;
	// }

    void move(Character *enemy)const;
    void slash(Character *enemy)const;

};
}
#endif






