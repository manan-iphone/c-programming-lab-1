#include <stdio.h>
int main()
{
    float a,b,c,d;
    printf("Enter value of Bytes to convert into KB,MB, and GB:");
    scanf("%f",&a);
    b=a/1024;
    printf("Value of Bytes in KB is: %f \n",b);
    c=b/1024;
    printf("Value of Bytes in MB is: %f \n",c);
    d=c/1024;
    printf("Value of Bytes in GB is: %f \n",d);


}
