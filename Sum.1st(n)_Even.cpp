#include <stdio.h>

int main()
{
    int n, sum = 0, i;
    printf("Enter the number of Even numbers of which you want sum: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive integer.");
    }
    for (i = 1; i <= n; i++)
    {
        sum += (2*i);
    }
    printf("The sum of the first %d Even numbers is: %d\n", n, sum);
}
