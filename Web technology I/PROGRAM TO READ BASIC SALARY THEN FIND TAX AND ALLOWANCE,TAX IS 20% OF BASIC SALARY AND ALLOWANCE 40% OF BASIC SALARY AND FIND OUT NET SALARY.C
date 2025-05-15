#include <stdio.h>
#include <conio.h>
int main()
{
    float basic_salary,tax,allowance,net_salary;
    // Input basic salary
    printf("Enter basic salary:");
    scanf("%f",&basic_salary);
    // Calculations
    tax=0.20*basic_salary; //20% tax
    allowance=0.40*basic_salary; //40% allowance
    net_salary=basic_salary-tax+allowance
    // Output results
    printf("\nBasic Salary:%.2f",basic_salary);
    printf("\nTax (20%%):%.2f",allowance);
    printf("\nAlllowance (40%%):%.2f",allowance);
    printf("\nNet Salary:%.2f\n",net_salary);
    return 0;
}