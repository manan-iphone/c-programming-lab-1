#include <stdio.h>
int main()
{
    int a,b;
    float c=1.8;
    printf("Enter Celcius to convert into Farhenite:");
    scanf("%d",&a);
    b=(a*c)+32;
    printf("Value of Celcius in Farhenite is: %d",b);
}
