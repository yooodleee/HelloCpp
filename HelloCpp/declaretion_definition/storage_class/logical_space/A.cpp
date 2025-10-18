int g_ValA;						// OK
int g_ValCommon;				// Link Error: redefinition of 'g_ValCommon'
static int s_ValCommon;			// OK

static int s_ValA;				// Compile Error: redefinition of 's_ValA'
static int s_ValA;				// Compile Error: redefinition of 's_ValA'

int Func1(int arg) {			// OK 
	return 1;
}

int Func2(int arg) {			// OK
	return 2;
}

int Func3(int arg) {			// Link Error: redefinition of 'Func3'
	return 31;
}

int FuncA(int arg) {			// Compile Error: redefinition of 'FuncA'
	return 4;
}

double FuncA(int arg) {			// Compile Error: redefinition of 'FuncA'
	return 4;
}

class CTest1 {
public:
	char m_Char;
};

class CTest2 {
public:
	int m_Val;
};

class CTestA {					// Compile Error: redefinition of 'CTestA'
public:
	int m_Val;
};

class CTestA {					// Compile Error: redefinition of 'CTestA'
public:
	int m_Val;
};