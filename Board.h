#ifndef BOARD_H_
#define BOARD_H_

#include "Point.h"

#define WIDTH 43 //34
#define HEIGHT 17 //12
#define MAX_SCORE 300 //180


class Board {
	enum board_chars{ wa = 178, br = 250}; // wall & bread
	unsigned char board[HEIGHT][WIDTH] =
	{
		{' '},
		{' ', wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, ' ', ' ', wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa },
		{' ', wa, wa, br, br, br, br, br, br, br, br, wa, wa, br, br, br, br, br, br, wa, wa, ' ', ' ', wa, wa, br, br, br, br, br, br, wa, wa, br, br, br, br, br, br, br, br, wa, wa },
		{' ', wa, wa, br, br, wa, wa, wa, wa, br, br, wa, wa, br, br, wa, wa, br, br, wa, wa, ' ', ' ', wa, wa, br, br, wa, wa, br, br, wa, wa, br, br, wa, wa, wa, wa, br, br, wa, wa },
		{' ', wa, wa, br, br, wa, wa, wa, wa, br, br, wa, wa, br, br, wa, wa, br, br, br, br, br, br, br, br, br, br, wa, wa, br, br, wa, wa, br, br, wa, wa, wa, wa, br, br, wa, wa },
		{' ', wa, wa, br, br, wa, wa, br, br, br, br, wa, wa, br, br, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, br, br, wa, wa, br, br, br, br, wa, wa, br, br, wa, wa },
		{' ', wa, wa, br, br, wa, wa, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, wa, wa, br, br, wa, wa },
		{' ', wa, wa, br, br, wa, wa, br, br, br, br, wa, wa, br, br, br, wa, wa, wa, ' ', ' ', ' ', ' ', ' ', ' ', wa, wa, wa, br, br, br, wa, wa, br, br, br, br, wa, wa, br, br, wa, wa },
		{' ', wa, wa, br, br, br, br, br, br, br, wa, wa, wa, wa, br, br, wa, wa, ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', wa, wa, br, br, wa, wa, wa, wa, br, br, br, br, br, br, br, wa, wa },
		{' ', ' ', ' ', br, br, br, br, br, br, br, br, br, br, br, br, br, wa, wa, ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', wa, wa, br, br, br, br, br, br, br, br, br, br, br, br, br, ' ', ' ' },
		{' ', wa, wa, br, br, wa, wa, br, br, br, wa, wa, wa, wa, br, br, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, br, br, wa, wa, wa, wa, br, br, br, wa, wa, br, br, wa, wa },
		{' ', wa, wa, br, br, wa, wa, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, wa, wa, br, br, wa, wa },
		{' ', wa, wa, br, br, wa, wa, br, br, br, br, wa, wa, br, br, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, br, br, wa, wa, br, br, br, br, wa, wa, br, br, wa, wa },
		{' ', wa, wa, br, br, wa, wa, wa, wa, br, br, wa, wa, br, br, wa, wa,' ', ' ', 'P','a','c','M','a','n',' ', ' ', wa, wa, br, br, wa, wa, br, br, wa, wa, wa, wa, br, br, wa, wa },
		{' ', wa, wa, br, br, wa, wa, wa, wa, br, br, wa, wa, br, br, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, br, br, wa, wa, br, br, wa, wa, wa, wa, br, br, wa, wa },
		{' ', wa, wa, br, br, br, br, br, br, br, br, wa, wa, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, wa, wa, br, br, br, br, br, br, br, br, wa, wa },
		{' ', wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, ' ', ' ', wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa }
	};
	/*unsigned char** board;*/
public:
	void initBoard();
	void printBoard(bool black_and_white);
	char getCell(Point p);
	void editCell(Point p, char ch);
	void printData(int score, int life);
};

#endif



//{
//{' '},
//{' ', wa, wa, wa, wa, wa, 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', ' ', ' ', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa' },
//{' ', 'wa', 'wa', br, br, br, br, br, br, br, br, 'wa', 'wa', br, br, br, br, 'br', 'br', 'wa', 'wa', ' ', ' ', 'wa', 'wa', 'br', 'br', 'br', 'br', 'br', 'br', 'wa', 'wa', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'wa', 'wa' },
//{' ', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'br', 'br', 'wa', 'wa', ' ', ' ', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'wa', 'wa', 'br', 'br', 'wa', 'wa' },
//{' ', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'wa', 'wa', 'br', 'br', 'wa', 'wa' },
//{' ', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'br', 'br', 'br', 'br', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'br', 'br', 'br', 'br', 'wa', 'wa', 'br', 'br', 'wa', 'wa' },
//{' ', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'wa', 'wa', 'br', 'br', 'wa', 'wa' },
//{' ', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'br', 'br', 'br', 'br', 'wa', 'wa', 'br', 'br', 'br', 'wa', 'wa', 'wa', ' ', ' ', ' ', ' ', ' ', ' ', 'wa', 'wa', 'wa', 'br', 'br', 'br', 'wa', 'wa', 'br', 'br', 'br', 'br', 'wa', 'wa', 'br', 'br', 'wa', 'wa' },
//{' ', 'wa', 'wa', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'wa', 'wa', 'wa', 'wa', 'br', 'br', 'wa', 'wa', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'wa', 'wa', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'wa', 'wa' },
//{' ', ' ', ' ', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'wa', 'wa', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'wa', 'wa', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', ' ', ' ' },
//{' ', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'br', 'br', 'br', 'wa', 'wa', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'wa', 'wa', 'br', 'br', 'br', 'wa', 'wa', 'br', 'br', 'wa', 'wa' },
//{' ', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'wa', 'wa', 'br', 'br', 'wa', 'wa' },
//{' ', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'br', 'br', 'br', 'br', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'br', 'br', 'br', 'br', 'wa', 'wa', 'br', 'br', 'wa', 'wa' },
//{' ', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'wa', ' ', PacMan' ', 'wa', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'wa', 'wa', 'br', 'br', 'wa', 'wa' },
//{' ', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'br', 'br', 'wa', 'wa', 'wa', 'wa', 'br', 'br', 'wa', 'wa' },
//{' ', 'wa', 'wa', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'wa', 'wa', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'wa', 'wa', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'br', 'wa', 'wa' },
//{' ', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', ' ', ' ', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa', 'wa' }

//};
// ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓  ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓",
// ▓▓········▓▓··················▓▓········▓▓",
// ▓▓··▓▓▓▓··▓▓··▓▓▓▓▓▓▓▓▓▓▓▓▓▓··▓▓··▓▓▓▓··▓▓",
// ▓▓··▓▓▓▓··▓▓··▓▓▓▓▓▓▓▓▓▓▓▓▓▓··▓▓··▓▓▓▓··▓▓",
// ▓▓··▓▓····▓▓··▓▓▓▓▓▓▓▓▓▓▓▓▓▓··▓▓····▓▓··▓▓",
// ▓▓··▓▓······························▓▓··▓▓
// ▓▓··▓▓····▓▓··················▓▓····▓▓··▓▓
// ▓▓·······▓▓▓▓··▓▓▓      ▓▓▓··▓▓▓▓·······▓▓",
//   ·············▓▓        ▓▓·············  ",
// ▓▓··▓▓···▓▓▓▓··▓▓▓▓▓▓▓▓▓▓▓▓··▓▓▓▓···▓▓··▓▓",
// ▓▓··▓▓······························▓▓··▓▓      
// ▓▓··▓▓····▓▓··▓▓▓▓▓▓▓▓▓▓▓▓▓▓··▓▓····▓▓··▓▓",
// ▓▓··▓▓▓▓··▓▓··▓▓▓ PacMan ▓▓▓··▓▓··▓▓▓▓··▓▓",
// ▓▓··▓▓▓▓··▓▓··▓▓▓▓▓▓▓▓▓▓▓▓▓▓··▓▓··▓▓▓▓··▓▓",
// ▓▓········▓▓··················▓▓········▓▓",
// ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓  ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓"

//{' '},
// 01234567890123456789012345678901234567890123456789 = 42 * 17
//{ ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓  ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓}
//{ ▓▓········▓▓······▓▓  ▓▓······▓▓········▓▓}
//{ ▓▓··▓▓▓▓··▓▓··▓▓··▓▓  ▓▓··▓▓··▓▓··▓▓▓▓··▓▓}
//{ ▓▓··▓▓▓▓··▓▓··▓▓··········▓▓··▓▓··▓▓▓▓··▓▓}
//{ ▓▓··▓▓····▓▓··▓▓▓▓▓▓▓▓▓▓▓▓▓▓··▓▓····▓▓··▓▓}
//{ ▓▓··▓▓······························▓▓··▓▓}
//{ ▓▓··▓▓····▓▓···▓▓▓      ▓▓▓···▓▓····▓▓··▓▓}
//{ ▓▓·······▓▓▓▓··▓▓        ▓▓··▓▓▓▓·······▓▓}
//{   ·············▓▓        ▓▓·············  }10,21,22
//{ ▓▓··▓▓···▓▓▓▓··▓▓▓▓▓▓▓▓▓▓▓▓··▓▓▓▓···▓▓··▓▓}
//{ ▓▓··▓▓······························▓▓··▓▓}
//{ ▓▓··▓▓····▓▓··▓▓▓▓▓▓▓▓▓▓▓▓▓▓··▓▓····▓▓··▓▓}
//{ ▓▓··▓▓▓▓··▓▓··▓▓▓ PacMan ▓▓▓··▓▓··▓▓▓▓··▓▓}
//{ ▓▓··▓▓▓▓··▓▓··▓▓▓▓▓▓▓▓▓▓▓▓▓▓··▓▓··▓▓▓▓··▓▓}
//{ ▓▓········▓▓··················▓▓········▓▓}
//{ ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓  ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓}


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
//{' '},
//{ ' ', wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, ' ', ' ', wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa },
//{ ' ', wa, br, br, br, br, br, br, br, wa, br, br, br, br, br, br, br, br, br, br, br, br, br, br, wa, br, br, br, br, br, br, br, wa },
//{ ' ', wa, br, br, wa, wa, wa, br, br, wa, br, br, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, br, br, wa, br, br, wa, wa, wa, br, br, wa },
//{ ' ', wa, br, br, wa, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, wa, br, br, wa },
//{ ' ', wa, br, br, wa, br, br, wa, wa, wa, br, br, wa, wa, ' ', ' ', ' ', ' ', ' ', ' ',  wa, wa, br, br, wa, wa, wa, br, br, wa, br, br, wa },
//{ ' ', ' ', br, br ,br, br, br, br, br, br, br, br, wa, ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', wa, br, br, br, br, br, br, br, br, br, br,' ',' ' },
//{ ' ', wa, br, br, wa, br, br, wa, wa, wa, br, br, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, br, br, wa, wa, wa, br, br, wa, br, br, wa },
//{ ' ', wa, br, br, wa, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, br, wa, br, br, wa },
//{ ' ', wa, br, br, wa, wa, wa, br, br, wa, br, br, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, br, br, wa, br, br, wa, wa, wa, br, br, wa },
//{ ' ', wa, br, br, br, br, br, br, br, wa, br, br, br, br, br, br, br, br, br, br, br, br, br, br, wa, br, br, br, br, br, br, br, wa },
//{ ' ', wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, ' ', ' ', wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa, wa }
