// demonstrate the program sum of 10 odd number.
#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=1;i<=10;i++)
    {
        sum=sum+(2*i-1);
    }
    printf("the sum of:%d",sum);
    return 0;
} 