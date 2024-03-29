#include "./includes/starWars.hpp"

void deathStar::ToString(){
	int row, col;
	row = this->GetRow();
	col = this->GetCol();
	start_color();
	init_pair(1, COLOR_RED, COLOR_BLACK);
	attron(COLOR_PAIR(1));
	mvprintw(row, col, "");
	mvprintw(row, col+1, "<");
	mvprintw(row, col+2, "=");
	mvprintw(row+1, col, "<");
	mvprintw(row+1, col+1, "=");
	mvprintw(row+1, col+2, "=");
	mvprintw(row+2, col, "");
	mvprintw(row+2, col+1, "<");
	mvprintw(row+2, col+2, "=");
	attroff(COLOR_PAIR(1));
}

deathStar::deathStar(){
	this->col = 25;
	this->row = 25;
	this->size = 3;
	this->shape = "== ===== ";
}

deathStar::deathStar(int col, int row){
	this->col = col;
	this->row = row;
	this->size = 3;
	this->shape = "== ===== ";
}

deathStar::~deathStar(){
	delete this;
}

int deathStar::GetCol(){return this->col;}
int deathStar::GetRow(){return this->row;}
int deathStar::GetSize(){return this->size;}
int deathStar::GetSpeed(){return this->size;}
std::string deathStar::GetShape(){return this->shape;}

//setters
void deathStar::SetCol(int Col){this->col = Col;}
void deathStar::SetRow(int Row){this->row = Row;}
void deathStar::SetSize(int size){this->size = size;}
void deathStar::SetSpeed(){
	int enemySpeed;

	srand(time(0));
	enemySpeed = rand() % 20 + 1;
	this->speed = enemySpeed;
}
void deathStar::SetShape(std::string shape){this->shape =shape;}

void deathStar::mvUp(){
	if (this->row > 2)
		this->SetRow(this->row - 2);
}
void deathStar::mvDown(int maxRow){
	if (this->row < maxRow)
		this->SetRow(this->row + 2);
}
void deathStar::mvLeft(){
	if (this->col > 2)
		this->SetCol(this->col - 2);
	if (this->col < 20)
		this->~deathStar();
}
void deathStar::mvRight(int maxCol){
	if (this->col < maxCol)
		this->SetCol(this->col + 2);
}

// deathStar & operator=(deathStar const & rhs){
// }
