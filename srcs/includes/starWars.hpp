#ifndef __STARWARS_HPP__
#define __STARWARS_HPP__

#include <cstdlib>
#include <ctime>
#include <string>
#include <ncurses.h>
#include <unistd.h>
#include "ussEnterprise.class.hpp"
#include "deathStar.class.hpp"
#include "scenery.class.hpp"
#include "stars.class.hpp"

//Our functions
	//voids
		void gameplay(ussEnterprise *myShip,
			deathStar *enemyShip,
			scenery *astroid,
			stars **background);
		void gameLogic();
	//ussEnterprise
		ussEnterprise *initGame();
	//deathStar
		deathStar *createEnemy();
		scenery *createAstroid();
	//

#endif
