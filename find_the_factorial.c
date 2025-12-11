//program to find the factorial of a number in c.
#include<stdio.h>
int main()
{
    int num,i,fact=1;
    printf("enter the number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("the factorial is:%d",fact);
    return 0;

}
