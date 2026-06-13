#include<stdio.h>
int factorial(int n)
{
    int fact=1;
for(int i=1;i<=n;i++){
    fact=fact*i;
}
return fact;
}
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    printf("factorial of %d=%d",num,factorial(num));
    return 0;
}