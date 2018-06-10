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
			ussEnterprise();

			//copy
			// ussEnterprise(const ussEnterprise &[some_variable_name]);

			//simple
			ussEnterprise(int col,int row,int size,std::string shape);

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
