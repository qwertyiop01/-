#include <iostream>
#include <math.h>

using namespace std;
int main()
{ 
	unsigned int  a, b, c, d, e, y, x;
	cout << "Enter a, b, c, d, e" << endl;
	cin >> a >> b >> c >> d >> e;

	__asm
	{
			
		mov eax, c
		mov ebx, d
		cmp eax, ebx;
		je  a1
		mov edx, 0
		jmp a2
		a1: mov edx, 1 // if c==d: edx =1
		a2:
			mov eax, a
			mov ebx, e

			cmp eax, ebx
			jae b1
			mov ecx, 0
			jmp b2
		b1: mov ecx, 1 // if e<=a: ecx=1
		b2:
		mov eax, 0
		mov ebx, 0 
		cmp edx, ecx
		jne cat // hor. if edx== ecx metka cat
		
		// y=a*(b+c)-d/e
		mov eax, b;
		mov ebx, c;
		add eax, ebx;
		imul a;
		mov ebx, eax;
		mov edx, 0;
		mov eax, d;
		cdq;
		idiv e;
		sub ebx, eax;
		mov eax, ebx;
		jmp meow


			
		cat: // y=a*(b+c)*d/e
			mov eax, a;
			imul b;
			mov ebx, eax;
			mov eax, c;
			imul d;
			cdq;
			idiv e;
			add eax, ebx;
			
		meow: mov y, eax;


	}
	
	if ((c == d) | (e <= a))
	{
		cout << "y=a*b + c*d/e" << endl;
		cout << "Result c++ = " << a*b + c*d / e << endl;	

	}

	else
	{
		cout << "y=a*(b + c) - d/e" << endl;
		cout << "Result c++ = " << a*(b + c) - d / e << endl;
	}
	
	cout << "Result as = " << y << endl;

	system("pause");
	return 0;
}
