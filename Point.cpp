#include "Point.h"

void Point::draw(char ch) {
	gotoxy(x, y);
	cout << ch << endl;
}

void Point::move() {
	int dir = rand() % 4;
	move(dir);
}

void Point::move(int dir) { // Board size is 24*79 in this case
	switch (dir) {
	case 0: // UP
		--y;
		if (y < 1) {
			y = 24;
		}
		break;
	case 1: // DOWN
		++y;
		if (y > 24) {
			y = 1;
		}
		break;
	case 2: // LEFT
		--x;
		if (x < 1) {
			x = 79;
		}
		break;
	case 3: // RIGHT
		++x;
		if (x > 79) {
			x = 1;
		}
		break;
	}
}