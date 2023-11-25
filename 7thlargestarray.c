#include <stdio.h>
int main()
{
    int arr[10];
    int size=10;
    int largest =arr[0];
    int seventhLargest =arr[0];
    int i;
    printf("enter the array elements=\n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    //find the 7th largest number
    for(i=1;i<size;i++){
        if(arr[i]>largest){
            seventhLargest =largest;   
            largest=arr[i];
        }
        else if(arr[i]>seventhLargest && arr[i]<largest){
            seventhLargest=arr[i];
        }
        }
        //print the 7th largest number
        printf("the 7th largest number is=%d\n",seventhLargest);
        return 0;
    }