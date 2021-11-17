#ifndef BOARD_H_
#define BOARD_H_

#include "Point.h"

#define WIDTH 34
#define HEIGHT 12
#define MAX_SCORE 180

enum board_chars{ wa = 178, br = 250}; // wall & bread

class Board {
	unsigned char board[HEIGHT][WIDTH] =
	{
		{' '},
		{ ' ', wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, ' ', ' ', wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa},
		{ ' ', wa, br, br, br, br, br, br, br, wa, br, br, br, br, br, br, br, br, br, br, br, br, br, br, wa, br, br, br, br, br, br, br, wa },
		{ ' ', wa, br, br, wa, wa, wa, br, br, wa, br, br, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, br, br, wa, br, br, wa, wa, wa, br, br, wa },
		{ ' ', wa, br, br, wa, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, wa, br, br, wa },
		{ ' ', wa, br, br, wa, br, br, wa, wa, wa, br, br, wa, wa, ' ', ' ', ' ', ' ', ' ', ' ',  wa, wa, br, br, wa, wa, wa, br, br, wa, br, br, wa },
		{ ' ', ' ', br, br ,br, br, br, br, br, br, br, br, wa, ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', wa, br, br, br, br, br, br, br, br, br, br,' ',' '},
		{ ' ', wa, br, br, wa, br, br, wa, wa, wa, br, br, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, br, br, wa, wa, wa, br, br, wa, br, br, wa},
		{ ' ', wa, br, br, wa, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, wa, br, br, wa },
		{ ' ', wa, br, br, wa, wa, wa, br, br, wa, br, br, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, br, br, wa, br, br, wa, wa, wa, br, br, wa },
		{ ' ', wa, br, br, br, br, br, br, br, wa, br, br, br, br, br, br, br, br, br, br, br, br, br, br, wa, br, br, br, br, br, br, br, wa },
		{ ' ', wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, ' ', ' ', wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa }

	};

public:
	void printBoard(bool black_and_white);
	char getCell(Point p);
	void editCell(Point p, char ch);
	void printData(int score, int life);
};

#endif

// 01234567890123456789012345678901
//{
//"▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓",
//"▓·······▓··············▓·······▓",
//"▓··▓▓▓··▓··▓▓▓▓▓▓▓▓▓▓··▓··▓▓▓··▓",
//"▓··▓························▓··▓",
//"▓··▓··▓▓▓··▓▓      ▓▓··▓▓▓··▓··▓",
//" ··········▓········▓·········· ",
//"▓··▓··▓▓▓··▓▓▓▓▓▓▓▓▓▓··▓▓▓··▓··▓",
//"▓··▓························▓··▓",
//"▓··▓▓▓··▓··▓▓▓▓▓▓▓▓▓▓··▓··▓▓▓··▓",
//"▓·······▓··············▓·······▓",
//"▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓"
//};

