#include <iostream>

void main() {
	int i = 1;
	i = (i << 31); 
	std::cout << i << std::endl;	// signed int min value

	i = ~i;
	std::cout << i << std::endl;	// signed int max value
	
	unsigned int ui = 0;
	std::cout << ui << std::endl;	// unsigned int min value

	ui = -1;
	std::cout << ui << std::endl;	// unsigned int max value
}

// Output:
/*
-2147483648
2147483647
0
4294967295
*/