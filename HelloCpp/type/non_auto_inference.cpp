#include <iostream>

int& GetRef(int& arg) {
	return arg;
}

void main() {
	int a = 1;
	auto b1 = GetRef(a);	// auto -> int
	auto& b2 = GetRef(a);	// auto& -> int&

	b1++;
	b2++;
}