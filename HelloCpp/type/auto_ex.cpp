#include <iostream>
#include <vector>

void main() {
	std::vector<int> v;
	v.assign(10, 0);

	for (int i = 0; i < 10; i++) {
		v[i] = i;
	}

	int Sum = 0;
	auto it = v.begin();		// vector<int>::iterator it = v.begin();, type inference(v.begin())
	while (it != v.end()) {
		Sum += *it;
		it++;
	}

	std::cout << Sum << std::endl;
}
// Output:
/*
45
*/