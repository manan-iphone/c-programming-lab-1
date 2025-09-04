#include <stdio.h>
int main()
{
    float a,b,c;
    printf("Enter height and length  of base of triangle respectively to calculate its area:");
    scanf("%f %f",&a,&b);
    c=(a*b)/2;
    printf("The area of Triangle accroding to the entered values is: %f sq.meters",c);

}
