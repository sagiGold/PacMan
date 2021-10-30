#ifndef PACMAN_H_
#define PACMAN_H_
#include "Point.h"
#include "Color.h"


class Pacman{
	Point point;
	Color color;
	char shape;
	Move_Vector v;

	public:
		Pacman(Point _p);
		void setPacman(Point p);
		Point getPacman();
};

#endif 


