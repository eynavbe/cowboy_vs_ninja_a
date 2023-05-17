#include <iostream>
using namespace std;

#ifndef POINT_H
#define POINT_H
namespace ariel
{
class Point {
private:
	double  x;
	double  y;

public:
	Point(double  x1, double y2): x(x1), y(y2) { }
	Point(): x(0.0), y(0.0) { }  
	
	int getX() const {
		return x;
	}
	int getY() const {
		return y;
	}

	operator string() const {             
		return std::to_string(x)+","+std::to_string(y);
	}

	virtual void print ()const {             
		cout << std::to_string(x)+","+std::to_string(y) <<endl;
	}

    virtual double distance (Point Point2) const;

    Point moveTowards(Point startingPoint, Point destinationPoint, double distance) const;

};
}
#endif



