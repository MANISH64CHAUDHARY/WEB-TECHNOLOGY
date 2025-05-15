#include <stdio.h>
#include <conio.h>
void main()
{
    int num,r;
    printf("\nEnter a number:");
    scanf("%d",&num);
    r=num%2;
    if(r==0)
    {
        printf("%d is even number\n",num);
    }
    else
    printf("%d is odd number\n",num);
getch() 
}