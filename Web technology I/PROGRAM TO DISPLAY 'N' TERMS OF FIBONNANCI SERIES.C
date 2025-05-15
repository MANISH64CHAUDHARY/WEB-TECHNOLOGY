#include <stdio.h>
#include <conio.h>
void main()
{
    int a=0,b=1,n,c,i;
    printf("Enter a value of n");
    scanf("%d",&n);
    printf("%d\t%d\t",a,b);
    for(i=3;i<=n;i++)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
    getch();
}