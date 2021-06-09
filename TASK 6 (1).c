#include<stdio.h>
int main()
{
	/*(Sequences) Write 𝑓𝑜𝑟 statements that print the following sequences of values: 
3, 8, 13, 18, 23, …, 993,998 
20, 14, 8, 2, –4, –10, …, -994, -1000 
3, 15, 75, 375, …, 46875, 234375 
1, 2, 4, 8, 16, …, 4096, 8192 
*/
	for (size_t i = 3; i <=998 ; i+=5)
	{
		printf("%d, ", i);
	}
	puts("");

 for (int j = 20; j > -1006 ; j-=6)
	{
		printf("%d, ", j);
	}
	puts("");
	for (size_t a = 3; a <= 234375; a *= 5)
	{
		printf("%d, ", a);
	}
	puts("");
	for (size_t b = 1; b <=8192; b *= 2)
	{
		printf("%d, ", b);
	}
	puts("");

	return 0;
}