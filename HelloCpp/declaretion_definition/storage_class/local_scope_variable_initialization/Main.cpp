/*
	BSS: Block Started by Symbol
		- uninitialized global and static variables
		- initialized to zero by default
	Data Segment:
		- initialized global and static variables
*/

#include <iostream>

int GetTwo() {
	return 2;
}

int g_A;				// global uninitialized variable(stored in BSS Segment)
int g_B = 0;			// global initialized variable(default initilized to zero, stored in Data Segment)
int g_C = 1;			// global initialized variable(stored in BSS Segment)
int g_D = GetTwo();		// global initialized variable with function call(stored in BSS Segment)

void main() {
	std::cout << "g_A: " << &g_A << std::endl;
	std::cout << "g_B: " << &g_B << std::endl;
	std::cout << "g_C: " << &g_C << std::endl;
	std::cout << "g_D: " << &g_D << std::endl;
}

// Output:
/*
g_A: 00007FF6947BF204
g_B: 00007FF6947BF208
g_C: 00007FF6947BF000
g_D: 00007FF6947BF20C
*/