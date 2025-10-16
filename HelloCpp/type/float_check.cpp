#include <iostream>

void main() {
	unsigned int ui = 0xc11B0000; // Hexadecimal representation of a large unsigned integer

	float f;
	memcpy(&f, &ui, 4);
	std::cout << f << std::endl;
}
// Output:
/*
- 9.6875
*/ 