/*program to solve two linear equation*/
#include <stdio.h>
#include <conio.h>
int main() {
    float a1,b1,c1,a2,b2,c2,x,y,determinant;
    printf("Enter coefficients of the first equation(a1x+b1y=c1):\n");
    printf("a1:");
    scanf("%f",&a1);
    printf("b1:");
    scanf("%f",&b1);
    printf("c1:");
    scanf("%f",&c1);
    printf("Enter coefficients of the second equation(a2x+b2y=c2):\n");
    printf("a2:");
    scanf("%f",&a2);
    printf("b2:");
    scanf("%f",&b2);
    printf("c2:");
    scanf("%f",&c2);
    determinant=a1*b2-a2*b1;
    if (determinant==0) {
        printf("The system of equations has no unique solution.\n");
    } else{
        x=(b2*c1-b1*c2)/determinant;
        y=(a1*c2-a2*c1)/determinant;
        printf("Solution:\n");
        printf("x=%.2f\n",x);
        printf("y=%.2f\n",y);
    }
    return 0;
}