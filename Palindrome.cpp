#include <stdio.h>
int main()
{
    int n,u=0,temp;
    printf("Enter any number to check for Palindrome number");
    scanf("%d",&n);
    temp=n;
    while (n>0)
    {
        u=u*10 + (n%10);
        n /= 10;
    }
    if(temp==u)
        printf("The entered number is a Palindrome");
    else
        printf("The entered number is not a Palindrome");
    return 0;

}
