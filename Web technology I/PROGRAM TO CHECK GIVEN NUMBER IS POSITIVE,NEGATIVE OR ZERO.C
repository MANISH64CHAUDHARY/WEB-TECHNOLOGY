#include <stdio.h>
#include <conio.h>
void main()
{
    int no;
    clrscr();
    printf("\n Enter Number:");
    scanf("%d",&no);
    if(no>0)
    {
        printf("\n\nNumber is greater than 0 !");
    }
    else
    {
        if(no==0)
        {
            printf("\n\n It is 0 !");
        }
        else
        {
            printf("Number is less than 0 !");
        }
    }
    getch();
}