﻿#ifndef BOARD_H_
#define BOARD_H_

#include "Point.h"
#define NUM_OF_BARRIES 50

#define WIDTH 31
#define HEIGHT 11

class Board {
	char board[HEIGHT][WIDTH] =
		//0123456789012345678901234567890
	{
	"▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓",
	"▓·······▓············▓·······▓",
	"▓·▓▓▓···▓·▓▓▓▓▓▓▓▓▓▓·▓···▓▓▓·▓",
	"▓·▓························▓·▓",
	"▓·▓··▓▓▓··▓▓      ▓▓··▓▓▓··▓·▓",
	" ·········▓········▓········· ",
	"▓·▓··▓▓▓··▓▓▓▓▓▓▓▓▓▓··▓▓▓··▓·▓",
	"▓·▓························▓·▓",
	"▓·▓▓▓··▓··▓▓▓▓▓▓▓▓▓▓··▓··▓▓▓·▓",
	"▓······▓··············▓······▓",
	"▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓"
	};

public:

	void printBoard();
	char getCell(Point p);
	void editCell(Point p, char ch);
};

#endif