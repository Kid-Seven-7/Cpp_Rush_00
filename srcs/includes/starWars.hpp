#ifndef __STARWARS_HPP__
#define __STARWARS_HPP__

#include <cstdlib>
#include <string>
#include <ncurses.h>
#include "ussEnterprise.class.hpp"

//Our functions
	//voids
		void gameplay(ussEnterprise *myShip);
		void gameLogic();
	//ussEnterprise
		ussEnterprise *initGame();
	//
	//

#endif
