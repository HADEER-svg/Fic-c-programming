#include<stdio.h>
int main()
{
	/*(Body Mass Index Calculator) Create a BMI calculator application that reads the user’s weight in pounds
	and height in inches (or, if you prefer, the user’s weight in kilograms and height in meters),
	then calculates and displays the user’s body mass index. Also, the application should display the following
	information from the Department of Health and Human Services/National Institutes of Health so the user can 
	evaluate his/her BMI:
𝐵𝑚𝑖 =  𝑤𝑒𝑖𝑔ℎ𝑡/(ℎ𝑒𝑖𝑔ℎ𝑡^2 )*/
	float w, h,BMI=0;
	printf("Enter the weight in kilograms : ");
	scanf_s("%f", &w);
	printf("Enter the hight in meters : ");
	scanf_s("%f", &h);
	BMI = w / (h * h);
	if (BMI < 18.5)
	{
		printf("underweight");

	}
	else if (BMI >= 18.5 && BMI <= 24.9)
	{
		printf("normal");

	}
	else if (BMI >= 25 && BMI <= 29.9)
	{
		printf("overweight");
	}
	else if (BMI >= 30)
		printf("obese");


	return 0;
}