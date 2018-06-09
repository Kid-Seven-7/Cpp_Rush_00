#include "./includes/ship.class.hpp"

//getters
	std::string Ship::GetGrid(){return (this->grid);}
	std::string Ship::GetName(){return (this->sName);}
	int Ship::GetHitPoints(){return (this->nHitPoint);}
	int Ship::GetEnergyPoints(){return (this->nEnergyPoints);}
	bool Ship::GetEnemyStatus(){return (this->isEnemy);}
	bool Ship::GetLifeStatus(){return (this->isAlive);}

//setters
	void Ship::SetGrid(std::string grid){this->grid = grid;}
	void Ship::SetName(std::string Name){this->sName = Name;}
	void Ship::SetHitPoints(int Hitpoints){this->nHitPoint = Hitpoints;}
	void Ship::SetEnergyPoints(int EnergyPoints){this->nEnergyPoints = EnergyPoints;}
	void Ship::SetEnemyStatus(bool isEnemy){this->isEnemy = isEnemy;}
	void Ship::SetLifeStatus(bool isAlive){this->isAlive = isAlive;}

//constructor(s)
//Default
	Ship::Ship(){
		this->grid = "-- | >-- ";
		this->sName = "ship";
		this->nHitPoint = 100;
		this->nEnergyPoints = 0;
		this->isEnemy = true;
		this->isAlive = true;
		// Ship::NumOfShips++;
	}

//Copy
	Ship::Ship(const Ship &rhs){
		this->sName = rhs.sName;
		// Ship::NumOfShips++;
	}

//simple
	Ship::Ship(std::string sPlayerName, bool bIsEnemy){
		this->grid = "-- | >--";
		this->sName = sPlayerName;
		this->nHitPoint = 100;
		this->nEnergyPoints = 100;
		this->isEnemy = bIsEnemy;
		this->isAlive = true;
		// Ship::NumOfShips++;
	}

//deconstructor
	Ship::~Ship(){
	}

//Member functions
	void Ship::SetAll(std::string grid, std::string sName, bool isEnemy){
		this->grid = grid;
		this->sName = sName;
		this->nHitPoint = 100;
		this->nEnergyPoints = 100;
		this->isEnemy = isEnemy;
		this->isAlive = true;
		// Ship::NumOfShips++;
	}

//Overloads
	//Assign Overload
		// Ship & Ship::operator=(const Ship & rhs){
    //
		// 	return (*rhs);
		// }

	//ToString Overload
		std::string Ship::ToString(){
			return (this->grid);
		}

	//Static functions
		// static int GetNumOfShips(){return (Ship::NumOfShips);}
