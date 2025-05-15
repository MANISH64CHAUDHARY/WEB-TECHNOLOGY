#include <stdio.h>
#include <conio.h>
void main()
{
    int a,r,rev=0;
    printf("Enter a number");
    scanf("%d",&a);
    while(a!=0)
    {
        r=a%10;
        rev=rev*10+r;
        a=a/10;
    }
    printf("\nreverse no=%d",rev);
    getch();
}