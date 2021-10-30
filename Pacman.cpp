#include "Pacman.h"

Pacman::Pacman(Point _p) {
	point.setPoint(_p.getX(), _p.getY());
	color = BLACK;
	shape = '@';
	v = STAY;
}

void Pacman::setPacman(Point p) {
	point.setPoint(p.getX(), p.getY());
}

Point Pacman::getPacman() {
	return point;
}



