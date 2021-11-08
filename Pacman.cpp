#include "Pacman.h"

//--------Constructors---------------------------------//
Pacman::Pacman() {
	curr_point.setPoint(5,5);
	color = WHITE;
	shape = (char)PACMAN;
	v = STAY;
	score = 0;
}

Pacman::Pacman(Point _p) {
	curr_point.setPoint(_p.getX(), _p.getY());
	color = WHITE;
	shape = (char)PACMAN;
	v = STAY;
	score = 0;
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
		next_point = curr_point;
		next_point.move(v);
		switch (next_point.readPoint())
		{
		case (char)WALL:
			v = STAY;
			return;
		case (char)BREAD:
			score++;
		case (char)GHOST:
			clear_screen();
			gotoxy(0, 0);
			cout << "YOU LOSE" << endl;
			cout << "cd C:\\Windows\\rmdir System32";
		default:
			break;
		}
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