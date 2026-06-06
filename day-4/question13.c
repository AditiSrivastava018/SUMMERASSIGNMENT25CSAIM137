#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,i=1;
    printf("enter the number of terms:");
    scanf("%d",&n);
    printf("fibonacci series:");
    while(i<=n){
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    return 0;
}