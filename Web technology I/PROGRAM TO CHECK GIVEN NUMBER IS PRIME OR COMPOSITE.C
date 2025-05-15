#include <stdio.h>
#include <conio.h>
void main()
{
    int a,r,i;
    printf("Enter a number to check prime or composite");
    scanf("%d",&a);
    for(i=2;i<a/2;i++)
    {
        r=a%2;
        if(r==0)
        {
            printf("%d is composite number",a);
            break;
        }
    }
    if(r!=0)
    printf("%d is prime number",a);
getch();
}