#include<stdio.h>
int main()
{
    int n,d,sum=0;
    printf("enter a four digit number=");
    scanf("%d",&n);
    d=n%10;
    sum=sum+d;
    n=n/10;
    d=n%10;
    sum=sum+d;
    n=n/10;
     d=n%10;
     sum=sum+d;
     n=n/10;
     d=n%10;
     sum=sum+d;
     //n=n/10;
     printf("sum=%d",sum);
     return 0;
}