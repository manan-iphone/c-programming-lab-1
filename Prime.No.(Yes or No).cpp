#include <stdio.h>
int main()
{
    int n,f=1;
    printf("Enter a number to check whether it is prime or not:");
    scanf("%d",&n);

    for(int i=2; i<=n/2; i++)
        if(n%i==0)
            f=0;
        if(f & n>1)
            printf("The Number is prime.");
        else
            printf("The number is not prime");
    return 0;

}
