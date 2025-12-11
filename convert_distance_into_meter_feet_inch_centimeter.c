#include<stdio.h>
int main()
{
    int km,m,cm;
    float inch,feet;
    printf("enter the distance in a kilometer:");
    scanf("%d",&km);
    m=km*1000;
    cm=m*100;
    feet=cm/305;
    inch=feet*12;
    printf("m=%d cm=%d feet=%f inch=%f ",m,cm,feet,inch);
    return 0;
}