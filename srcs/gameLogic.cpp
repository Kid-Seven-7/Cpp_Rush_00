#include "./includes/starWars.hpp"

void collisionDetection(ussEnterprise *myShip, deathStar *enemyShip, scenery *astroid){
	int row = myShip->GetRow();
	int col = myShip->GetCol();

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (((row + i) == enemyShip->GetRow()) && ((col + j) == enemyShip->GetCol())){
				// exit(0);
			}
			if (((row + i) == astroid->GetRow()) && ((col + j) == astroid->GetCol())){
				// exit(0);
			}
		}
	}

	row = enemyShip->GetRow();
	col = enemyShip->GetCol();

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (((row + i) == myShip->GetRow()) && ((col + j) == myShip->GetCol())){
				// exit(0);
			}
			if (((row + i) == astroid->GetRow()) && ((col + j) == astroid->GetCol())){
				// exit(0);
			}
		}
	}

	row = astroid->GetRow();
	col = astroid->GetCol();

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (((row + i) == myShip->GetRow()) && ((col + j) == myShip->GetCol())){
				// exit(0);
			}
			if (((row + i) == enemyShip->GetRow()) && ((col + j) == enemyShip->GetCol())){
				// exit(0);
			}
		}
	}
}

void bulletCollisionDetection(ussEnterprise *myShip, deathStar *enemyShip, scenery *astroid, bullets *bullet){
	int row = bullet->GetRow();
	int col = bullet->GetCol();

	if (((col == enemyShip->GetCol()) || (col  == (enemyShip->GetCol() + 1)) || (col == (enemyShip->GetCol() + 2))) &&
	 ((row == enemyShip->GetRow()) || (row  == (enemyShip->GetRow() + 1)) || (row == (enemyShip->GetRow() + 2)))){
		 myShip->SetScore(myShip->GetScore() + 20);
		 enemyShip->SetCol(-20);
	 }

	if (((col == astroid->GetCol()) || (col  == (astroid->GetCol() + 1)) || (col == (astroid->GetCol() + 2))) &&
	 ((row == astroid->GetRow()) || (row  == (astroid->GetRow() + 1)) || (row == (astroid->GetRow() + 2))))
		myShip->SetScore(myShip->GetScore() + 10);
		astroid->SetCol(-20);
}

void gameLogic(){
	ussEnterprise *myShip;
	myShip = initGame();
	deathStar *enemyShip;
	enemyShip = createEnemy();
	scenery *astroid;
	astroid = createAstroid();
	bullets *bullet;
	bullet = new bullets();
	stars **background = new stars *[25];
	int maxRow, maxCol;
	getmaxyx(stdscr, maxRow, maxCol);
	for (int i = 0; i < 50; ++i)
		background[i] = new stars(maxCol, maxRow);

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
		if (userInput == 32)
			bullet = new bullets(myShip->GetCol(), myShip->GetRow());
		if ((enemyShip->GetCol()) < 0){
			enemyShip = createEnemy();
			enemyShip->SetSpeed();
		}
		if ((astroid->GetCol()) < -30){
			astroid = createAstroid();
			astroid->SetSpeed();
		}
		for (int i = 0; i < 50; ++i){
			if ((background[i]->GetCol()) < 0){
				background[i] = new stars(maxCol, maxRow);
			}
		}
		collisionDetection(myShip, enemyShip, astroid);
		bulletCollisionDetection(myShip, enemyShip, astroid, bullet);
		gameplay(myShip, enemyShip, astroid, background, bullet);
	}
	endwin();
}
