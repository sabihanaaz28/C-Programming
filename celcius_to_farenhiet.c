#include<stdio.h>
int main()
{
    float c,f;
    printf("enter tempreture in celcius:\n");
    scanf("%f",&c);
    f=(c-32)*9/5+32;
    printf("tempreture in faranhiet:%.2f\n",f);
    return 0;
}