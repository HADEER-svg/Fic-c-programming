#include <stdio.h>
int main()
{
	/*(Diamond-Printing Program) Write a program that prints the following diamond shape.
	You may use 𝑝𝑟𝑖𝑛𝑡𝑓 statements that print either a single asterisk (*) or a single blank.
	Maximize your use of iteration (with nested for statements) and minimize the number of 𝑝𝑟𝑖𝑛𝑡𝑓 statements.
*/
	int e = 1;
	for (size_t a = 1; a <= 5; a++)
	{
		for (int b = 4; b >= a; b--)
		{
			printf(" ");
		}
		for (size_t c = 0; c < e; c++)
		{
			printf("*");
		}
		printf("\n");
		e = e + 2;
	}
	
	int m = 9;
	for (size_t r = 1; r <= 5; r++)
	{

		for (size_t c = 0; c < m; c++)
		{
			printf("*");
		}
		printf("\n");
		m = m - 2;
		for (size_t s = 0; s < r; s++)
		{
			printf(" ");

		}
	

	
	}
	printf("\n");




	return 0;
}