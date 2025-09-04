#include <stdio.h>
int main()
{
    float a,b,c,d;
    printf("Enter the value of a bredth and length of Square to calculate Area and Perimeter:");
    scanf("%f %f",&a,&b);
    c=2*(a+b);
    printf("Value of Perimeter of Rectangle is %f meters \n",c);
    d=a*b;
    printf("Value of Area of Rectangle is %f sq.meters \n",d);
}
