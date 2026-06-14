#include<stdio.h>
int main()
{
    int arr[100],n,item,i,count=0;
    printf("ennter no. of elements:");
    scanf("%d",&n);
    printf("enter array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter element to find frequency:");
    scanf("%d",&item);
    for(i=0;i<n;i++){
        if(arr[i]==item){
            count++;
        }
    }
    printf("frequency of %d= %d",item,count);
    return 0;
}