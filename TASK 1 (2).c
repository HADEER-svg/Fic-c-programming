#include<stdio.h>
#include <stdlib.h>

int main()
{
    /*Write a program that reads student scores, gets the best score, and then assigns grades based on
    the following scheme:
    Grade is A if score is >= best - 10;
     Grade is B if score is >= best - 20;
      Grade is C if score is >= best - 30;
       Grade is D if score is >= best - 40;
       Grade is F otherwise.The program prompts the user to enter the total number of students,
       then prompts the user to enter all the scores and concludes by displaying the grades.
*/
    int n,  best;
    char m;
    printf("enter the number of students");
    scanf_s("%d", &n);

    int score[n];
    printf(" enter %d scores ");


    for (int i = 0; i < n; i++) {
        scanf_s("%d", &score[i]);

    }

    best = score[0];
    for (int i = 1; i < n; i++) {
        if (score[i] > best)
            best = score[i];
    }
    for (int i = 0; i < x; i++) {
        if (score[i] >= best - 10)
            m = 'A';
        else if (score[i] >= best - 20)
            m = 'B';
        else if (score[i] >= best - 30)
       m = 'C';

        else if (score[i] >= best - 40)
            m = 'D';
        else
            m = 'F';

        printf("student\t %d\t score is %d and grand is %c\n", i, score[i], m);
    }



}