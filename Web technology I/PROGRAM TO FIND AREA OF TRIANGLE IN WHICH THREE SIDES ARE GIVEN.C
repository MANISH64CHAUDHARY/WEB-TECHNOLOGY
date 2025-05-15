/*program to find area of triangle*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    float a,b,c,s,A;
    printf("Enter three sides of a triangle:");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    A=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\nArea of triangle=%f",A);
    getch();
}