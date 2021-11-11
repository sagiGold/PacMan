#include "Board.h"

void Board::printBoard() {
	for (int i = 0; i < HEIGHT; i++)
		cout << board[i];
}

char Board::getCell(Point p) {
	return board[p.getX()][p.getY()];
}

void Board::editCell(Point p,char ch){
	
}


//******************************************************************************

while (true)
{
	if (key was pressed) {
		changeDir(key);
	}
	if (collision) {
		life--;
		if (life > 0)
			restart();
		else
			gameover();
	}
	move Pacman();
	move ghost 1();
	move ghost 2();

	sleep(200);
}