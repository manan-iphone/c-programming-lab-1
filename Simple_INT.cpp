#include <stdio.h>
int main()
{
    int time,prin;
    float rate,interest;
    float a=100;
    printf("Enter the value of Principle, Time, and Rate to calculate simple interest:");
    scanf("%d %d %f",&prin,&time,&rate);
    interest = (prin*time*rate)/100;
    printf("The value of simple interest from the entered values is: %f",interest);


}
