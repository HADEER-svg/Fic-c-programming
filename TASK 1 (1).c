#include<stdio.h>
#include<stdlib.h>

int main() {
    /*(Calculating Credit Limits) Collecting money becomes increasingly difficult during periods of recession,
    so companies may tighten their credit limits to prevent their accounts receivable (money owed to them) 
    from becoming too large. In response to a prolonged recession, one company has cut its
    customers? credit limits in half. Thus, if a particular customer had a credit limit of $2000 it?s now $1000. 
    If a customer had a credit limit of $5000, it?s now $2500. Write a program that analyses the credit status of three 
    customers of this company. For each customer you?re given:	a) The customer?s account number.	b)
    The customer?s credit limit before the recession.	c) The customer?s current balance
    (i.e., the amount the customer owes the company). Your program should calculate and print the new credit limit 
    for each customer and should determine (and print) which customers have current balances that exceed their new credit limits.
*/
    int accnum = 0;
    float  creditlim=0, currentbalance=0;
    for (size_t i = 1; i <=3 ; i++)
    {
        printf("Enter the Accnum: ");
        scanf_s("%d", &accnum);
        printf("Enter the creditlim : ");
        scanf_s("%d", &creditlim);
        printf("Enter the Current balance: ");
        scanf_s("%d", &currentbalance);
        printf("The new credit limit is : %d$\n", creditlim / 2);
        if (currentbalance>creditlim/2)
        {
            printf("\nThe customer whose number is %d has exceed the new credit limit\n", accnum);
     }
        printf("\n");
    }
  
       