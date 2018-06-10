#ifndef __DEATHSTAR_CLASS_HPP__
#define __DEATHSTAR_CLASS_HPP__

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
		int col, row, size, speed;
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
			int GetSpeed();
			std::string GetShape();

		//setters
			void SetCol(int Col);
			void SetRow(int Row);
			void SetSize(int size);
			void SetSpeed();
			void SetShape(std::string shape);

		//constructor(s)
			//default
			deathStar();

			//copy
			// deathStar(const deathStar &[some_variable_name]);

			//simple
			// deathStar(int col,int row,int size,std::string shape);
			deathStar(int col,int row);

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
			deathStar & operator=(deathStar const & rhs);

			//ToString Overload
			void ToString(); //Handy override for displaying info

		//Static functions

};

#endif
