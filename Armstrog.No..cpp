#include <stdio.h>
int main()
{
    int n,sum=0,temp,d;
    printf("Enter any number to check for Armstrong  number");
    scanf("%d",&n);
    temp=n;
    while (n>0)
    {
        d=n%10;
        sum+=d*d*d;
        n /= 10;
    }
    if(sum==temp)
        printf("The entered number is an Armstrong Number");
    else
        printf("The entered number is not armstrong number");
    return 0;

}
