#include <iostream>

void main() {
	const int& ra = 1;				// ra is a reference to a const int, allocate memory for ra and initialize it to 1
	int* pa = (int*)&ra;
	*pa = 2;
	std::cout << ra << std::endl;
}
// Output:
/*
2
*/