extern int g_Val;
extern int s_val;

void main() {
	g_Val = 1;		// OK
	s_Sval = 2;		// Link Error: s_Val is defined in A.cpp as static 
}