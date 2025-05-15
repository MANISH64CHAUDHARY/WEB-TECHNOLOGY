#include <stdio.h>
#include <conio.h>
void main()
{
    char choice;
    printf("Enter your choice\n");
    choice=getchar();
    switch(choice)
    {
        case 'r';
        printf("RED");
        break;
        case 'w';
        printf("WHITE");
        break;
        case 'b';
        printf("Blue");
        break;
        default:
        printf("Unknown");
    }
}