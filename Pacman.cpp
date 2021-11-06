#include "Pacman.h"

//--------Constructors---------------------------------//
Pacman::Pacman() {
	curr_point.setPoint(5,5);
	color = WHITE;
	shape = '@';
	v = STAY;
}

Pacman::Pacman(Point _p) {
	curr_point.setPoint(_p.getX(), _p.getY());
	color = WHITE;
	shape = '@';
	v = STAY;
}

Pacman::~Pacman() {
}

//--------Getters and Setters---------------------------//
void Pacman::setPacman(Point p) {
	curr_point.setPoint(p.getX(), p.getY());
}

void Pacman::setVector(Move_Vector dir) {
	v = dir;
}

Point Pacman::getPacman() {
	return curr_point;
}

char Pacman::getShape() {
	return shape;
}

Color Pacman::getColor() {
	return color;
}


//--------Methods------------------------------------//

void Pacman::movePacman() {
	if (v != STAY) {
		curr_point.draw(' ');
		curr_point.move(v);
		printPacman();
	}
}

void Pacman::printPacman() {
	curr_point.draw(shape);
}

int Pacman::collision() {

}