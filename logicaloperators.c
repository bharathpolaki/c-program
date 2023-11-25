//logical opertors in c are used to perform boolean value

#include <stdio.h>
int main()
{
    int a=5;
    int b=10;
    int c=15;
    //AND operators
    if(a>b && b<c);
    printf("both conditons are true\n");
    //OR operator
    if(a>b || b>c);
    printf("at least one condition is true\n");
    //NOT operator
    if(!(a>b));
    printf("the condition is false/n");
    return 0;
}

