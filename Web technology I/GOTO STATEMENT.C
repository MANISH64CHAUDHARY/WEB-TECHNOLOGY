#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a%2==0)
    goto even;
else
goto odd;
even;
printf("%d is even number",a);
return;
odd;
printf("%d is odd number",a);
getch();
}