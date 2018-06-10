#include "./includes/starWars.hpp"

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
