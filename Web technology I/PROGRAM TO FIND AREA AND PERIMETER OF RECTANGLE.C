/*program to find area and perimeter of retangle*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int l,b,a,p;
    printf("Enter length and breadth of rectangle:");
    scanf("%d%d",&l,&b);
    a=l*b;
    p=2*(l+b);
    printf("\nArea of rectangle=%d",a);
    printf("\nPerimeter of rectangle=%d",p);
    getch();
}