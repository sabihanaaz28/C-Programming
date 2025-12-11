//program to find the table using number while loop.
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter the number: ");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("%d\n",n*i);
         i++;
    }
    return 0;
}