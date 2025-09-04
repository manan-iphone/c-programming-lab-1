#include <stdio.h>

int main()
{
    int n, sum = 0, i;
    printf("Enter the number of natural numbers you want sum of: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive integer.");
    }
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);
}
