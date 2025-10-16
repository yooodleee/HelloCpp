#include <iostream>

void main() {
	int max1 = 18446744073709551615;	// 2^63 - 1
	int max2 = 18446744073709551616;	// Compile Error
	
	int min1 = -18446744073709551615;	// -2^63 + 1
	int min2 = -18446744073709551616;	// Compile Error

	std::cout << max1 << std::endl;
	std::cout << max2 << std::endl;

	std::cout << min1 << std::endl;
	std::cout << min2 << std::endl;
}