#include<stdio.h>
int main()
{
    int n, i,j;
    printf("enter size of array:");
    scanf("%d",&n);
    int arr[i];
    printf("enter array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("duplicate elements are :");
    for(i=0; i<n;i++){
        for(j= i+1; j<n;j++){
            if(arr[i]== arr[j]){
                printf("%d",arr[j]);
                break;
            }
        }
    }
    return 0;
}