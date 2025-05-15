/*program to convert Fahrenheit temperature into Centigrade temperature*/
#include <stdio.h>
#include <conio.h>
int main() {
    float Fahrenheit,celsius;
    //Get input from the user
    printf("Enter temperature in Fahrenheit:");
    scanf("%f",&Fahrenheit);
    //Perform the conversion
    celsius=(Fahrenheit-32)*5.0/9.0;
    //Display the result
    printf("Temperature in Celsius:%.2f\n",Celsius);
    return 0;
}