#include<stdio.h>
int main()
{
    float f,c;
    printf("enter temprature in farenhiet:\n");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("tempreture in celcius=%f",c);
    return 0;
}