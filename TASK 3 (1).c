#include<stdio.h>
int seconds(int h, int m, int s);

int main()
{
	/*Write a function that takes the time as three integer arguments
	(for hours, minutes, and seconds) and returns the number of seconds.
*/
	int h,m,se;
	printf("enter the num of hours: \n");
	scanf_s("%d", &h);
	printf("enter the num of min: \n");
	scanf_s("%d", &m);
	printf("enter the num of seconds: \n");
	scanf_s("%d", &se);

	printf("the total second is : %d\n", seconds(h, m, se));






	return 0;
}
int seconds(int h, int m, int s) {
	int seconds = 3600 * h + 60 * m + s;
	return seconds;
}