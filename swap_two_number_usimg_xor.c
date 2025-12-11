#include<stdio.h>
int main()
{
    int a=10,b=45;
    printf("before swapping:a=%d b=%d\n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf(" after swapping a=%d b=%d\n",a,b);
    return 0;
}