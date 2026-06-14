#include<stdio.h>
int main()
{
    int arr[100], n, item,i,found=0;
    printf("enter no. of elements:");
    scanf("%d",&n);
    printf("enter array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter element to search:");
    scanf("%d",&item);
    for(i=0;i<n;i++){
        if(arr[i]== item){
            found = 1;
            break;
        }
    }
    if(found)
    printf("element found at position %d",i+1);
    else
    printf("element not found");
    return 0;
}
