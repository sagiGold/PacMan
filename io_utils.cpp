#include "io_utils.h"


void gotoxy(int x, int y)
{
	HANDLE hConsoleOutput;
	COORD dwCursorPosition;
	cout << flush;
	dwCursorPosition.X = x;
	dwCursorPosition.Y = y;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, dwCursorPosition);
}

void setTextColor(Color colorToSet) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (int)colorToSet);
}

void hideCursor()
{
	HANDLE myconsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CURSOR;
	CURSOR.dwSize = 1;
	CURSOR.bVisible = FALSE;
	SetConsoleCursorInfo(myconsole, &CURSOR); //second argument need pointer
}

void clear_screen()
{
	system("cls");
}
//
//void printNewGame()
//{
//	/* num of bread crumbs is 170 */  
//	cout << w w w w w w w w w w w w w w w w w w w w w w w w w w w w w w endl
//		 << w o o o o o o w o o o o o o o o o o o o o o w o o o o o o w endl
//		 << w o w w w o o w o o w w w w w w w w w w o o w o o w w w o w endl
//		 << w o w o o o o o o o o o o o o o o o o o o o o o o o o w o w endl
//		 << w o w o o w w w o o w w "      " << w w o o w w w o o w o w endl
//		 << ' ' << o o o o o o o o o w "        " << w o o o o o o o o ' ' << endl
//		 << w o w o o w w w o o w w w w w w w w w w o o w w w o o w o w endl
//		 << w o w o o o o o o o o o o o o o o o o o o o o o o o o w o w endl
//		 << w o w w w o o w o o w w w w w w w w w w o o w o o w w w o w endl
//		 << w o o o o o o w o o o o o o o o o o o o o o w o o o o o o w endl
//		 << w w w w w w w w w w w w w w w w w w w w w w w w w w w w w w endl;
//}
