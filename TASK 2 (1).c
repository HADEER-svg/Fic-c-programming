#include <stdio.h>
int binary_(int x);


/*int main()
{

	printf("DECIMAL\tOCTAL\tHEXADECIMAL\tBINARY\n");
	for (size_t i = 1; i <= 256; i++)
	{
		printf("%d    \t%o    \t%x         \t%d      \n", i, i, i, binary_(i));
	}
	puts("");

	return 0;
}*/
//another sol
int main()
{
	int x;
	printf("enter the num in decimal\n");
	scanf_s("%d", &x);
	printf("the num in oct is %o\n",x);
	printf("the num in hexa is %x\n", x);
	printf("the num in binary is %d\n", binary_(x));

	return 0;


}


int binary_(int x)
{
	int arr[100] = { 0 }, i = 0;
	while (x > 0)
	{
		arr[i] = x % 2;
		x /= 2;
		i++;
	}
	for (int g = i - 1; g >= 0; g--)
	{
		printf("%d", arr[g]);
	}
	puts("");
	return binary_(x);
}
