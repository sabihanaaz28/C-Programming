// greater the three number.
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter the three number:\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2)
    {
        if(num1>num3){
            printf("the greater number is:%d",num1);
        }
        else{
            printf("the greater number is:%d",num3);
        }
    }
    if(num2>num3)
    {
        printf("the greater number is:%d",num2);
    }
    else
    {
        printf("the greater number is:%d",num3);
    }
    return 0;

}