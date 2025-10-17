#include <iostream>

class CTest {
public:
	CTest(int a, int b) {
		m_ValA = a;
		m_ValB = b;
	}

	int m_ValA;
	int m_ValB;
};

CTest g_Test(1, 2);

int GetValA();

void main() {
	std::cout << GetValA();
}