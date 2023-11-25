#include <stdio.h>
int main()
{
    int numbers[7]={10,5,20,15,25,30,8};
    int largest=numbers[0];
    for(int i=0;i<7;i++){
        if(numbers[i]>largest){
            largest=numbers[i];
        }
    }
    printf("the largest element in the array is=%d\n",largest);
    return 0;
}