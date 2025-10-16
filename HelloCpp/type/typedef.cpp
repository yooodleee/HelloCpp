#include <iostream>

void main() {
	typedef int NEW_TYPE_INT;	// only valid in main scope(NEW_TYPE_INT)

	NEW_TYPE_INT i = 1;
}

void Func() {
	NEW_TYPE_INT a = 2;			// Error: 'NEW_TYPE_INT' was not declared in this scope
}