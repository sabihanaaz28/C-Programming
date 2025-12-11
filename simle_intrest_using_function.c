#include<stdio.h>
float smpInt(float p,float r,float t)
{
    return(p*r*t)/100;
}
int main()
{
    float P=1000,R=12,T=1,SI;
    SI=smpInt(P,R,T);
    printf("simple intrest:%.2f",SI);
    return 0;
}