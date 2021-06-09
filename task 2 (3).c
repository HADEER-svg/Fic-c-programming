#include<stdio.h>
int sum(int n);
int main()
{
	/*Write a function that takes an integer and returns the sum of its digits.
	For example, given the number 7631, the function should return 17.
*/
	int x;
	printf("enter the num");
	scanf_s("%d", &x);
	int re = sum(x);
	printf("the sum of the digit is %d", re);







	return 0;
}
int sum(int n)
{
	int sum = 0;
	while (n != 0) {
		sum = sum + n % 10;
		n = n / 10;
	}
	return sum;
}