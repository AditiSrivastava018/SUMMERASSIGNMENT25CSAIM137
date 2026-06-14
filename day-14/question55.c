#include<stdio.h>
int main()
{
    int n, i;
    printf("enter no. of elements:");
    scanf("%d",&n);
    int arr[i];
    printf("enter array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest = arr[0];
    int secondlargest = arr[0];
    for(i=1;i<n;i++){
        if(arr[i] > largest){
            secondlargest = largest;
            largest = arr[i];
        }
        else if(arr[i]> secondlargest && arr[i] < largest)
        {
            secondlargest = arr[i];
        }
    }
    printf("second largest element =%d", secondlargest);
    return 0;
}