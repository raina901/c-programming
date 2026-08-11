Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
#define pi 3.14159
int main()
{
    float r, area, circ;
    printf("Enter the radius of circle:");
    scanf("%f", &r);
    area = pi * r * r;
    circ = 2 * pi * r;
    printf("Area of circle is %f\nCircumference of circle is %f\n", area, circ);
    return 0;
}