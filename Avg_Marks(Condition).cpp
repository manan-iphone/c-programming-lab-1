#include <stdio.h>
int main()
{
    float a,b,c,d,e;
    printf("Enter the marks of three subjects");
    scanf("%f %f %f",&a,&b,&c);
    e=a+b+c;
    d=(a+b+c)/3;
    printf("Total Marks = %.2f\n",e);
    printf("Average Marks = %.2f",d);
    if(d>=70)
        printf("You have secured Distinction Grade!");
    else
        if(60<=d & d<70)
            printf("You have secured First Grade!");
    else
        if(50<=d & d<60)
            printf("You have secured Second Grade!");
    else
        if(35<=d & d<50)
            printf("You have secured Third Grade!");
    else
        printf("You have failed the exam");

}
