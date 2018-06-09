#ifndef __HEADERNAME_HPP__
#define __HEADERNAME_HPP__

class class_name {
	private:
		/* Variable types
			std::string;
			int;
			double;
			float;
			bool;
		*/
		//for copy constuctor
		class_name *ptr;

	protected:

	public:
		//static variables
			static int NumOf;

		/* Return types
			std::string;
			int;
			double;
			float;
			bool;
		*/

		//getters
			[some_return_type] Get();

		//setters
			void Set();

		//constructor(s)
			//default
			class_name();

			//copy
			class_name(const class_name &[some_variable_name]);

			//simple
			class_name([some_variable]...);

		//destructor
			~class_name();

		//Member functions
			void SetAll([some_variable]...);

		//Overloads
			//Assign Overload
			class_name & operator=(class_name const & rhs);

			//ToString Overload
			void ToString(); //Handy override for displaying info

		//Static functions
			static int GetNumOf();

};

#endif
