#include "Pacman.h"

//--------Constructors---------------------------------//
Pacman::Pacman() {
	curr_point.setPoint(1,6);
	shape = (char)PACMAN;
	color = YELLOW;
	v = STAY;
	score = 0;
	life = 3;
}

Pacman::Pacman(Point _p) {
	initPacman(_p);
}

//--------Getters and Setters---------------------------//
void Pacman::initPacman(Point _p) {
	curr_point.setPoint(_p.getX(), _p.getY());
	shape = (char)PACMAN;
	color = YELLOW;
	v = STAY;
	score = 0;
	life = 3;
}

void Pacman::setPacman(Point p) {
	curr_point.setPoint(p.getX(), p.getY());
	prev_point = curr_point;
	v = STAY;
	printPacman();
}

//--------Methods------------------------------------//

void Pacman::movePacman(Board &board) {
	if (v != STAY) {
		prev_point = curr_point;
		next_point = curr_point;
		next_point.move(v);
		isEndBoard();
		unsigned char readVal = board.getCell(next_point);
		switch (readVal) {
			case (unsigned char)WALL:
				v = STAY;
				return;
			case (unsigned char)BREAD:
				score++;
				break;
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
	setTextColor(color);
	curr_point.draw(shape);
}

void Pacman::isEndBoard() {
	if (next_point.getX() == WIDTH - 1)
		next_point.setPoint(1, next_point.getY());
	else if(next_point.getX() < 1)
		next_point.setPoint(WIDTH-2, next_point.getY());
	else if (next_point.getY() > HEIGHT - 1)
		next_point.setPoint(next_point.getX(),1);
	else if (next_point.getY() < 1)
		next_point.setPoint(next_point.getX(), HEIGHT);
}