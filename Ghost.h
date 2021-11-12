#ifndef GHOST_H_
#define GHOST_H_
#include "Point.h"
#include "Color.h"
#include "Board.h"

class Ghost {
	Point curr_point;
	Color color;
	char shape;
	Move_Vector v;

public:
	//constructors
	Ghost();
	Ghost(Point _p, Color c);
	~Ghost();

	//setters and getters
	void setGhost(Point p);
	Point getGhost();

	//methods
	void moveGhost(Board& board);
	void printGhost();

private:
	Point next_point;
};

#endif

