#include <stdio.h>
main()
{
    int num1, num2, num3;
num1=1;
num2=2;
num3=3;
 
    printf("num1 = %d\tnum2 = %d\tnum3 = %d\n", num1, num2, num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("num1 is the greatest among three \n");
        }
        else
        {
            printf("num3 is the greatest among three \n");
        }
    }
    else if (num2 > num3)
        printf("num2 is the greatest among three \n");
    else
        printf("num3 is the greatest among three \n");
}

