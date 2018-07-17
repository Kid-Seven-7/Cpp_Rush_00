#include "./includes/starWars.hpp"

void bullets::ToString(){
	int row, col;
	row = this->GetRow();
	col = this->GetCol();
	mvprintw(row, col, "O");
	// mvprintw(row + 2, col, "O");
}

bullets::bullets(int Col, int Row){
	this->col = Col + 4;
	this->row = Row + 1;
}

bullets::bullets(){
	this->col = -2;
	this->row = -2;
}

bullets::~bullets(){
	delete this;
}

int bullets::GetCol(){return this->col;}
int bullets::GetRow(){return this->row;}

//setters
void bullets::SetCol(int Column){this->col = Column;}
void bullets::SetRow(int Row){this->row = Row;}

// bullets & operator=(bullets const & rhs){
// }
