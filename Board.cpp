#include "Board.h"

void Board::printBoard() {
	for (int i = 0; i < HEIGHT; i++)
		cout << board[i];
}

char Board::getCell(Point p) {
	return board[p.getX()][p.getY()];
}

void Board::editCell(Point p, char ch) {

}
