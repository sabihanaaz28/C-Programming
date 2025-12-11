#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks:\n");
    scanf("%d",&marks);
    if(marks<=100&&marks>=80)
    {
        printf("student is first division\n");

    }
    else if(marks<=80 && marks>=60)
    {
        printf("student is second division\n");
    }
    else if(marks<=60 && marks>=40)
    {
        printf("student is third division\n");
    }
    else{
        printf("student is fail");
    }
    return 0;
}