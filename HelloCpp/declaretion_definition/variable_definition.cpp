class CTest {};

/* Global Scope Variable Definition */
int g_Val;			
int g_Arr[2];
CTest g_T;

void main() {	/* Local Scope Variable Definition; allocate stack's memory space */
	int v;
	int arr[2];
	CTest t;
}

int Add(int a, int b) {
	return a + b;
}