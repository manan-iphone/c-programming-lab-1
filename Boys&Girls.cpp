#include <stdio.h>
int main()
{
    char sex;
    int b=0,g=0;

    for(int i=1; i<=50; i++)
    {
        printf("Enter sex of student 'M' for Male and 'F' for female:");
        scanf("%c",&sex);
        if (sex="M")
            b++;
        else
            g++;
    }
    printf("The number of boys and girls in class are: \n BOYS:%d \n GIRLS:%d \n",b,g);
    return 0;
}
