#include<stdio.h>
int main()
{
    int a,b,c,d,e,total;
    float per;
    printf("enter the marks of 5 subject:\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    per=(total/500.0)*100;
    printf("total marks=%d percentage=%f",total,per);
    return 0;

}