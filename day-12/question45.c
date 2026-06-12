#include<stdio.h>
int ispalindrome(int n){
    int ori=n, rev=0, rem;
    while(n>0){
        rem = n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(ori==rev)
    return 1;
    else 
    return 0;
}
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if (ispalindrome(num))
    printf("palindrome number:");
    else
    printf(" not a palindrome number");
    return 0;
}