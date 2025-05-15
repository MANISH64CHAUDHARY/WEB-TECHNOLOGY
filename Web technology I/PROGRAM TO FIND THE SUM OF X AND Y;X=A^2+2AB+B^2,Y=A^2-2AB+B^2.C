/*program to find the sum of x and y*/
#include <stdio.h>
#include <conio.h>
int main() {
    float a,b,result;
    //Input values for a and b
    printf("Enter value for a:");
    scanf("%f",&a);
    printf("Enter value for b:");
    scanf("%f",&b);
    //Calculate X and Y
    X=(a*a)+(2*a*b)+(b*b);
    Y=(a*a)-(2*a*b)+(b*b);
    //Calculate sum of X and Y
    sum=X+Y;
    //Output result
    printf("X=%f\n",X);
    printf("Y=%f\n",Y);
    printf("Sum of X and Y=%f\n",sum);
    return 0;
}