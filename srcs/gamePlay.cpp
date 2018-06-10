#include "./includes/starWars.hpp"

void gameplay(ussEnterprise *myShip){
	clear();
	box(stdscr, 0, '-');
	myShip->ToString();
	mvprintw(0,0, "L.Skywalker");
	refresh();
}
