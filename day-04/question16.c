#include<stdio.h>
int main()
{
    int low,high,num,ori,rem,result;
    printf("enter lower limit:");
    scanf("%d",&low);
    printf("enter upper limit:");
    scanf("%d",&high);
    printf("armstrong numbers between %d and %d are: \n",low,high);
    for(num=low;num<= high;num++){
        ori= num;
        result=0; 
        while(ori!=0){
            rem=ori%10;
            result +=rem*rem*rem;
            ori/=10;
        }
        if(result==num){
            printf("%d",num);
        }
    }
    return 0;
}