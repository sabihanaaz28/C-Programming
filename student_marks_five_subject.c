#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,per;
    printf("enter the marks of five student:\n");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    per=(m1+m2+m3+m4+m5)/5;
    printf(" the percentage of all subjeact:%d\n",per);
    if(per>=60)
    {
        printf("first division");
    }
    else if(per>=50&& per<=59)
    {
        printf("second division");
    }
    else if(per>=40 && per<=49)
    {
        printf("third division");
    }
    else 
    {
        printf(" fail"); 
    }
    return 0;

}