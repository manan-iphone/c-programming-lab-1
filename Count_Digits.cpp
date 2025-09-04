#include <stdio.h>
int main()
{
    int n,c=0;
    printf("Enter the number for counting its digits");
    scanf("%d",&n);

    while(n>0)
    {
        c++;
        n /= 10;
    }
    printf("The number of digits is %d",c);
    return 0;
}
