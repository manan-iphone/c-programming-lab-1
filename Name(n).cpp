#include <stdio.h>

int main()
{
    char name[50];
    int n, i;
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter the number of times you want to print your name: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("%s\n", name);
    }

}
