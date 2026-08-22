/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/


#include<stdio.h>
int main()
{
    int D;
    printf("Enter the number of days late:");
    scanf("%d", &D);
    if ( D <= 5 )
    {
        printf("Library fine: ₹%d", D * 2);
    }
    else if ( D <= 10 )
    {
        printf("Library fine: ₹%d", 10 + (D - 5) * 4);
    }
    else if ( D <= 30 )
    {
        printf("Library fine: ₹%d", 30 + (D - 10) * 6);
    }
    else
    {
        printf("Membership Cancelled");
    }

}
