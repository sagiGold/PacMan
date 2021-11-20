#ifndef _IO_UTILS_H_
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

void gotoxy(int x, int y);
void setTextColor(Color);
void hideCursor();
void clear_screen();
void printNewGame();
void ShowConsoleCursor(bool showFlag);

#endif