#include <stdio.h>

int main()
{
    float gs;
    float al;
    float de;
    float ns;

    printf("Enter the gross salary: ");
    scanf("%f", &gs);

    al = 0.10 * gs;
    de = 0.03 * gs;

    ns = gs + al - de;

    printf("Gross Salary: %.2f\n", gs);
    printf("Allowances (10%%): %.2f\n", al);
    printf("Deductions (3%%): %.2f\n", de);
    printf("Net Salary: %.2f\n", ns);
}

