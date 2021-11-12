#include "Board.h"

void Board::printBoard() {
	for (int i = 0; i < HEIGHT; i++) {
		for (int j = 0; j < WIDTH; j++) {
			if (board[i][j] == (unsigned char)178) {
				setTextColor(Color::LIGHTCYAN);
				cout << board[i][j];
			}
			else if (board[i][j] == (unsigned char)250) {
				setTextColor(Color::LIGHTGREY);
				cout << board[i][j];
			}
			else {
				setTextColor(Color::WHITE);
				cout << board[i][j];
			}
		}
		cout << endl;
	}
	setTextColor(Color::WHITE);
}
//void Board::printBoard() {
//	for (int i = 0; i < HEIGHT; i++)
//		cout << board[i] << endl;
//}

char Board::getCell(Point p) {
	return board[p.getY()][p.getX()];
}

void Board::editCell(Point p, char ch) {
	board[p.getY()][p.getX()] = ch;
}

