#include <stdio.h>
int  main()
{
    int a,b,c;
    printf("Enter 3 numbers for comparision");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b & a>c)
        printf("Largest among the 3 is: %d \n",a);
    else
        if(a<b & a<c)
            printf("Smallest among the 3 is: %d \n",a);
    if(b>a & b>c)
        printf("Largest among the 3 is: %d \n",b);
    else
        if(b<c & b<a)
            printf("Smallest among the 3 is: %d \n",b);
    if(c>b & c>a)
        printf("Largest among the 3 is: %d \n",c);
    else
        if(c<a & c<b)
            printf("Smallest among the 3 is: %d \n",c);





}
