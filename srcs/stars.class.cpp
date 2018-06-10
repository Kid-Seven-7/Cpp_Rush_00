#include "./includes/starWars.hpp"

void stars::ToString(){
	int row, col;
	row = this->GetRow();
	col = this->GetCol();
	mvprintw(row, col, ".");
}

stars::stars(int maxCol, int maxRow){
	int row, col;

	// srand(time(0));
	for (int rnd = 0; rnd < maxRow; ++rnd)
		row = rand() % maxRow + 1;
	// srand(time(0));
	for (int rnd = 0; rnd < maxCol; ++rnd)
		col = rand() % maxCol + 1;
	if ((row % 2) == 0)
		this->row = row * 2;
	else if ((row % 7) == 0)
		this->row = row * 4;
	else
	this->row = row;
	this->col = maxCol - (row * 10);
}

stars::stars(){
	this->col = 0;
	this->row = 0;
}

stars::~stars(){
	delete this;
}

int stars::GetCol(){return this->col;}
int stars::GetRow(){return this->row;}

//setters
void stars::SetCol(int Col){this->col = Col;}
void stars::SetRow(int Row){this->row = Row;}

// stars & operator=(stars const & rhs){
// }
