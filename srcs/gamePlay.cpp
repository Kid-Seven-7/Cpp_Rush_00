#include "./includes/starWars.hpp"

void gameplay(ussEnterprise *myShip, deathStar *enemyShip){
	clear();
	box(stdscr, 0, '-');
	myShip->ToString();
	enemyShip->ToString();
	usleep(10000);
	enemyShip->SetCol(enemyShip->GetCol() - 2);
	mvprintw(0,0, "L.Skywalker");
	refresh();
}
