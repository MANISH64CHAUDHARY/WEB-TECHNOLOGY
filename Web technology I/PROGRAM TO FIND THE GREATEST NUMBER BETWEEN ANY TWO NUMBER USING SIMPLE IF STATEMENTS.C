/*Program to find the greatest number between any two number using simple if statements*/
#include <stdio.h>
void main()
{
    int x,y;
    printf("\nInput an integer value for x:");
    scanf("%d",&x);
    printf("\nInput an integer value for y:");
    scanf("%d",&y);
    /*Test values and print result*/
    if (x==y)
    printf("%d is equal to %d/n",x,y);
if (x>y)
printf("%d is greater than %d\n",x,y);
if (x<y)
printf("%d is less than %d\n",x,y);
}