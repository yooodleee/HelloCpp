/*
	Definition: A definition allocates memory for a variable or provides the implemetation of a function or class.
	Common definitions: allocate virtual memory for variables, implement functions, and define classes.
	In C++, a class definition allocates memory for compiler to use when creating objects of that class.
	*/

class CTest {
public:
	int m_Value;			// CTest's member variable definition

	int MFunc(int arg) {	// CTest's member function definition
		return arg;
	}
};