#ifndef PACMAN_H_
#define PACMAN_H_
#include "Point.h"
#include "Color.h"
#include "Board.h"
#include "Ghost.h"

class Pacman {
	Point curr_point;
	Color color;
	char shape;
	Move_Vector v;
	int score;
	int life;

	public:
		//constructors
		Pacman();
		Pacman(Point _p);
		//~Pacman();
		
		//setters and getters
		void initPacman(Point _p);
		void setPacman(Point p);
		void setVector(Move_Vector dir);
		void setLife(int _life);
		void setColor(Color c); 

		int getLife();
		Point getPacman(); 
		char getShape(); 
		int getScore();


		//methods
		void movePacman(Board &board);
		void printPacman();
		void printData();
		//void isGameOver(Ghost* g1, Ghost* g2, Board& board);

	private:
		void isEndBoard();
		Point next_point;
		//int collision();
};

#endif 


