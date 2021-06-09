#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*To make people happy, sell candies!. The store bought a package of 𝑛    candies,
    for 𝑥 dollars each, and the store wants to know the total profit the store is going to earn after selling all 𝑛 candies
    for 𝑦 dollars each.
    Can you help the store to know?*/
    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);
    printf("%d", (y - x) * n);
    return 0;
}