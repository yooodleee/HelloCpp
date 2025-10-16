#include <iostream>

void main() {
	/*
	push ebp
	mov ebp, esp
	sub esp,10h
	*/

	int a = 1;
	int& ra = a;
	/*
	mov dword ptr [ebp-0Ch],1			// a
	lea eax,[ebp-0Ch]
	mov dword ptr [ebp-10h],eax			// ra
	*/

	const int& rc = 2;
	/*
	mov dword ptr [dbp-4],2				// Temp
	lea ecx,[ebp-4]
	mov dowrd ptr [ebp-8],ecx			// rc
	*/
}