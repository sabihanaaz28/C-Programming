// program to demonstrate sum of natural number using while loop.
#include<stdio.h>
int main()
{
    int i=1,sum=0,n=20;;
    printf("natural number:");
    while(i<=n)
    {
        printf("%d\t",i);
        sum=sum+i;
        i++;

    }
    printf("\n");
    printf("sum:%d\n",sum);
    return 0;
    
}
