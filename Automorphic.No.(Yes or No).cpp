#include <stdio.h>
int main()
{
    int n,sq;
    printf("Enter any number to check whether it is automorphic or not:");
    scanf("%d",&n);
    sq = n*n;
    int f=1;

    while(n>0)
    {
        if(n%10 != sq%10)
            f=0;
        n/=10;
        sq/=10;
    }
    if(f)
        printf("The Number is Automorphic");
    else
        printf("The number is not automorphic");
    return 0;
}
