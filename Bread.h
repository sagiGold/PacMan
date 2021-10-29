#pragma once

#include "Point.h"
#define NUM_OF_CRUMBS 100

class Bread {
	Point wallPosArr[NUM_OF_CRUMBS];
	char shape = 167;

public: 
	void initCrumbs();
	void drawBreadCrumbs();
};