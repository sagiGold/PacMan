#ifndef _IO_UTILS_H_
#define _IO_UTILS_H_

#include "Color.h"
#include <iostream>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y);
void setTextColor(Color);
void hideCursor();
void clear_screen();

#endif