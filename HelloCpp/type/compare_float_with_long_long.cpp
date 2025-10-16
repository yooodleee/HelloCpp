#include <iostream>

void main() {
	float f = 33554432 + 3;
	std::cout << f << std::endl;	// 33554436

	long long ll = 33554432 + 3;	// long long(=__int64)
	std::cout << ll << std::endl;	// 33554435
}
// Output:
/*
3.35544e+07
33554435
*/