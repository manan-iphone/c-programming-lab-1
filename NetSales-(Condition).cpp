#include <stdio.h>

int main()
{
    float gs;
    float dis_r;
    float dis_amt;
    float ns;

    printf("Enter the gross sales amount: ");
    scanf("%f", &gs);

    if (gs > 20000)
    {
        dis_r = 0.15;
    }
    else if (gs > 10000)
    {
        dis_r = 0.10;
    }
    else
    {
        dis_r = 0.05;
    }
    dis_amt = gs * dis_r;
    ns = gs - dis_amt;

    printf("Gross Sales: %.2f\n", gs);
    printf("Discount Rate: %.0f%%\n", dis_r * 100);
    printf("Discount Amount: %.2f\n", dis_amt);
    printf("Net Sales: %.2f\n", ns);
}
