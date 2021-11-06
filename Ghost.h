#ifndef GHOST_H_
#define GHOST_H_
#include "Point.h"
#include "Color.h"
class Ghost {
	Point curr_point;
	Color color;
	char shape;
	Move_Vector v;

public:
	Ghost(Point _p);
	void setGhost(Point p);
	Point getGhost();
	void moveGhost();
};

#endif

