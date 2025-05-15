/*Reads a positive number and calculates the sum of its digits*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n,sum;
    printf("Enter a positive number:");
    scanf("%d",&n);
    sum=0;
    while (n ! =0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    printf("The sum of the digits in %d is %d\n",n,sum);
    getch();
}