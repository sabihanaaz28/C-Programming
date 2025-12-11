#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter the two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("before swapping:a=%d,b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping:a=%d,b=%d\n",a,b);
    return 0;
    


}