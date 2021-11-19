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
	//enum Shape { PACMAN = '@', GHOST = '&', BREAD = 250, WALL = 178 };
public:
	static constexpr char PACMAN = '@';
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
		void resetGame(string s);
		void printExit();
		void printMenu();
private:
		bool collion();
};

#endif