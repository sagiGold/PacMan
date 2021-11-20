#ifndef _POINT_H_
#define _POINT_H_

#include "io_utils.h"

//enum Move_Vector { UP , DOWN , LEFT , RIGHT , STAY };
enum Move_Vector { UP, RIGHT, DOWN, LEFT, STAY };


class Point {
	int x, y;

public:
	Point();
	Point(int x, int y);
	void setPoint(int x, int y);
	int getX();
	int getY();
	void draw(char ch);
	void move();
	void move(int direction);
	bool isSamePoint(const Point p1);
	//friend bool operator== (Point& p1, Point& p2);
};

#endif