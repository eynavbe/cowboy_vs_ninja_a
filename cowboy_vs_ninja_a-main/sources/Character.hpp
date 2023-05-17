#include <iostream>
#include "Point.hpp"
using namespace std;

#ifndef CHARACTER_H
#define CHARACTER_H
namespace ariel
{
class Character {
private:
	Point  location;
    int hitPoint;
    std::string name;

public:
	Character(Point  placeC, int hitPointC, std::string nameC): location(placeC), hitPoint(hitPointC) , name(nameC){ }
	Character(): location(), hitPoint(0) , name("game1"){ }  
	
	Point getLocation() const {
		return location;
	}
	int getHitPoint() const {
		return hitPoint;
	}
    std::string getName() const {
		return name;
	}

	operator string() const {             
		return string(location)+","+std::to_string(hitPoint)+","+(name);
	}

	// virtual void print() {  
	// 	// return string();           
	//     cout << string(location)+","+std::to_string(hitPoint)+","+(name) << endl;

	// }
	virtual  std::string print() {  
		// return string();           
		return string(location)+","+std::to_string(hitPoint)+","+(name);

	}
    bool isAlive()const;

    virtual double distance (Character * character2) const;

    int hit(int num)const;

};

}

#endif


