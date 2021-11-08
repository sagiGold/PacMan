#include "Ghost.h"

Ghost::Ghost(Point _p){
	curr_point.setPoint(_p.getX(), _p.getY());
	color = BLACK;
	shape = (char)GHOST;
	v = STAY;
}

void Ghost::setGhost(Point p) {
	curr_point.setPoint(p.getX(), p.getY());
}

Point Ghost::getGhost() {
	return curr_point;
}

void moveGhost() {

}