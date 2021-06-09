#include <stdio.h>
int main()
{
	//Write a C program to evaluate the arithmetic expression: (Softcopy)
	//((𝑎 + 𝑏 / 𝑐 ∗ 𝑑 − 𝑒) ∗ (𝑓 − 𝑔)) Get input from user


	
		int a, b, c, d, e, f, g;
		printf("enter the numbera :");
		scan_f("%d", &a);
		printf("enter the numberb : ");
		scan_f("%d", &b);
		printf("enter the numberc : ");
		scan_f("%d", &c);
		printf("enter the numberd : ");
		scan_f("%d", &d);
		printf("enter the numbere : ");
		scan_f("%d", &e);
		printf("enter the numberf : ");
		scan_f("%d", &f);
		printf("enter the numberg : ");
		scan_f("%d", &g);
		int re
			re = (a + (b / c) * d - e) * (f - g);
		printf("the result is :%d", re);


		return 0;
	}
	