// program to demonstrate to first natural number.
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the number:\n");
    scanf("%d",&n);
    printf("first %d natural number are:\n",n);
    for(i=1;i<=n;i++)//i<=n-1 we can write.
    {
        printf("%d\t",i);
    }
    return 0;
}   