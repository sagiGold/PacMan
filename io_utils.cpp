#include "io_utils.h"
#define W (char)178<<
#define O (char)250<<

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

void printNewGame()
{
	/* num of bread crumbs is 170 */  
	cout << W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W endl
		 << W O O O O O O W O O O O O O O O O O O O O O W O O O O O O W endl
		 << W O W W W O O W O O W W W W W W W W W W O O W O O W W W O W endl
		 << W O W O O O O O O O O O O O O O O O O O O O O O O O O W O W endl
		 << W O W O O W W W O O W W "      " << W W O O W W W O O W O W endl
		 << ' ' << O O O O O O O O O W "        " << W O O O O O O O O ' ' << endl
		 << W O W O O W W W O O W W W W W W W W W W O O W W W O O W O W endl
		 << W O W O O O O O O O O O O O O O O O O O O O O O O O O W O W endl
		 << W O W W W O O W O O W W W W W W W W W W O O W O O W W W O W endl
		 << W O O O O O O W O O O O O O O O O O O O O O W O O O O O O W endl
		 << W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W endl;
}


// num of bread crumbs is 170 
//
//<< "▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓" << endl
//<< "▓·······▓············▓·······▓" << endl
//<< "▓·▓▓▓···▓·▓▓▓▓▓▓▓▓▓▓·▓···▓▓▓·▓" << endl
//<< "▓·▓························▓·▓" << endl
//<< "▓·▓··▓▓▓··▓▓      ▓▓··▓▓▓··▓·▓" << endl
//<< " ·········▓········▓········· " << endl
//<< "▓·▓··▓▓▓··▓▓▓▓▓▓▓▓▓▓··▓▓▓··▓·▓" << endl
//<< "▓·▓························▓·▓" << endl
//<< "▓·▓▓▓··▓··▓▓▓▓▓▓▓▓▓▓··▓··▓▓▓·▓" << endl
//<< "▓······▓··············▓······▓" << endl
//<< "▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓" << endl;