#include <iostream>

#include "Pacman.h"
#include "Point.h"
#include "io_utils.h"

using namespace std;

#define S (char)178



int main() {
	Point p(2,5);
	int s;
	Move_Vector dir = STAY;
	Pacman *pacman = new Pacman();
	
	cout << S << endl;

	pacman->printPacman();


	while (1) {
		if (_kbhit()) {
			s = _getch();
			switch (s)
			{
			case 'w':
				dir = UP;
				break;

			case 'a':
				dir = LEFT;
				break;
			case 'd':
				dir = RIGHT;
				break;
			case 's':
				dir = DOWN;
				break;
			case ' ':
				dir = STAY;
				break;

			default:
				dir = STAY;
				break;
			}
			pacman->setVector(dir);
		}
		
		Sleep(100);
		pacman->movePacman();
	}

	return 0;
}