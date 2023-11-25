#include <stdio.h>
int main()
{
    short  num1=32767;
    short num2=-32768;
    short sum=num1+num2;
    printf("sum of %d and %d is %d\n",num1,num2,sum);
    return 0;
}