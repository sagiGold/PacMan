#ifndef PACMAN_H_
#define PACMAN_H_
#include "Point.h"
#include "Color.h"
#include "Board.h"

class Pacman {
	Point curr_point;
	Color color;
	char shape;
	Move_Vector v;
	int score;

	public:
		//constructors
		Pacman();
		Pacman(Point _p);
		~Pacman();
		
		//setters and getters
		void setPacman(Point p);
		void setVector(Move_Vector dir);
		Point getPacman(); // no need
		char getShape(); 
		Color getColor(); // no need

		//methods
		void movePacman(Board &board);
		void printPacman();
		void moveVector(Pacman &pacman, Move_Vector& dir);
		void printScore();

	private:
		Point next_point;
		//int collision();
};

#endif 


