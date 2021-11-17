#include "Ghost.h"

//--------Constructors---------------------------------//

Ghost::Ghost() {
	curr_point.setPoint(16,5);
	color = RED;
	shape = (char)GHOST;
	v = STAY;
}

Ghost::Ghost(Point _p, Color c) {
	curr_point.setPoint(_p.getX(), _p.getY());
	color = c;
	shape = (char)GHOST;
	v = STAY;
}

//--------Getters and Setters---------------------------//

void Ghost::setGhost(Point p, Board& board) {
	unsigned char readVal = board.getCell(curr_point);
	switch (readVal) {
		case (unsigned char)BREAD:
			setTextColor(Color::LIGHTGREY);
			curr_point.draw((unsigned char)BREAD);
			break;
		default:
			curr_point.draw(' ');
			break;
	}
	curr_point.setPoint(p.getX(), p.getY());
}

//--------Methods------------------------------------//

void Ghost::moveGhost(Board& board) { // cancel blackHole passing option
	next_point = curr_point;
	next_point.move();
	unsigned char readVal = board.getCell(next_point);
	if(isEndBoard())
		return;
	if (readVal == (unsigned char)WALL) {
		v = STAY;
		return;
	}
	setTextColor(Color::LIGHTGREY);
	curr_point.draw(board.getCell(curr_point));
	curr_point = next_point;
	printGhost();
}

void Ghost::printGhost() {
	setTextColor(color);
	curr_point.draw(shape);
}

bool Ghost::isEndBoard() {
	if (next_point.getX() > WIDTH - 2 || next_point.getX() < 1 || next_point.getY() > HEIGHT-1 || next_point.getY() < 1)
	{
		v = STAY;
		return true;
	}
	return false;
}