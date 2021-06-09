#include <stdio.h>
int main()
{
	/*. Problem statement: Given two numbers X, Y which donate coordinates of a point in 2D plan.
	Determine in which quarter it belongs. (Softcopy)
Output Q1, Q2, Q3, Q4 according to the quarter in which the point belongs to.
Output "Origen" If the point is at the origin.
Output "X-axis" If the point is over X axis.
Output "Y-axis" if the point is over Y axis
*/
	float x = 0.0, y = 0.0;
	printf("Enter the value of x : %f \n");
	scanf("%f", &x);

	printf("Enter the value of y : %f \n");
	scanf("%f", &y);
	if (x > 0 && y > 0)
		puts("Q1");
	else if (x < 0 && y>0)
		puts("Q2");
	else if (x < 0 && y < 0)
		puts("Q3");
	else if (x > 0 && y < 0)
		puts("Q4");
	else if (x == 0 && y == 0)
		puts("origin");
	else if (y == 0)
		puts("x-axis");
	else if (x == 0)
		puts("y-axis");


	return 0;



}