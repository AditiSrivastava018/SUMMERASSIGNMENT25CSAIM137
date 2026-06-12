#include<stdio.h>
int isperfect(int n){
    int i,sum=0;
for(i=1;i<n;i++){
    if(n%i==0)
    sum+= i;
}
if(sum==n)
return 1;
else
return 0;
}
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(isperfect(num))
printf("%d is a perfect number",num);
else
printf("%d is not a perfect number",num);
return 0;
}