#include <stdio.h>
int main()
{
    int n;
    int i;
    printf("Enter number of odd numbers you want to print");
    scanf("%d",&n);

    if(n<=0)
        printf("Please enter a positive number");

    printf("The first %d Odd numbers are:\n",n);
    for(int i=1; i<=n;i++)
        printf("%d\n",i*2-1);
}
