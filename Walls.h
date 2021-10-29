#pragma once

#include "Point.h"
#define NUM_OF_BARRIES 50

class Walls {
	Point wallPosArr[NUM_OF_BARRIES];
	char shape = '+';

public:
	void initWalls();
	void drawWalls();
};