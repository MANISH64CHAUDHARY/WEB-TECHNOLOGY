/*Program to find the greater number between any two numbers*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int x,y;
    printf("Enter any two numbers:");
    scanf("%d%d",&x,&y);
    if (x>y)
    printf("x is greater");
else
printf("y is greater");
getch();
}