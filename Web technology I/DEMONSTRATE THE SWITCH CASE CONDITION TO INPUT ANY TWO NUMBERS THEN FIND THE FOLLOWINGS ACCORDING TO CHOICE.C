#include <stdio.h>
#include <conio.h>
void main()
{
    int Choice;
    float Value1,Value2;
    printf("Enter value 1:");
    scanf("%f",&Value1);
    printf("Enter value 2:");
    scanf("%f",&Value2);
    printf("\n1. Multiply");
    printf("\n2. Divide");
    printf("\n3. Subtract");
    printf("\n4. Add");
    printf("Enter your choice [1-4]:");
    scanf("%d",&choice);
    switch(Choice)
    {
        case 1:
        printf("\nThe result is %g",Value1*Value2);
        break;
        case 2:
        printf("\nThe result is %g",Value1/Value2);
        break;
        case 3:
        printf("\nThe result is %g",Value1-Value2);
        break;
        case 4:
        printf("\nThe result is %g",Value1+Value2);
        break;
        default:
        printf("Invalid choice");
    }
}