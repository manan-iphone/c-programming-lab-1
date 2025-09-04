#include <stdio.h>

int main()
{
    float gs;
    float al_r;
    float de_r;
    float ns;
    float al_amt;
    float de_amt;

    printf("Enter the Gross Salary amount: ");
    scanf("%f", &gs);

    if (gs > 10000)
    {
        al_r=0.1;
        de_r=0.03;
    }
    else if (gs > 5000)
    {
        al_r=0.07;
        de_r=0.02;
    }
    else
    {
        printf("The amount entered is not significant for calculation");
    }
    al_amt = gs * al_r;
    de_amt = gs * de_r;
    ns = gs + al_amt - de_amt ;

    printf("Gross Salary: %.2f\n", gs);
    printf("Allowances: %.2f\n",al_amt);
    printf("Deduction: %.2f\n", de_amt);
    printf("Net Salary: %.2f\n", ns);
}
