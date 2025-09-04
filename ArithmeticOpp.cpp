#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int a,b,c,d,e,f;
    system("cls");
    printf("Enter 2 numbers");
    scanf("%d %d",&a,&b);
    c = a + b;
    printf("SUM \n %d+%d=%d\n",a,b,c);
    d=a-b;
    printf("DIFFERENCE \n %d-%d=%d\n",a,b,d);
    e=a*b;
    printf("PRODUCT \n %d*%d=%d\n",a,b,e);
    f=a/b;
    printf("DIVISION \n %d/%d=%d\n",a,b,f);
    getch();

}
