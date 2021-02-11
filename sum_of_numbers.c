//Write a program to find the sum of n different numbers using 4 functions
#include <stdio.h>
 void main()
{
    int i, num, sum = 0;
 
    printf("Enter an integer number \n");
    scanf ("%d", &num);
    for (i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    printf ("Sum of first %d  numbers = %d\n", num, sum);
}
