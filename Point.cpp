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
		if (y < 2)
			y = 11;
		break;
	case 1: // DOWN
		++y;
		if (y > 11)
			y = 1;
		break;
	case 2: // LEFT
		--x;
		if (x < 2)
			x = 32;
		break;
	case 3: // RIGHT
		++x;
		if (x > 32)
			x = 1;
		break;
	}
}

bool Point::isSamePoint(const Point p1) {
	return (x == p1.x) && (y == p1.y);
}
