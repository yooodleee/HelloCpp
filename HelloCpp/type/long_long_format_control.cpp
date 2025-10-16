#include <iostream>

void main() {
	long long ll = 1;		// set a maximum value for long long
	ll = (ll << 63);
	ll = ~ll;

	printf("(A) %d \r\n", ll);		// Incorrect format specifier
	printf("(B) %lld \r\n", ll);	// Correct format specifier
	printf("(C) %I64d \r\n", ll);	// Only on VC++ format specifier(%164d)
}
// Output:
/*
(A) -1
(B) 9223372036854775807
(C) 9223372036854775807
*/