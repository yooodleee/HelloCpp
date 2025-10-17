extern int g_Val;	// Global Variable Declaration(g_Val allocated 4 bytes in memory)

class CTest;		// Class Declaration(compiler doesn't know the size of CTest)

void main() {
	g_Val = 1;		// OK

	CTest t;		// Error: incomplete type
	t.m_Val = 1;	// Error: incomplete type
}