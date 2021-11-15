#ifndef _IO_UTILS_H_
#define _IO_UTILS_H_

#include "Color.h"
#include <iostream>
#include <windows.h>
#include <conio.h>

#define w (char)178<<	//wall
#define o (char)250<<	//bread

using namespace std;

enum Shape {PACMAN = '@',GHOST = '&', BREAD = 250, WALL = 178};


void gotoxy(int x, int y);
void setTextColor(Color);
void hideCursor();
void clear_screen();
void printNewGame();

#endif