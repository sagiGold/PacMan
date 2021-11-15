#include "Game_Logic.h"


/*TODO:
	* Add non-color option in menu,  indicate in readme.txt file all bonus additions
	* Change Keys b4 serving project (W,A,D,X,S)
*/

Game_Logic::Game_Logic() {
	ghost1.setGhost(Point(16, 5), board);
	ghost2.setGhost(Point(15, 5), board);

	ghost2.setColor(MAGENTA);

}

void Game_Logic::runGame() {
	/* to do
	pacman.setPacman();
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

void Game_Logic::run()
{
	int slowTheGhost = 1;
	Board board;
	Move_Vector dir = STAY;


	bool flag = true;
	bool didILose = false;
	board.printBoard();
	pacman.printPacman();
	ghost1.printGhost();
	ghost2.printGhost();

	while (pacman.getScore() < MAX_SCORE) {
		getInput(flag);
		if (flag) {
			pacman.movePacman(board);
			if (slowTheGhost % 2 == 0) {
				ghost1.moveGhost(board);
				ghost2.moveGhost(board);
			}
		}
		
		isGameOver(didILose); 
		slowTheGhost++;
		pacman.printData();
		Sleep(100);
	}
	if(!didILose)
		winGame();
	didILose = false;
}

void Game_Logic::isGameOver(bool& flag) {
	if (pacman.getPacman().isSamePoint(ghost1.getGhost()) || pacman.getPacman().isSamePoint(ghost2.getGhost())) {
		pacman.setLife(pacman.getLife()-1);
		if (pacman.getLife() == 0) {
			resetGame("You lose\nPress any key to continue\n");
			flag = !flag;
		}
		else {
			pacman.setPacman(Point(1, 6));
			ghost1.setGhost(Point(16, 6), board);
			ghost2.setGhost(Point(15, 6), board);
		}
	}
}

void Game_Logic::winGame(){
	/*prints:
		__     ______  _    _  __          _______ _   _
		\ \   / / __ \| |  | | \ \        / /_   _| \ | |
		 \ \_/ / |  | | |  | |  \ \  /\  / /  | | |  \| |
		  \   /| |  | | |  | |   \ \/  \/ /   | | | . ` |
		   | | | |__| | |__| |    \  /\  /   _| |_| |\  |
		   |_|  \____/ \____/      \/  \/   |_____|_| \_|*/
	string s = "__     ______  _    _  __          _______ _   _\n \\ \\   / / __ \\| |  | | \\ \\        / /_   _| \\ | |\n  \\ \\_/ / |  | | |  | |  \\ \\  /\\  / /  | | |  \\| |\n   \\   /| |  | | |  | |   \\ \\/  \\/ /   | | | . ` |\n    | | | |__| | |__| |    \\  /\\  /   _| |_| |\\  |\n    |_|  \\____/ \\____/      \\/  \\/   |_____|_| \\_|\n\npress Enter to continue";

	resetGame(s);

	//resetGame("YOU WIN!!!!\n\n\n\npress any key to continue");
}


void Game_Logic::resetGame(string s){
	char ch;
	clear_screen();
	gotoxy(0, 0);
	setTextColor(Color(WHITE));
	cout << s;

	cin>>ch;
	system("cls");

	pacman.initPacman(Point(1, 6));
	ghost1.setGhost(Point(16, 6), board);
	ghost2.setGhost(Point(15, 6), board);
	runGame();
}


void Game_Logic::getInput(bool& flag) {
	int s;
	Move_Vector dir = STAY;
	if (_kbhit()) {
		s = _getch();
		if (s == 27) {
			flag = !flag;
		}
		if (s == 'w' || s == 'W')
			dir = UP;
		if (s == 'a' || s == 'A')
			dir = LEFT;
		if (s == 'd' || s == 'D')
			dir = RIGHT;
		if (s == 's' || s == 'S')
			dir = DOWN;
		if (s == ' ')
			dir = STAY;
		pacman.setVector(dir);
	}
}



char Game_Logic::menu()
{
	gotoxy(0, 0);

	cout <<""<<endl
		<< "********************************************" << endl
		<< "    _____           __  __			      " << endl
		<< "   |  __ \\	   |  \\/  |		      " << endl
		<< "   | |__) |_ _  ___| \\  / | __ _ _ __      " << endl
		<< "   | ___ / _` |/ __| |\\/| |/ _` | '_ \\    " << endl
		<< "   | |  | (_| | (__| |  | | (_| | | | |     " << endl
		<< "   |_|   \\__,_|\\___|_|  |_|\\__,_|_| |_|   " << endl
		<< "                                            " << endl
		<< "********************************************" << endl
		<< "Choose option from the following menu: " << endl
		<< " 1.\tStart a new game (with colors) " << endl
		<< " 2.\tStart a new game (without colors) " << endl
		<< " 8.\tInstructions and keys " << endl
		<< " 9.\tExit." << endl;

	char choice;
	//cin >> choice;
	choice = _getch();
	while (choice != '1' && choice != '2' && choice != '9'){
		system("cls");
		if (choice == '8')
			printInstractions();
		else
			cout << "Invalid choice. Choose a number from [1/2/8/9]:" << endl;
		//cin >> choice;
		choice = _getch();

	}
	system("cls");
	return choice;
}

void Game_Logic::printInstractions() {
	cout << "Welcome to Pacman !" << endl << "Your goal is to move the pacman on the screen and eat the breadcrumbs." << endl
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