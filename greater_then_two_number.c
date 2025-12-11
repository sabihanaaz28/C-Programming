#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter the two number:\n");
    scanf("%d%d",&num1,&num2);
    if(num1>=num2)
    {
        printf("the number is greater:%d",num1);
    }
    else
    {
        printf("the greater number is:%d",num2);
    }
    return 0;   
}