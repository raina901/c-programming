/*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit*/

#include<stdio.h>
int main()
{
    int U;
    printf("Enter the units consumed:");
    scanf("%d", &U);
    if ( U <= 100 )
    {
        printf("Electricity bill is %d", U * 5);
    }
    else if ( U <= 200 )
    {
        printf("Electricity bill is %d", 500 + ( U - 100 )* 7);
    }
    else if ( U <= 300 )
    {
        printf("Electricity bill is %d", 1200 + ( U - 200 )* 10);
    }
    else
    {
        printf("Electricity bill is %d", 3200 + ( U - 300 )* 12);
    }
    return 0;
}