#include<stdio.h>
int main()
{
    /*int num1,num2,num3;
    printf("enter the three number:\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>=num2)
    {
        printf("the greatest number is:%d",num1);
    }
    else if(num2>=num3)
    {
        printf("the greatest number is:%d",num2);
    }
    else
    {
        printf("the greatest number is:%d",num3);
    }*/



    //using compound expression in if_else.
    /*int a=88,b=23,c=34;
    if(a>=b && a>=c)
    {
        printf("a is greater\n");
    }
    else if(b>=a && b>=c)
    {
        printf("b is greater\n");
    }
    else
    {
        printf("c is greater");
    }*/



    //using temporary variable.
    int a=10,b=5,c=6;
    int max=a;
    if(max<b)
    max=b;
    if(max<c)
    max=c;
    printf("%d is the largest number:",max);
    return 0;
    
}