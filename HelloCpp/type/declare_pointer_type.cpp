#include <iostream>

typedef double (*PFUNCTYPE)(int arg1, int arg2);	// Signature: typedef return_type (*type_name)(parameter_list);

double Divide(int a, int b) {
	return (double) a / b;
}

void main() {
	PFUNCTYPE f = &Divide;
	std::cout << f(1, 2) << std::endl;
}
// Output: 
/*
0.5
*/