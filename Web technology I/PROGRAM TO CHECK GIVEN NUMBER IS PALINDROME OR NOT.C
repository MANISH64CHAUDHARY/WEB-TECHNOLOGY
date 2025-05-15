#include <stdio.h>
#include <conio.h>
void main()
{
    int a,r,rev=0,x;
    printf("Enter a number");
    scanf("%d",&a);
    x=a;
    while(a!=0)
    {
        r=a%10;
        rev=rev*10+r;
        a=a/10;
    }
    if(x==rev)
    printf("%d is palindrome number",x);
else
printf("%d is not palindrome number",x);
getch();
}