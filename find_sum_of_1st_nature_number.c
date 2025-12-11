// find the sum of 1st an natural number.
#include<stdio.h>
int main()
{
    int i,sum=0,n;
    printf("enter the value of element:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    //printf("the natural number is:%d\n",i);
    printf("the sum is:%d\n",sum);
    
    return 0;
}
