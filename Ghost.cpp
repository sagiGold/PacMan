#include "Ghost.h"

Ghost::Ghost(Point _p){
	point.setPoint(_p.getX(), _p.getY());
	color = BLACK;
	shape = '&';
	v = STAY;
}

void Ghost::setGhost(Point p) {
	point.setPoint(p.getX(), p.getY());
}

Point Ghost::getGhost() {
	return point;
}