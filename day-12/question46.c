#include<stdio.h>
#include<math.h>
int isArmstrong(int n)
{
    int ori=n,sum=0,digits=0,rem;
    int temp=n;
    while(temp>0)
    {
        digits++;
        temp /= 10;
    }
    temp = n;
    while(temp>0)
    {
        rem = temp%10;
        sum += pow(rem,digits);
        temp /= 10;
    }
    return (sum == ori);
}
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(isArmstrong(num))
    printf("%d is an armstrong number",num);
    else 
    printf("%d is not an armstrong number",num);
    return 0;
}