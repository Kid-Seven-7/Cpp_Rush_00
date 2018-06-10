#include "./includes/starWars.hpp"

ussEnterprise *initGame(){
	initscr();
	cbreak();
	noecho();
	nodelay(stdscr, true   );
	raw();
	curs_set(0);
	keypad(stdscr, true);
	ussEnterprise *myShip;
	myShip = new ussEnterprise;
	int maxRow, maxCol;
	getmaxyx(stdscr, maxRow, maxCol);
	myShip->SetRow(maxRow/2);
	myShip->SetCol(5);

	return (myShip);
}
