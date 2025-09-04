#include <stdio.h>

int main()
{
    int i;
    int sum=0;
    printf("The sum of numbers dividible by 13 in the range 1-100 is:\n");
    for(i=1;i<=100;i++)
        if(i%13==0)
            sum+=i;
    printf("%d\n",sum);

}
