#include <stdio.h>


int main() 
{
    /*(counting 7s) Write a program that reads an integer of 5 digits and determines and prints how many digits
    in the integer are 7s.
    Example, if the input is 45777, the program outputs 3. If the input is 12541, the program outputs 0*/
    int a, b, c, d, e, n, counter=0;
    printf("Input a five-digit integer:\n");
    scanf_s("%d", &n);

    a = n % 10;
    b = n / 10 % 10;
    c = n / 100 % 10;
    d = n / 1000 % 10;
    e = n / 10000;

    if (a == 7) {
        counter++;
    }
    if (b == 7) {
        counter++;
    }
    if (c == 7) {
        counter++;
    }
    if (d == 7) {
        counter++;
    }
    if (e == 7) {
        counter++;
    }

    printf("%d\n", counter);

    return 0;
}