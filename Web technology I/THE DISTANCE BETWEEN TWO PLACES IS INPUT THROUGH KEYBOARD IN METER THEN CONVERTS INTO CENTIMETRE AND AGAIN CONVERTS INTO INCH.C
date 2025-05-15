#include <stdio.h>
#include <conio.h>
int main () {
    flaot meters,centimeters,inches;
    //Get input from the user
    printf("Enter the distance in meters:");
    scanf("%f",&meters);
    //Convert meters into centimeters
    centimeters=metres*100;
    //Convert centimeters into inches
    inches=centimeters*0.393701; //1cm=0.393701 inches
    //Display the converted values
    printf("\nDistance in meters:%.2f m\n",meters);
    printf("Distance in centimeters:%.2f cm\n",centimeters);
    printf("Distance in inches:%.2f in\n",inches);
    return 0;
}