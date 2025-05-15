/*program to input four digits number then find its reverse*/
#include <stdio.h>
#include <conio.h>
int main () {
    int num,reversed_num=0,remainder;
    printf("Enter a four-digit number:");
    scanf("%d",&num);
    while (num!=0) {
        remainder=num%10;
        reversed_num=reversed_num*10+remainder num/=10;
    }
    printf("Reversed number:%d\n",reversed_num);
    return 0;
}
