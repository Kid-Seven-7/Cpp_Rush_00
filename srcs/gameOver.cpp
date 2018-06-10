#include "./includes/starWars.hpp"

void    gameOver() {
	refresh();
	clear();
	mvprintw(34, 120, "_GAME OVER_");
	refresh();
	usleep(2500000);
}
