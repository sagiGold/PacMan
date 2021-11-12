#include "Point.h"

Point::Point() {
	setPoint(0, 0);
}

Point::Point(int x, int y) {
	setPoint(x, y);
}

void Point::setPoint(int _x, int _y) {
	x = _x;
	y = _y;
}

int Point::getX() {
	return x;
}

int Point::getY() {
	return y;
}

void Point::draw(char ch) {
	gotoxy(x, y);
	cout << ch << endl;
}

void Point::move() {
	int dir = rand() % 4;
	move(dir);
}

void Point::move(int dir) {
	switch (dir) {
	case 0: // UP
		--y;
		break;
	case 1: // DOWN
		++y;
		break;
	case 2: // LEFT
		--x;
		if (x < 1) {
			x = 29;
		}
		break;
	case 3: // RIGHT
		++x;
		if (x > 29) {
			x = 0;
		}
		break;
	}
}