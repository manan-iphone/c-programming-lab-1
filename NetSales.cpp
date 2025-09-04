#include <stdio.h>

int main()
{
    float gs;
    float dis;
    float ns;

    printf("Enter the gross sales: ");
    scanf("%f", &gs);

    dis=0.1*gs;
    ns = gs - dis;

    printf("Gross Sales: %.2f\n", gs);
    printf("Net Sales: %.2f\n", ns);
}

