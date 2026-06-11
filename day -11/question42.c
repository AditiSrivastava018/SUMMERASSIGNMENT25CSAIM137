#include<stdio.h>
int maximum(int a,int b)
{
    if(a>b)
    return a;
    else 
    return b;
}
int main()
{
    int num1,num2,max;
    printf("enter two numbers:");
    scanf("%d %d",&num1,&num2);
    max= maximum(num1,num2);
    printf("maximum number = %d",max);
    return 0;
}