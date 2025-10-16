#include <iostream>

int GetValue() {
	int a = 1;
	return a;
}

int& GetReference() {
	int a = 2;
	return a;
}

void Func(int& arg) {
	std::cout << "Lvalue" << std::endl;
}

void Func(int&& arg) {
	std::cout << "RValue" << std::endl;
}

void main() {
	Func(1);				// RValue Reference

	int a = 1;
	Func(a);				// LValue Reference	

	Func(GetValue());		// RValue Reference
	Func(GetReference());	// LValue Reference
}
// Output:
/*
RValue
Lvalue
RValue
Lvalue
*/