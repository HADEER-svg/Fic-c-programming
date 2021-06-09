#include<stdio.h>
int main()
{
	/*Write program that reads an input 𝑥. If 𝑥 is even output “EVEN” otherwise output “ODD”. */
	int x;
	printf("enter the number of x : \n");
	scanf("%d", &x);
	if (x % 2 == 0)
	{
		puts("the number is Even");
	}
	else if (x % 2 == 1)
	{
		puts(" the number is Odd");
	}
}