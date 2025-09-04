#include <stdio.h>
int main()
{
    int n;
    int i;
    printf("Enter number of Even numbers you want to print");
    scanf("%d",&n);

    if(n<=0)
        printf("Please enter a positive number");

    printf("The first %d Even numbers are:\n",n);
    for(int i=1; i<=n;i++)
        printf("%d\n",i*2);
}
