//#include <iostream>
//#include "Pacman.h"
//#include "Point.h"
//#include "io_utils.h"
//#include "Board.h"
//#include "Ghost.h"
//
//using namespace std;
//#define S (char)178
//
//void test1() {
//
//	int slowTheGhost = 1;
//	Board board;
//	Move_Vector dir = STAY;
//	Pacman* pacman = new Pacman();
//	Ghost* ghost1 = new Ghost(Point(15, 5), Color(RED));
//	Ghost* ghost2 = new Ghost(Point(16, 5), Color(MAGENTA));
//	
//	board.printBoard();
//	pacman->printPacman();
//	ghost1->printGhost();
//	ghost2->printGhost();
//
//	/*TO DO:
//	* Add vertical tunnel
//	* Change Keys b4 serving project !!
//	* Add non-color option in menu,  indicate in readme.txt file all bonus additions
//	* Pause by pressing ESC
//	*/
//
//	while (1) {
//		pacman->moveVector(dir);
//		pacman->movePacman(board);
//		if (slowTheGhost % 2 == 0) {
//			ghost1->moveGhost(board);
//			ghost2->moveGhost(board);
//		}
//		pacman->isGameOver(ghost1, ghost2, board); // move it to a different class.
//		slowTheGhost++;
//		pacman->printData();
//		Sleep(100);
//	}
//}
//
///*switch (s)
//{
//case 'w':
//	dir = UP;
//	break;
//case 'a':
//	dir = LEFT;
//	break;
//case 'd':
//	dir = RIGHT;
//	break;
//case 's':
//	dir = DOWN;
//	break;
//case ' ':
//	dir = STAY;
//	break;
//default:
//	break;
//}*/
//
//void testBoard() {
//	Point p = { 5,5 };
//	Board b;
//	b.printBoard();
//	cout << b.getCell(p) << endl;
//
//	b.editCell(p, 'K');
//	b.printBoard();
//
//}
//
//
//int main() {
//	test1();
//	return 0;
//}