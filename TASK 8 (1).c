#include<stdio.h>
int main()
{
	/*(Factorials) The factorial function is used frequently in probability problems.
	The factorial of a positive integer n (written n! and pronounced “n factorial”)
	is equal to the product of the positive integers from 1 to n. */
	int num, product=1;
	printf("enter the num ");
	scanf_s("%d", &num);
	for (size_t i =1; i <= num ; i++)
	{
		product *= i;
	}
	printf("the factorial of %d is :%d", num, product);
	puts("");



	return 0;
}