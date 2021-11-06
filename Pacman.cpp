#include "Pacman.h"

//--------Constructors---------------------------------//
Pacman::Pacman() {
	point.setPoint(5,5);
	color = WHITE;
	shape = '@';
	v = STAY;
}

Pacman::Pacman(Point _p) {
	point.setPoint(_p.getX(), _p.getY());
	color = WHITE;
	shape = '@';
	v = STAY;
}

Pacman::~Pacman() {
}

//--------Getters and Setters---------------------------//
void Pacman::setPacman(Point p) {
	point.setPoint(p.getX(), p.getY());
}

void Pacman::setVector(Move_Vector dir) {
	v = dir;
}

Point Pacman::getPacman() {
	return point;
}

char Pacman::getShape() {
	return shape;
}

Color Pacman::getColor() {
	return color;
}


//--------Methods------------------------------------//

void Pacman::setDirection(char c) {

}

void Pacman::movePacman() {
	if (v != STAY) {
		point.draw(' ');
		point.move(v);
		printPacman();
	}
}

void Pacman::printPacman() {
	point.draw(shape);
}