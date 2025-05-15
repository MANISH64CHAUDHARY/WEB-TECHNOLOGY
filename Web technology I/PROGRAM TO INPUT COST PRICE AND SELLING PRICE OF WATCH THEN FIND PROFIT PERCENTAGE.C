/*program to input cost price and selling price of watch then find profit percentage*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int CP,SP,Profit %;
    printf("Input cost price and selling price of the watch:");
    scanf("%d%d%",&CP,&SP);
    Profit percentage=((SP-CP)/100)*100
    printf("\nProfit percentage=%d",Profit %);
    getch();
}