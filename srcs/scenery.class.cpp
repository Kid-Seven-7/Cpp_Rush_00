#include "./includes/starWars.hpp"

void scenery::ToString(){
	int row, col;
	row = this->GetRow();
	col = this->GetCol();
	start_color();
	init_pair(1, COLOR_RED, COLOR_BLACK);
	attron(COLOR_PAIR(1));
	mvprintw(row, col+1, "*");
	mvprintw(row+1, col, "*");
	mvprintw(row+1, col+1, "*");
	mvprintw(row+1, col+2, "*");
	mvprintw(row+2, col+1, "*");
	attroff(COLOR_PAIR(1));
	move(1, 0);
}

scenery::scenery(){
	this->col = 25;
	this->row = 25;
	this->size = 3;
}

scenery::scenery(int col, int row){
	this->col = col;
	this->row = row;
	this->size = 3;
}

scenery::~scenery(){
	delete this;
}

int scenery::GetCol(){return this->col;}
int scenery::GetRow(){return this->row;}
int scenery::GetSize(){return this->size;}
int scenery::GetSpeed(){return this->size;}

//setters
void scenery::SetCol(int Col){this->col = Col;}
void scenery::SetRow(int Row){this->row = Row;}
void scenery::SetSize(int size){this->size = size;}
void scenery::SetSpeed(){
	int enemySpeed;

	srand(time(0));
	enemySpeed = rand() % 30 + 10;
	this->speed = enemySpeed;
}

// scenery & operator=(scenery const & rhs){
// }
