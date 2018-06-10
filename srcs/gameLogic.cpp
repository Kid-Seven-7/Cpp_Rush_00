#include "./includes/starWars.hpp"

void gameLogic(){
	ussEnterprise *myShip;
	myShip = initGame();
	int maxRow, maxCol;
	getmaxyx(stdscr, maxRow, maxCol);

	refresh();
	while (true){
		int userInput = getch();
		if (userInput == 27){
			clear();
			exit(0);
		}
		if (userInput == KEY_LEFT)
				myShip->mvLeft();
		if (userInput == KEY_RIGHT)
				myShip->mvRight(maxCol);
		if (userInput == KEY_UP)
				myShip->mvUp();
		if (userInput == KEY_DOWN)
				myShip->mvDown(maxRow);

		gameplay(myShip);
	}
	endwin();
}
