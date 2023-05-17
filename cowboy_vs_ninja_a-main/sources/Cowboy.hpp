#include <iostream>
using namespace std;
#include "Character.hpp"

#ifndef COWBAY_H
#define COWBAY_H
namespace ariel
{
class Cowboy: public Character {
private:
	int amountBalls;

public:
	Cowboy(std::string nameC, Point  placeC): Character(placeC, 110, nameC), amountBalls(6){ }

	
	int getAmountBalls() const {
		return amountBalls;
	}
	

	operator string() const {             
            return std::to_string(amountBalls) + "," + string(getLocation()) + "," + std::to_string(getHitPoint()) + "," + getName();
	}

	// virtual void print() {             
    //         cout << std::to_string(amountBalls) + "," + string(getLocation()) + "," + std::to_string(getHitPoint()) + "," + getName() << endl;
	// }

    void shoot(Character *enemy)const;


    bool hasboolets()const;

    void reload()const;

};
#endif

}




