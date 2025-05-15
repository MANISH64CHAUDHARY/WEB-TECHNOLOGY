#include <stdio.h>
#include <conio.h>
void main()
{
    float p;
    printf("\nEnter percentage:");
    scanf("%f",&p);
    if (p>=80)
    {
        printf("Distinction\n");
    }
    else if(p>=80)
    {
        printf("First Division\n");
    }
    else if (p>=50)
    {
        printf("Second Division\n");
    }
    else if (p>=40)
    {
        printf("Third Division\n")
    }
    else
    {
        printf("Fail\n");
    }
    getch();
}