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

	//setters and getters
	void setGhost(Point p, Board& board);
	Point getGhost();

	//methods
	void moveGhost(Board& board);
	void printGhost();

	void setColor(Color c);

private:
	Point next_point;
	bool isEndBoard();
};

#endif

