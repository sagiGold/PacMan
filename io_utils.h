﻿#ifndef _IO_UTILS_H_
#define _IO_UTILS_H_

#include "Color.h"
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <ctime>


using std::cout;
using std::cin; 
using std::endl;
using std::flush;
using std::string;

enum Shape {PACMAN = '@',GHOST = '&', BREAD = 250, WALL = 178}; // Move to Game_Logic.h

void gotoxy(int x, int y);
void setTextColor(Color);
void hideCursor();
void clear_screen();
void printNewGame();
void ShowConsoleCursor(bool showFlag);

#endif