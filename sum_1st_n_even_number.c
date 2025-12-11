// program to find first n even number in c.
#include<stdio.h>
int main()
{
    int  i,sum=0,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(2*i);
    }
    printf("the sum of n even number is:%d",sum);
    return 0;
}
