#include "./includes/starWars.hpp"

scenery *createAstroid(){

	int maxRow, maxCol;
	getmaxyx(stdscr, maxRow, maxCol);
	int rowPos;
	srand(time(0));
	rowPos = rand() % (maxRow - 10) + 5;
	scenery *astroid;
	astroid = new scenery(maxCol, rowPos);
	astroid->SetRow(rowPos);
	astroid->ToString();

	return (astroid);
}

deathStar *createEnemy(){

	int maxRow, maxCol;
	getmaxyx(stdscr, maxRow, maxCol);
	int rowPos;
	srand(time(0));
	rowPos = rand() % maxRow + 5;
	deathStar *myShip;
	myShip = new deathStar(maxCol, rowPos);
	myShip->SetRow(rowPos);
	myShip->ToString();

	return (myShip);
}
