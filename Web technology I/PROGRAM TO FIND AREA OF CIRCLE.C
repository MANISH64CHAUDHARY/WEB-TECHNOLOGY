/*program to find area of circle*/
#include <stdio.h>
#include <conio.h>
void main()
{
    float r, area;
    printf("Enter radius of circle");
    scanf("%f",&r);
    area=pi*r*r;
    printf("\nArea of circle=%f",area);
    getch();
}