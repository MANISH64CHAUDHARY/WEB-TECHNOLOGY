#include <stdio.h>  //include header file stdio.h
#include <conio.h>
void main()  //tell the compiler the start of the program
{
    int numb1,num2,sum,sub,mul,div,mod;  //declaration of variables
    printf("Enter any two numbers");
    scanf("%d%d", &num1, &num2);  //inputs the operands
    sum = num1+num2;  //addition of numbers and storing in sum.
    printf("sum = %d", sum);  //display the output
    sub = num1-num2; //subtraction of numbers and storing in sub.
    printf("difference = %d", sub); //display the output
    mul = num1*num2; //multiplication of numbers and storing in mul.
    printf("product is = %d", mul); //display the output
    div = num1/num2;  //division of numbers and storing in div.
    printf("division= %d",div);  //display the output
    mod = num1%num2;  //modulus of numbers and storing in mod.
    printf("modulus = %d", mod);  //display the output
    getch();
}