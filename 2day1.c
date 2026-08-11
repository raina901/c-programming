Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>
int main()
{
    int l, b, a, p;
    printf("Enter the length of rectangle:");
    scanf("%d",&l);
    printf("Enter the breadth of rectangle:");
    scanf("%d",&b);
    a=l*b;
    p=2*(l+b);
    printf("Area of rectangle is %d\n Perimeter of rectangle is %d\n", a, p);
    return 0;
}