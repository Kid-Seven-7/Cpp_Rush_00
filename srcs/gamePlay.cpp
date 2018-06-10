#include "./includes/starWars.hpp"

void gameplay(ussEnterprise *myShip, deathStar *enemyShip, scenery *astroid){
	clear();
	box(stdscr, 0, '-');
	myShip->ToString();
	enemyShip->ToString();
	astroid->ToString();
	usleep(50000);
	enemyShip->SetCol(enemyShip->GetCol() - enemyShip->GetSpeed());
	astroid->SetCol(astroid->GetCol() - astroid->GetSpeed());
	mvprintw(0,0, "L.Skywalker");
	refresh();
}
