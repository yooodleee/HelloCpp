#include <iostream>

int g_Arrx[1024 * 1024];			// uninitialized variable(stored in BSS Segment)
int g_Arry[1024 * 1024] = { 0 };	// initialized variable(stored in BSS Segment)
int g_Arrz[1024 * 1024] = { 1 };	// initialized variable(stored in Data Segment)

void main() {				// heap memory's initialization 
	int* p = new int;
	int& ri = *p;
	std::cout << ri;
}

// Output: -842150451