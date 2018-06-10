#ifndef __SCENERY_CLASS_HPP__
#define __SCENERY_CLASS_HPP__

// #include <cstdlib>
// #include <string>
// #include <ncurses.h>

class scenery {
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

		//setters
			void SetCol(int Col);
			void SetRow(int Row);
			void SetSize(int size);
			void SetSpeed();

		//constructor(s)
			//default
			scenery();

			//copy
			// scenery(const scenery &[some_variable_name]);

			//simple
			// scenery(int col,int row,int size,std::string shape);
			scenery(int col,int row);

		//destructor
			~scenery();

		//Member functions
			// void SetAll([some_variable]...);

		//Overloads
			//Assign Overload
			scenery & operator=(scenery const & rhs);

			//ToString Overload
			void ToString(); //Handy override for displaying info

		//Static functions

};

#endif
