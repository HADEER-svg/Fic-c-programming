#include<stdio.h>
int main()
{
	/*Write a program that reads in 10 numbers and displays distinct numbers
	(i.e., if a number appears multiple times, it is displayed only once). 
	(Hint: Read a number and store it to an array if it is new. If the number is already in the array,
	discard it. After the input, the array contains the distinct numbers.)
*/
	int nums[10];
	for (int i = 0; i < 10; i++) {
		int n;
		scanf_s("%d", &n);
		nums[i] = n;
	}

	for (int i = 0; i < 10; i++) {
		int j;
		for (j = 0; j < i; j++)
			if (nums[i] == nums[j])
				break;
		if (i == j)
			printf("%d ", nums[i]);

	}
	puts("");
}

