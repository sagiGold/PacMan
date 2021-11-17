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
		
		//setters and getters
		void initPacman(Point _p);
		void setPacman(Point p);
		void setVector(Move_Vector dir) { v = dir; }
		void setLife(int _life) { life = _life; }
		void setColor(Color c) { color = c; }

		int getLife() { return life; }
		int getScore() { return score; }
		char getShape() { return shape; }
		Point getPacman() { return curr_point; }

		//methods
		void movePacman(Board &board);
		void printPacman();

	private:
		void isEndBoard();
		Point next_point;
};

#endif 


