#include <stdio.h>
#include <conio.h>
void main()
{
    int no;
    clrscr();
    printf("\n Enter any number from 1 to 3:");
    scanf("%d",&no);
    switch(no)
    {
        case 1:
        printf("\n\n It is 1 !");
        break;
        case 2:
        printf("\n\n It is 2 !");
        break;
        case 3:
        printf("\n\n It is 3 !");
        break;
        default:
        printf("\n\n Invalid number !");
    }
    getch();
}