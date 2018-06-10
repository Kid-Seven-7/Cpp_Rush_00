#include "./includes/starWars.hpp"

deathStar *createEnemy(){

	deathStar *myShip;
	myShip = new deathStar;
	int maxRow, maxCol;
	getmaxyx(stdscr, maxRow, maxCol);
	myShip->SetRow(maxRow/2);
	myShip->SetCol(maxCol);

	myShip->ToString();

	return (myShip);
}
