#include <stdio.h>
int main(){
    float income, tax, standard, rebate, surcharge, finaltax;
    printf("Enter your income: ");
    scanf("%f", &income);
    standard = 50000;
    income = income - standard;
    if (income <= 250000)
    {
        tax = 0;
    }
    else if (income <= 500000)
    {
        tax = (income - 250000) * 5 / 100;
    }
    else if (income <= 1000000)
    {
        tax = 12500 + (income - 500000) * 20 / 100;
    }
    else
    {
        tax = 112500 + (income - 1000000) * 30 / 100;
    }
    if (tax < 10000)
    {
        rebate = tax;
    }
    else
    {
        rebate = 0;
    }
    tax = tax - rebate;
    if (income > 5000000)
    {
        surcharge = tax * 10 / 100;
    }
    else
    {
        surcharge = 0;
    }
    finaltax = tax + surcharge;
    printf("Standard Deduction = %.2f\n", standard);
    printf("Tax before Rebate = %.2f\n", tax + rebate);
    printf("Rebate = %.2f\n", rebate);
    printf("Surcharge = %.2f\n", surcharge);
    printf("Final Tax = %.2f\n", finaltax);
    return 0;
}
