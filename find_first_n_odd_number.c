//program to demonstrate first n odd number.
#include<stdio.h>
int main()
{
    int i,sum=0,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(2*i-1);
    }
    printf("the sum of odd number:%d",sum);
    return 0;
}