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
	curr_point.setPoint(_p.getX(), _p.getY());
	shape = (char)PACMAN;
	color = YELLOW;
	v = STAY;
	score = 0;
	life = 3;
}

Pacman::~Pacman() { delete this; }

//--------Getters and Setters---------------------------//
void Pacman::setPacman(Point p) {
	curr_point.setPoint(p.getX(), p.getY());
	v = STAY;
	printPacman();
}

void Pacman::setVector(Move_Vector dir) {v = dir;}

Point Pacman::getPacman() {return curr_point;}

char Pacman::getShape() {return shape;}

Color Pacman::getColor() {return color;}


//--------Methods------------------------------------//

void Pacman::moveVector(Move_Vector& dir) {
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
		setVector(dir);
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

void Pacman::printData() {
	setTextColor(Color::WHITE);
	gotoxy(0, HEIGHT + 1);
	cout << "Current Score: " << score << endl;
	cout << "Remaining Lives: " << life << endl;
}

void Pacman::isGameOver(Ghost* g1, Ghost* g2,Board& board) {  
	if (curr_point.isSamePoint(g1->getGhost()) || curr_point.isSamePoint(g2->getGhost())) {
		life--;
		if (life == 0) {
			clear_screen();
			gotoxy(0, 0);
			setTextColor(Color(WHITE));
			cout << "Game Over :(" << endl;
		}
		setPacman(Point(5, 6));
		g1->setGhost(Point(16, 6), board);
		g2->setGhost(Point(15, 6), board);
	}
}


//int Pacman::collision() {
//	
//}