/*Program to find greatest number among any three numbers using nested if statement*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int x,y,z;
    printf("Enter any three numbers:");
    scanf("%d%d%d",&x,&y,&z);
    if (x>y)
    {
        if (x>z)
        printf("x is greater");
    else
    printf("z is greater");
    }
    else
    {
        if (y>z)
        printf("y is greater");
    else
    printf("z is greater");
    }
    getch();
}