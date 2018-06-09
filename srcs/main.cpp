#include "./includes/ship.class.hpp"

char *str(std::string strOrigin){
	return (strdup(strOrigin.c_str()));
}

int main(){
	int keyPress = 0;
	int col = 0;
	int row = 20;
	initscr();
	getmaxyx(stdscr)
	keypad(stdscr, true);
	noecho();
	nodelay(stdscr, true);
	curs_set(0);
	do{
		clear();
		if (keyPress == KEY_UP){
			col+=2;
		}
		if (keyPress == KEY_DOWN){
			col-=2;
		}
		if (keyPress == KEY_LEFT){
			row-=2;
		}
		if (keyPress == KEY_RIGHT){
			row+=2;
		}
		move(col, row);
		printw("my_ship");
		refresh();
	}while (keyPress != 27);
	endwin();
}
