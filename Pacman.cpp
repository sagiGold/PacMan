#include "Pacman.h"

//--------Constructors---------------------------------//
Pacman::Pacman() {
	curr_point.setPoint(5,6);
	shape = (char)PACMAN;
	color = YELLOW;
	v = STAY;
	score = 0;
}

Pacman::Pacman(Point _p) {
	curr_point.setPoint(_p.getX(), _p.getY());
	shape = (char)PACMAN;
	color = YELLOW;
	v = STAY;
	score = 0;
}

Pacman::~Pacman() { delete this; }

//--------Getters and Setters---------------------------//
void Pacman::setPacman(Point p) {curr_point.setPoint(p.getX(), p.getY());}

void Pacman::setVector(Move_Vector dir) {v = dir;}

Point Pacman::getPacman() {return curr_point;}

char Pacman::getShape() {return shape;}

Color Pacman::getColor() {return color;}


//--------Methods------------------------------------//

void Pacman::moveVector(Pacman& pacman, Move_Vector& dir) {
	int s;
	if (_kbhit()) {
		s = _getch();
		if (s == 'w' || s== 'W')
			dir = UP;
		if (s == 'a' || s == 'A')
			dir = LEFT;
		if (s == 'd' || s == 'D')
			dir = RIGHT;
		if (s == 's' || s == 'S')
			dir = DOWN;
		if (s == ' ')
			dir = STAY;
		pacman.setVector(dir);
	}
}

void Pacman::movePacman(Board &board) {
	if (v != STAY) {
		next_point = curr_point;
		next_point.move(v);
		unsigned char readVal = board.getCell(next_point);
		switch (readVal) {
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
				// force game over
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

void Pacman::printScore() {
	setTextColor(Color::WHITE);
	gotoxy(0, HEIGHT + 1);
	cout << "Current Score:" << score << endl;
}


//int Pacman::collision() {
//	
//}