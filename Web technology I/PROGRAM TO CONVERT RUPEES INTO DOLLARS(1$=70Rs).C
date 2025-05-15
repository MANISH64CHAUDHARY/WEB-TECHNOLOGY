/*program to convert rupees into dollars*/
#include <stdio.h>
#include <conio.h>
int main (void) {
    float rupees;
    printf("Please enter rupees:");
    scanf("%f",&rupees);
    float dollars=rupees/70;
    printf("%f Dollars",dollars);
}