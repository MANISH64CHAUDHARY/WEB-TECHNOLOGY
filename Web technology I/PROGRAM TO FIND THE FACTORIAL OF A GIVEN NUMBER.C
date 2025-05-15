#include <stdio.h>
#include <conio.h>
void main()
{
    int a,f=1,i;
    printf("Enter a number to find factorial");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        f=f*i;
    }
    printf("\nFactorial=%d",f);
    getch();
}