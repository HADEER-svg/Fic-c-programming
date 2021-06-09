#include<stdio.h>
int main()
{/*(Tabular Output) Write a program that uses looping to print the following table of values.
 Use the tab escape sequence (\t), in the 𝑝𝑟𝑖𝑛𝑡𝑓 statement to separate the columns with tabs.
*/
	int n=10;
	printf("n \t n*10 \t n*100 \t n*1000 \n");
	for (int i = 1; i <= n; i++)
	{
		printf("%d \t %d \t %d \t %d \n", i, i * 10, i * 100, i * 1000);
	}
	}