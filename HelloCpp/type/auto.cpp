#include <iostream>

void main() {
	auto int a = 1;		// error, can use in VS2013

	auto a = 1;			// int a = 1;
	std::cout << a << std::endl;

	auto a;				// Compile Error, 'a' declared as 'auto' must have an initializer
	a = 1;
}