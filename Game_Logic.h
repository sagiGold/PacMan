#ifndef GAME_LOGIC_H__
#define GAME_LOGIC_H_
#include "Point.h"
#include "Color.h"
#include "Board.h"
#include "Pacman.h"
#include "Ghost.h"
#include "io_utils.h"

void runGame();
char menu();
void run();
void printInstractions();
void isGameOver(Pacman* pacman, Ghost* g1, Ghost* g2, Board& board);


//class Game_Logic
//{
//	/*Board board;
//	Pacman pacman;
//	Ghost ghost1, ghost2;*/
//
//	public:
//		//constructors
//		Game_Logic();
//		~Game_Logic();
//
//		//setters and getters
//		void setGameLogic(Point p);
//
//		//methods
//		void menu();
//		void run();
//		//void pause();
//		//void restart();
//	private:
//		/*void initGame();
//		void movePacman();
//		void moveGhost();
//		bool hit();*/
//};

#endif