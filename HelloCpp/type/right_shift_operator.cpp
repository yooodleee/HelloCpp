#include <iostream>

void main() {
	/* Signed Type */
	char c; 
	c = 0x02;							// [0000,0010]		2
	c = c >> 1;							// [0000,0001]		1
	std::cout << (int)c << std::endl;

	c = 0x82;							// [1000,0010]		-126
	c = c >> 1;							// [1100,0001]		-63
	std::cout << (int)c << std::endl;
	
	/* Unsigned Type */
	unsigned char uc;				
	uc = 0x02;							// [0000,0010]		2
	uc = uc >> 1;						// [0000,0001]		1
	std::cout << (int)uc << std::endl;

	uc = 0x82;							// [1000,0010]		130
	uc = uc >> 1;						// [0100,0001]		65
	std::cout << (int)uc << std::endl;
}
// Output:
/*
1
-63
1
65
*/