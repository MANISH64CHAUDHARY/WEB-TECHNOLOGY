#include <stdio.h>
#include <conio.h>
#define pi 3.14
void main()
{
    int Choice;
    float r,a,l,b,p,t,r,si;
    printf("\n1. Area of circle");
    printf("\n2. Area of rectangle");
    printf("\n3. Simple interest");
    printf("Enter your choice [1-3]:");
    printf("Enter your choice");
    scanf("%d", &Choice);
    switch(Choice)
    {
        case 1:
        printf("Enter radius of circle:");
        scanf("%f",&r);
        a=pi*r*r;
        printf("\nArea of circle:",a);
        break;
        case 2:
        printf("Enter length and breadth of rectangle:");
        scanf("%f%f",&l,&b);
        a=l*b;
        printf("\nArea of rectangle is:",a);
        break;
        case 3:
        printf("Enter principal, time and rate:");
        scanf("%f%f%f",&p,&t,&r);
        si=(p*t*r)/100;
        printf("\nSimple interest is",si);
        break;
        default:
        printf("Invalid choice");
    }
}