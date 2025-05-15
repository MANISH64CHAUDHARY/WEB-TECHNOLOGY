/* program to read a four digit number then find the sum of first and last digit*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,s;
    long int x;
    printf("Enter four digit number:");
    scanf("%ld",&x);
    a=x%10;
    b=x/1000;
    s=a+b;
    printf("\sum of four digit number=%d",s);
    getch();
}