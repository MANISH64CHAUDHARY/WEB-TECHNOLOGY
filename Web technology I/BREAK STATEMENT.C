#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j;
    for(i=1;i<=2;i++)
    {
        for(j=1;j<=2;j++)
        {
            if(i==j)
            break;
        printf("%d\t%d\n",i,j);
        }
        printf("\n");
    }
    getch();
}