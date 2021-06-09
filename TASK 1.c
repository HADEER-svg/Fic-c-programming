#include<stdio.h>
main()
{
	/*(Final Velocity) Write a program than asks the user to enter the initial velocity and acceleration of an object,
	and the time that has elapsed, places them in the variables u, a, and t, and prints the final velocity,
	v, and distance traversed, s, using the following equations.
a) ?? = ?? + ????
b) ?? = ???? + 0.5 ????^2
*/
	float a, u, t, s, v;
	printf("Enter initial velocity :");
	scanf_s("%f", &u);
	printf("Enter the acceleration :");
	scanf_s("%f", &a);
	printf("Enter the time :");
	scanf_s("%F", &t);
	v = u + a * t;
	s = u * t + 0.5 * u * t * t;
	printf("the final velocitiy is : %F\n", v);
	printf("the final distance is : %F\n", s);




	return 0;
}