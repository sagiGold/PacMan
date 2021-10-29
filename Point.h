#ifndef _POINT_H_
#define _POINT_H_

#include "io_utils.h"

class Point {
	int x = 1, y = 1; // Need to reboot starting point for each character (PacMan / Ghosts)
public:
	void draw(char ch);
	void move();
	void move(int direction);
};

#endif