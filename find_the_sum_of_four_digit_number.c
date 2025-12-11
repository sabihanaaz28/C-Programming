#include<stdio.h>
int main()
{
    int n,d,sum=0;
    printf("enter the four digit numbrt:");
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
    n=n/10;
    printf("the sum of digit is:%d",sum);
    return 0;

}