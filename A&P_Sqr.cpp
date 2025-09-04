#include <stdio.h>
int main()
{
    int a=4;
    float b,c,d;
    printf("Enter the value of a side of Square to calculate Area and Perimeter:");
    scanf("%f",&b);
    c=a*b;
    printf("Value of Perimeter of Square is %f meters \n",c);
    d=b*b;
    printf("Value of Area of Square is %f sq.meters \n",d);
}
