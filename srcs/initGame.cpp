#include "./includes/starWars.hpp"

ussEnterprise *initGame(){
	initscr();
	cbreak();
	noecho();
	nodelay(stdscr, true   );
	raw();
	curs_set(0);
	refresh();
	for (int i = 0; i < 16; i++) {
		clear();
		mvprintw( 30, 120, "   _WE THINK WAR_");
		mvprintw( 31, 120, "    Produced By  ");
		mvprintw( 32, 120, "    Joseph Ngoma  ");
		mvprintw( 33, 120, "        And");
		mvprintw( 34, 120, "   Tshepang Ntoampe");
		refresh();
		usleep(15625 * 8);
	}
	keypad(stdscr, true);
	ussEnterprise *myShip;
	myShip = new ussEnterprise;
	int maxRow, maxCol;
	getmaxyx(stdscr, maxRow, maxCol);
	myShip->SetRow(maxRow/2);
	myShip->SetCol(5);
	return (myShip);
}
