#include <iostream>

void main() {
	unsigned int ui = 0xFFFFFFFF;

	float f;
	memcpy(&f, &ui, 4);			// f is NaN
	std::cout << f << std::endl;

	float f2 = f + f;			// f2 is NaN
	std::cout << f2 << std::endl;
}
// Output:
/*
-nan
-nan
*/