#include "Game_Logic.h"

//Game_Logic::Game_Logic() {
//s
//}

void runGame() {
	/*pacman.setPacman();
	ghost1.setGhost(Point(15, 5), Color(RED));
	ghost2.setGhost(Point(15, 5), Color(RED));*/
	char choice = menu();
	switch (choice) {
	case '1':
		run();
		break;
	case '2':
		//runNoColor ?
		break;
	case '9':
		cout << "Good Bye !" << endl;
		exit(0);
		break;
	}
}

void run()
{
	int slowTheGhost = 1;
	Board board;
	Move_Vector dir = STAY;
	Pacman* pacman = new Pacman();
	Ghost* ghost1 = new Ghost(Point(15, 5), Color(RED));
	Ghost* ghost2 = new Ghost(Point(16, 5), Color(MAGENTA));

	board.printBoard();
	pacman->printPacman();
	ghost1->printGhost();
	ghost2->printGhost();

	while (1) {
		pacman->moveVector(dir);
		pacman->movePacman(board);
		if (slowTheGhost % 2 == 0) {
			ghost1->moveGhost(board);
			ghost2->moveGhost(board);
		}
		pacman->isGameOver(ghost1, ghost2, board); // move it to a different class.
		slowTheGhost++;
		pacman->printData();
		Sleep(100);
	}
}

char menu()
{
	printf("\n");
	printf("********************************************\n");
	printf("                                            \n");
	printf("             Welcome To PacMan              \n");
	printf("                                            \n");
	printf("********************************************\n\n");

	printf("Choose option from the following menu: \n");
	printf(" 1.\tStart a new game (with colors) \n");
	printf(" 2.\tStart a new game (without colors) \n");
	printf(" 8.\tInstructions and keys \n");
	printf(" 9.\tExit.\n");

	char choice;
	cin >> choice;
	while (choice != '1' && choice != '2' && choice != '9'){
		system("cls");
		if (choice == '8')
			printInstractions();
		else
			cout << "Invalid choice. Choose a number from [1/2/8/9]:" << endl;
		cin >> choice;
	}
	system("cls");
	return choice;
}

void printInstractions() {
	cout << "Welcome to Pacman !" << endl << "Your goal is to move the pacman on screen and eats the breadcrumbs." << endl
		<< "Each eaten breadcrumb equals a point to be earned." << endl
		<< "Once all breadcrumbs on screen are eaten you win the game :)" << endl << endl
		<< "Keys for the game:" << endl
		<< "LEFT -> a or A" << endl
		<< "RIGHT -> d or D" << endl
		<< "UP -> w or W" << endl
		<< "DOWN -> x or X" << endl
		<< "STAY -> s or S" << endl
		<< "ESC -> Pause" << endl << endl
		<< "Choose a number from [1 / 2 / 9]:" << endl;
}