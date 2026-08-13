Q6:add Write a program to swap two numbers using a third variable.

#include<stdio.h>
int main()
{ 
    int a,b,c;
    printf("Enter the first number a:");
    scanf("%d",&a);
    printf("Enter the second number b:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("After swapping a is: %d\n and b is: %d\n", a, b);
    return 0;
}