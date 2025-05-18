#include <stdio.h>
#include <conio.h>
void main() {
    int S;
    printf("Enter Sales amount:");
    scanf("%d",&S);
    if(Sales amount<10000)
    {
        printf("No commission");
    }
    else if(Sales amount>=10000&&Sales amount=20000)
    {
        printf("Commission=20%");
    }
    else if(Sales amount>=20000)
    {
        printf("Commission=30%");
    }
    getch();
}