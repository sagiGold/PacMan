#ifndef GAME_LOGIC_H__
#define GAME_LOGIC_H_
#include "Point.h"
#include "Color.h"
#include "Board.h"
#include "Pacman.h"
#include "Ghost.h"
#include "io_utils.h"


class Game_Logic
{
private:
	Board board;
	Pacman pacman;
	Ghost ghost1, ghost2;

	public:
		//constructors
		Game_Logic();

		//setters and getters
		void setGameLogic(Point p);

		//methods
		char menu();
		void run();
		void getInput(bool& flag);
		//void restart();


		void runGame();
		void printInstractions();
		void isGameOver(bool& flag);
		void winGame();
		void resetGame(string s);
	
};

#endif