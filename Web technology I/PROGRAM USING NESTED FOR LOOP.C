#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j,m;
    i=1;
    while(i<=5)
    {
        j=1;
        while(j<=5)
        {
            m=i*j;
            printf("%d\t",m);
            j++;
        }
        i++;
        printf("\n");
    }
    getch();
}