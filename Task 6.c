#include<stdio.h>
#define pi  3.141592653
int main()

{
//Write a program that calculates the are of a circle
	float r, area;
	printf("enter the radius of circul :\n ");
	scanf("%f", &r);
	area = r * r * pi;
	printf("the area of circul is ;%f\n", area);

}