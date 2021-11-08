#ifndef _POINT_H_
#define _POINT_H_

#include "io_utils.h"

enum Move_Vector { UP , DOWN , LEFT , RIGHT , STAY  };


class Point {
	int x, y; // Need to reboot starting point for each character (PacMan / Ghosts)
public:
	Point();
	Point(int x, int y);

	void setPoint(int x, int y);
	int getX();
	int getY();
	void draw(char ch);
	void move();
	void move(int direction);

	char readPoint();
};

#endif