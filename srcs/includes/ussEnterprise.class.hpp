#ifndef __USSENTERPRISE_CLASS_HPP__
#define __USSENTERPRISE_CLASS_HPP__

// #include <cstdlib>
// #include <string>
// #include <ncurses.h>

class ussEnterprise {
	private:
		/* Variable types
			std::string;
			int;
			double;
			float;
			bool;
			char;
		*/
		int col, row, score;
		bool collision;

	protected:

	public:
		//static variables

		/* Return types
			std::string;
			int;
			double;
			float;
			bool;
		*/

		//getters
			int GetCol();
			int GetRow();
			int GetScore();
			bool GetCollision();

		//setters
			void SetCol(int Col);
			void SetRow(int Row);
			void SetScore(int score);
			void SetCollision(bool collision);

		//constructor(s)
			//default
			ussEnterprise();

			//copy
			// ussEnterprise(const ussEnterprise &[some_variable_name]);

			//simple
			ussEnterprise(int col,int row);

		//destructor
			~ussEnterprise();

		//Member functions
			// void SetAll([some_variable]...);
			void mvUp();
			void mvDown(int maxRow);
			void mvLeft();
			void mvRight(int maxCol);

		//Overloads
			//Assign Overload
			ussEnterprise & operator=(ussEnterprise const & rhs);

			//ToString Overload
			void ToString(); //Handy override for displaying info

		//Static functions

};

#endif
