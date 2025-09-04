#include <stdio.h>
int main()
{
    int n,pos=0,neg=0,zero=0,x;
    n=5;
    for(int i=1; i<=n; i++)
    {
        printf("Enter number %d to check negative, positive or 0:",i);
        scanf("%d",&x);

        if(x>0)
            pos++;
        else if(x<0)
            neg++;
        else
            zero++;
    }
    printf("Positive numbers:%d \nNegative numbers:%d \nZeros:%d \n",pos,neg,zero);
    return 0;
}
