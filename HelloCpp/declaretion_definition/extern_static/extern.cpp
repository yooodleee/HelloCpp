int g_Val;				// can be ommit 'extern' keyword: definition 
extern int g_Val;		// can't be ommit 'extern' keyword: declaration

int g_Val;				// duplicate definition error
int g_Val;				// duplicate definition error

extern int g_Val = 1;	// defintion with 'extern' keyworkd: can be initilized 
extern int g_Val;		// declaration with 'extern' keyworkd: can't be initialized

extern int g_Val = 1;	// duplicate definition error
extern int g_Val = 2;	// duplicate definition error

extern int g_Val;		// no initialization: declaration
extern int g_Val;		// no initialization: declaration