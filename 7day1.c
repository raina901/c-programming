Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include<stdio.h>
int main()
{
    int Y;
    printf("Enter a year:");
    scanf("%d", &Y);
    if ( Y % 400 == 0)
    {
        printf("Year %d is a leap year", Y);
    }
    else
    {
        if ( Y % 4 == 0)
        {
            printf("Year %d is a leap year", Y);
        }
        else
        {
            printf("Year %d is not a leap year", Y);
        }
    }
    return 0;


}