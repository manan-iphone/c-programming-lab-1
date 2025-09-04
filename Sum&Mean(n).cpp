#include <stdio.h>

int main()
{
    int n, i;
    float num, sum = 0.0, mean;

    printf("Enter the number of elements of whcih you want sum and mean: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Number of elements must be positive.\n");
    }
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; ++i)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &num);
        sum += num;
    }
    mean = sum / n;
    printf("Sum of the numbers = %.2f\n", sum);
    printf("Mean of the numbers = %.2f\n", mean);
}
