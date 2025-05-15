/*program to convert feet into inch*/
#include <stdio.h>
#include <conio.h>
int main() {
    float feet,inches;
    printf("Enter  the length in feet:");
    scanf("%f",&feet);
    inches=feet*12;
    printf("The length in inches is:%.2f\n",inches);
    return 0;
}