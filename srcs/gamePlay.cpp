#include "./includes/starWars.hpp"

void gameplay(ussEnterprise *myShip, deathStar *enemyShip, scenery *astroid, stars **background){
	clear();
	box(stdscr, 0, '-');
	for (int i = 0; i < 50; ++i)
	background[i]->ToString();
	astroid->ToString();
	enemyShip->ToString();
	myShip->ToString();
	usleep(50000);
	enemyShip->SetCol(enemyShip->GetCol() - enemyShip->GetSpeed());
	astroid->SetCol(astroid->GetCol() - astroid->GetSpeed());
	for (int i = 0; i < 50; ++i)
		background[i]->SetCol(background[i]->GetCol() - 1);
	mvprintw(0,0, "L.Skywalker");
	refresh();
}
