/* Sum of first n natural numbers */
#include <stdio.h>
#include <conio.h>
void main()
{
    int n,c,sum;
    printf("Enter a value for n");
    scanf("%d",&n);
    sum=0;
    for (c=1;c<=n;c++)
    {
        sum+=c;
    }
    printf("The sum of first %d numbers is %d,n,sum");
    getch();
}