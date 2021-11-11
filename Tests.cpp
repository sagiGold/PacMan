#include <iostream>

#include "Pacman.h"
#include "Point.h"
#include "io_utils.h"
#include "Board.h"

using namespace std;

#define S (char)178

void test1() {

	Point p(2,5);
	int s;
	Board board;
	Move_Vector dir = STAY;
	Pacman *pacman = new Pacman();
	
	board.printBoard();
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
		pacman->movePacman(board);
	}
}

void testBoard() {
	Point p = { 5,5 };
	Board b;
	b.printBoard();
	cout << b.getCell(p) << endl;

	b.editCell(p, 'K');
	b.printBoard();

}


int main() {
	test1();
	return 0;
}