#include<stdio.h>
int main()
{
    int n,a=0,b=1,c;
    printf("enter the value of n:");
    scanf("%d",&n);
    if(n==1){
        printf("nth fibonacci term is:%d",a);
    }
    else if(n==2){
        printf("nth fibonacci term is:%d",b);
    }
    else{
        for(int i=3;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        printf("nth fibonacci term is:%d",b);
    }
    return 0;
}