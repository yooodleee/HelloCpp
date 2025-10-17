class CTest {
public:
	CTest(int a, int b) {
		m_ValA = a;
		m_ValB = b;
	}

	int m_ValB;
	int m_ValA;
};

extern CTest g_Test;

int GetValA() {
	return g_Test.m_ValA;
}