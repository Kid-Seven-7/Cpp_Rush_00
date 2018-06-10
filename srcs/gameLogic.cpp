#include "./includes/starWars.hpp"

void gameLogic(){
	ussEnterprise *myShip;
	myShip = initGame();
	deathStar *enemyShip;
	enemyShip = createEnemy();
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
		if ((enemyShip->GetCol()) < 0){
			enemyShip = createEnemy();
			enemyShip->SetSpeed();
		}
		gameplay(myShip, enemyShip);
	}
	endwin();
}
