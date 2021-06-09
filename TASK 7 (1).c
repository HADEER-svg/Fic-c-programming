#include<stdio.h>
int main() {
	/*(Odd & even) Write a program that take an integer (n) from user then calculates and prints
	the product of odd integers from 1 to n and the summation of even integers from 1 to n.
*/
	int n=0;
	int sum = 0;
	int  product = 1;
	printf("Enter num: ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0)
			sum += i;
		else
			product *= i;
	}
	printf("The sum of evens = %d and the product of odds = %d\n", sum, product);





	return 0;
}