/*program to convert hour into minutes*/
#include <conio.h>
#include <stdio.h>
int main() {
    float hours,minutes;
    printf("Enter hours:");
    scanf("%f",&hours);
    minutes=hours*60;
    printf("%.2f hours is equal to %.2f minutes\n",hours,minutes);
    return 0;
}