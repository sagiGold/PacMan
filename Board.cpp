#include "Board.h"

void Board::printBoard() {
	for (int i = 0; i < HEIGHT; i++)
		cout << board[i] << endl;
}

char Board::getCell(Point p) {
	return board[p.getY()][p.getX()];
}

void Board::editCell(Point p, char ch) {
	board[p.getY()][p.getX()] = ch;
}

