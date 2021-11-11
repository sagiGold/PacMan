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

void Pacman::movePacman(Board &board) {
	if (v != STAY) {
		next_point = curr_point;
		next_point.move(v);
		unsigned char readVal = board.getCell(next_point);
		switch (readVal){
			case (unsigned char)WALL:
				v = STAY;
				return;
			case (unsigned char)BREAD:
				score++;
				break;
			case (unsigned char)GHOST:
				clear_screen();
				gotoxy(0, 0);
				cout << "YOU LOSE" << endl;
			default:
				break;
		}
		curr_point.draw(' ');
		board.editCell(curr_point, ' ');
		curr_point = next_point;
		printPacman();
	}
}

void Pacman::printPacman() {
	curr_point.draw(shape);
}

//int Pacman::collision() {
//	
//}