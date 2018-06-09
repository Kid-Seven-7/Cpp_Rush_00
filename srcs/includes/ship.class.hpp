#ifndef __SHIP_CLASS_HPP__
#define __SHIP_CLASS_HPP__

#include <iostream>
#include <string>
#include <ncurses.h>

class Ship {
	private:
		/* Variable types
			std::string;
			int;
			double;
			float;
			bool;
			char;
		*/

		std::string grid;
		std::string sName;
		int nHitPoint;
		int nEnergyPoints;
		bool isEnemy;
		bool isAlive;

	protected:

	public:
		//static variables
			// static int NumOfShips;

		/* Return types
			std::string;
			int;
			double;
			float;
			bool;
		*/

		//getters
			std::string GetGrid();
			std::string GetName();
			int GetHitPoints();
			int GetEnergyPoints();
			bool GetEnemyStatus();
			bool GetLifeStatus();

		//setters
			void SetGrid(std::string grid);
			void SetName(std::string sName);
			void SetHitPoints(int nHitpoints);
			void SetEnergyPoints(int nEnergyPoints);
			void SetEnemyStatus(bool isEnemy);
			void SetLifeStatus(bool isAlive);

		//constructor(s)
			//default
			Ship();

			//copy
			Ship(const Ship &ogShip);

			//simple
			Ship(std::string sName, bool isEnemy);

		//destructor
			~Ship();

		//Member functions
			void SetAll(std::string grid,
				std::string sName,
				bool isEnemy);

		//Overloads
			//Assign Overload
			Ship & operator=(Ship const & rhs);

			//ToString Overload
			std::string ToString(); //Handy override for displaying info

		//Static functions
			// static int GetNumOfShips();

};

char *str(std::string);

#endif
