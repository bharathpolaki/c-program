#include <stdio.h>
int main()
{
    int numbers[10]={1,2,3,4,5,6,7,8,9,10};
    int sum=0;
    float average;
    for (int i=0;i<10;i++){
        sum +=numbers[i];
            }
            average=(float)sum/10;
            printf("the average of the numbers is=%2f\n",average);
            return 0;
}