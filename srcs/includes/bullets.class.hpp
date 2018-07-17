#ifndef __BULLETS_CLASS_HPP__
#define __BULLETS_CLASS_HPP__

// #include <cstdlib>
// #include <string>
// #include <ncurses.h>

class bullets {
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
			bullets();

			//copy
			// bullets(const bullets &[some_variable_name]);

			//simple
			// bullets(int col,int row,int size,std::string shape);
			bullets(int col, int rnd);

		//destructor
			~bullets();

		//Member functions
			// void SetAll([some_variable]...);

		//Overloads
			//Assign Overload
			bullets & operator=(bullets const & rhs);

			//ToString Overload
			void ToString(); //Handy override for displaying info

		//Static functions

};

#endif
