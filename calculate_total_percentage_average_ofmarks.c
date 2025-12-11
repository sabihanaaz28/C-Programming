#include<stdio.h>
int main()
{
    int mark1,mark2,mark3,mark4,mark5,total;
    float per,avg;
    printf("enter the marks of 5 subject=\n");
    scanf("%d%d%d%d%d",&mark1,&mark2,&mark3,&mark4,&mark5);
    total=mark1+mark2+mark3+mark4+mark5;
    per=(total/500.0)*100;
    avg=total/5.0;
    printf("total marks=%d percentage=%.2f average=%.2f",total,per,avg);
    return 0;

}

