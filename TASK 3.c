#include <stdio.h>
int main()
{
	/*(Table of Squares and Cubes) Using only the techniques you learned in this chapter, 
	write a program that calculates the squares and cubes of the numbers from 0 to 10 and uses 
	tabs to print the following table of values:
*/
	printf("number\t square\t cube\t\n");
	for (size_t i = 0; i <=10 ; i++)
	{
		printf("%d\t %d\t %d\t\n", i, i * i, i * i * i);

	}




	return 0;
}