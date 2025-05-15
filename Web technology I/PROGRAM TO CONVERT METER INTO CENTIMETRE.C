/*program to convert meter into centimetre*/
#include <stdio.h>
#include <conio.h>
int main() {
    double meters,centimeters;
    printf("Enter the length in meters:");
    scanf("%lf",&meters);
    centimeters = meters*100;
    printf("%.2lf meters is equal to %.2lf centimeters.\n",meters,centimeters);
    return 0;
}