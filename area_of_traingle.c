#include<stdio.h>
int main()
{
    int base,height,area;
    printf("enter the base and height:\n");
    scanf("%d%d",&base,&height);
    {
        area=base*height/2;
        printf("area of traingle is:%d",area);
    }
    return 0;
}