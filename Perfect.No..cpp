#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter any number to check whether it is perfect number or not");
    scanf("%d",&n);

    for(int i=1; i<n; i++)
        if (n%i==0)
            sum+=i;
            if (sum=n)
                printf("The entered number is a perfect number");
            else
                printf("The entered number is not perfect");
    return 0;
}
