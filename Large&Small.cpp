#include <stdio.h>
int  main()
{
    int a,b;
    printf("Enter 2 numbers for comparision");
    scanf("%d %d",&a,&b);
    if(a>b)
        printf("Larger among the 2 is: %d \n Smaller among 2 is: %d \n",a,b);
    else
        printf("Larger among the 2 is: %d \n Smaller among 2 is: %d \n",b,a);
}
