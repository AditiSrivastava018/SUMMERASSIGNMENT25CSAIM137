#include<stdio.h>
int main()
{
    int arr[100],n,i,largest,smallest;
    printf("enter no. of elements:");
    scanf("%d",&n);
    printf("enter %d elemsnts:\n",n);
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    } 
    largest = smallest=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>largest)
        largest= arr[i];
        if(arr[i]<smallest)
        smallest= arr[i];
    }
    printf("largest element=%d\n",largest);
    printf("smallest element = %d\n",smallest);
    return 0;
}