#include<stdio.h>
int main()
{
    int a[100],b[100],c[200], n1,n2,i;
    printf("enter size of first array:");
    scanf("%d",&n1);
    printf("enter elements of first array:\n");
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf("enter size of second array:");
    scanf("%d",&n2);
    printf("enter elements of second array:\n");
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    for(i=0; i<n1;i++){
        c[i]= a[i];
    }
    for(i=0;i<n2;i++){
        c[n1+i]=b[i];
    }
    printf("Merged array:\n");
    for(i=0;i<n1+n2;i++){
        printf("%d\n",c[i]);
    }
    return 0;
}