#include "./includes/starWars.hpp"

void gameplay(ussEnterprise *myShip, deathStar *enemyShip, scenery *astroid, stars **background, bullets *bullet){
	clear();
	box(stdscr, 0, '-');
	for (int i = 0; i < 50; ++i)
	background[i]->ToString();
	astroid->ToString();
	enemyShip->ToString();
	myShip->ToString();
	bullet->ToString();
	usleep(50000);
	enemyShip->SetCol(enemyShip->GetCol() - enemyShip->GetSpeed());
	astroid->SetCol(astroid->GetCol() - astroid->GetSpeed());
	move(10, 2);
	bullet->SetCol(bullet->GetCol() + 5);
	for (int i = 0; i < 50; ++i)
		background[i]->SetCol(background[i]->GetCol() - 1);
	mvprintw(0,1, "L.Skywalker");
	move(1,1);
	printw("Score : %i", myShip->GetScore());
	refresh();
}
