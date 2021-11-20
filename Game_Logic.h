#ifndef GAME_LOGIC_H__
#define GAME_LOGIC_H_

#include "io_utils.h"
#include "Pacman.h"
#include "Point.h"
#include "Color.h"
#include "Board.h"
#include "Ghost.h"

//enum Shape { PACMAN = '@', GHOST = '&', BREAD = 250, WALL = 178 }; // Move to Game_Logic.h

class Game_Logic
{
public:
	//static constexpr char PACMAN = '@';
private:
	Board board;
	Pacman pacman;
	Ghost ghost1, ghost2;
	bool black_and_white;

	public:
		//constructors
		Game_Logic();

		//setters and getters
		void setGameLogic(Point p);

		//methods
		char menu();
		void run();
		void getInput(bool& flag);
		void runGame();
		void printInstractions();
		void isGameOver(bool& flag);
		void winGame();
		void gameOver();
		void resetGame(string s);
		void printExit();
		void printMenu();
		void printGamePause();

private:
		bool collision();
};

#endif