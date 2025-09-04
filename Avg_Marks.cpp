#include <stdio.h>;
int main()
{
    float a,b,c,sum,avg;
    printf("Enter marks of 3 subjects to calculate Average");
    scanf("%f %f %f",&a,&b,&c);

    sum=a+b+c;
    avg=sum/3;

    printf("The Average of the marks entered is: %f",avg);



}
