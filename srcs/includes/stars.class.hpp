#ifndef __STARS_CLASS_HPP__
#define __STARS_CLASS_HPP__

// #include <cstdlib>
// #include <string>
// #include <ncurses.h>

class stars {
	private:
		/* Variable types
			std::string;
			int;
			double;
			float;
			bool;
			char;
		*/
		int col, row;

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

		//setters
			void SetCol(int Col);
			void SetRow(int Row);

		//constructor(s)
			//default
			stars();

			//copy
			// stars(const stars &[some_variable_name]);

			//simple
			// stars(int col,int row,int size,std::string shape);
			stars(int col, int rnd);

		//destructor
			~stars();

		//Member functions
			// void SetAll([some_variable]...);

		//Overloads
			//Assign Overload
			stars & operator=(stars const & rhs);

			//ToString Overload
			void ToString(); //Handy override for displaying info

		//Static functions

};

#endif
