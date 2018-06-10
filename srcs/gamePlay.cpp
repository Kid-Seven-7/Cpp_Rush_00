#include "./includes/starWars.hpp"

void gameplay(ussEnterprise *myShip, deathStar *enemyShip){
	clear();
	box(stdscr, 0, '-');
	myShip->ToString();
	enemyShip->ToString();
	usleep(50000);
	enemyShip->SetCol(enemyShip->GetCol() - enemyShip->GetSpeed());
	mvprintw(0,0, "L.Skywalker");
	refresh();
}
