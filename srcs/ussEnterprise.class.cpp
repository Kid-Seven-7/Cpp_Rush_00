#include "./includes/starWars.hpp"

void ussEnterprise::ToString(){
	int row, col;
	row = this->GetRow();
	col = this->GetCol();
	mvprintw(row, col, "=");
	mvprintw(row, col+1, ">");
	mvprintw(row+1, col, "=");
	mvprintw(row+1, col+1, "=");
	mvprintw(row+1, col+2, "=");
	mvprintw(row+1, col+3, ">");
	mvprintw(row+2, col, "=");
	mvprintw(row+2, col+1, ">");
}

ussEnterprise::ussEnterprise(){
	this->col=0;
	this->row=0;
}

int ussEnterprise::GetCol(){return this->col;}
int ussEnterprise::GetRow(){return this->row;}
int ussEnterprise::GetScore(){return this->score;}
bool ussEnterprise::GetCollision(){return this->collision;}

//setters
void ussEnterprise::SetCol(int Col){this->col =Col;}
void ussEnterprise::SetRow(int Row){this->row =Row;}
void ussEnterprise::SetScore(int score){this->score =score;}
void ussEnterprise::SetCollision(bool collision){this->collision = collision;}

void ussEnterprise::mvUp(){
	if (this->row > 2)
		this->SetRow(this->row - 2);
}
void ussEnterprise::mvDown(int maxRow){
	if (this->row < maxRow)
		this->SetRow(this->row + 2);
}
void ussEnterprise::mvLeft(){
	if (this->col > 2)
		this->SetCol(this->col - 2);
}
void ussEnterprise::mvRight(int maxCol){
	if (this->col < maxCol)
		this->SetCol(this->col + 2);
}

// ussEnterprise & operator=(ussEnterprise const & rhs){
// }
