#include <iostream>

double Func(int a, int b) {
	return (double)a / b;
}

auto g_r = Func(1, 2);		// double g_r = Func(1, 2);

void main() {
	auto r = Func(2, 3);    // double r = Func(2, 3);
	std::cout << r << std::endl;
	std::cout << g_r << std::endl;
}
// Output: 
/*
0.666667
0.5
*/