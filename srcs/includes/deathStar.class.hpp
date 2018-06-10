#ifndef __USSENTERPRISE_HPP__
#define __USSENTERPRISE_HPP__

// #include <cstdlib>
// #include <string>
// #include <ncurses.h>

class deathStar {
	private:
		/* Variable types
			std::string;
			int;
			double;
			float;
			bool;
			char;
		*/
		int col, row, size;
		std::string shape;

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
			int GetSize();
			std::string GetShape();

		//setters
			void SetCol(int Col);
			void SetRow(int Row);
			void SetSize(int size);
			void SetShape(std::string shape);

		//constructor(s)
			//default
			deathStar();

			//copy
			// deathStar(const deathStar &[some_variable_name]);

			//simple
			deathStar(int col,int row,int size,std::string shape);

		//destructor
			~deathStar();

		//Member functions
			// void SetAll([some_variable]...);
			void mvUp();
			void mvDown(int maxRow);
			void mvLeft();
			void mvRight(int maxCol);

		//Overloads
			//Assign Overload
			// deathStar & operator=(deathStar const & rhs);

			//ToString Overload
			void ToString(); //Handy override for displaying info

		//Static functions

};

#endif
