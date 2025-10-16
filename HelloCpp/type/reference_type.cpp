#include <iostream>

void main() {
	int a = 1;
	int& ra = a;		// ra is a reference to a(allocate memory for ra)
	ra = 2;
	std::cout << a << std::endl;

	int* pa = &a;		// pa is a pointer to a
	*pa = 3;
	std::cout << a << std::endl;
}
// Output:
/* 
2
3
*/