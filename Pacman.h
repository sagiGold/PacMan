#ifndef PACMAN_H_
#define PACMAN_H_
#include "Point.h"
#include "Color.h"


class Pacman{
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
		Point getPacman();
		char getShape();
		Color getColor();

		//methods
		void movePacman();
		void printPacman();
		
	private:
		Point next_point;
		int collision();

};

#endif 


