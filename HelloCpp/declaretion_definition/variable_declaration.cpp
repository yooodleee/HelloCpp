/*
	In C++, Definition: A definition of a variable allocates storage for that variable.
	In C++, Declaration: A declaration of a variable introduce the variable and its type to the compiler.
*/

class CTest {};		// declaration of CTest 

/* Global Scope Variable Declaration */
int g_Val;
int g_Arr[2];
CTest g_T;

void main() {		// Local Scope Variable Declaration 
	int v;
	int arr[2];
	CTest t;
}

int Add(int a, int b) {
	return a + b;
}