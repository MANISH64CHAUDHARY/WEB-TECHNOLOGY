#include <stdio.h>
#include <conio.h>
void main() {
    float temperature;
    printf("Enter the temperature:");
    scanf("%f",temperature);
    if(temperature<0)
    {
        printf("Ice");
    }
    else if(0<=temperture<=100)
    {
        printf("Water");
    }
    else
    {
        printf("Steam");
    }     
}