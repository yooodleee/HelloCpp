int g_ValB;						// OK
int g_ValCommon;				// Link Error: multiple definition of 'g_ValCommon'
static int s_ValCommon;			// OK

int Func1(double arg) {			// OK
	return 1;
}

double Func2(int arg) {			// OK
	return 2.0;
}

int Func3(int arg) {			// Link Error: multiple definition of 'Func3'
	return 32;
}

class CTest1 {					// OK
public:
	int m_Int;
};

class CTest2 {					// OK
public:
	int m_Val;
};

