#include <iostream>

void main() {
	char c = 1;

	c = c << 7;
	std::cout << (int)c << std::endl;

	c = c >> 7;
	std::cout << (int)c << std::endl;
}

// Output:
/*
-128
-1
*/