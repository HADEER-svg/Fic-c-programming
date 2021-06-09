#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*An elephant decided to visit his friend. It turned out that the elephant's house
    is located at point 0 and his friend's house is located at point x,
    where x > 0, of the coordinate line. In one step the elephant can move 1, 2, 3, 4 𝑜𝑟 5 positions forward. Determine, 
    what is the minimum number of steps he needs to make in order to get to his friend's house. (Solve using if statements) */
    int n;
    scanf("%d", &n);
    if (n % 5 > 0)
        printf("%d\n", n / 5 + 1);
    else
        printf("%d\n", n / 5);
    return 0;
}