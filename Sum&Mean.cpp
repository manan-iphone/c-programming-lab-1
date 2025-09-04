#include <stdio.h>
int main()
{
    float a,b,c,d,e,f,g,h,i,j,sum,mean;
    printf("Enter any 10 values for calculating Sum and Mean");
    scanf("%f %f %f %f %f %f %f %f %f %f",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
    sum = a+b+c+d+e+f+g+h+i+j;
    mean=(a+b+c+d+e+f+g+h+i+j)/10;
    printf("The Sum and Mean of entered numbers is: \n SUM=%.2f \n MEAN=%.2f",sum,mean);
}
