#ifndef __STARWARS_HPP__
#define __STARWARS_HPP__

#include <cstdlib>
#include <string>
#include <ncurses.h>
#include <unistd.h>
#include "ussEnterprise.class.hpp"
#include "deathStar.class.hpp"

//Our functions
	//voids
		void gameplay(ussEnterprise *myShip, deathStar *enemyShip);
		void gameLogic();
	//ussEnterprise
		ussEnterprise *initGame();
	//deathStar
		deathStar *createEnemy();
	//

#endif
