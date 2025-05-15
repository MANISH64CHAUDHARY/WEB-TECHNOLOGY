/*Program to input a number then find out it is less than 200 or not*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Input a number:");
    scanf("%d",&n);
    if(n<200)
    printf("n is less than 200");
else
printf("n is greater than 200");
getch();
}