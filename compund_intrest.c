#include<stdio.h>
#include<math.h>
int main()
{
    double principle=10000;
    double rate=5;
    double time=2;
    
    double amount=principle*((pow((1+rate/100),time)));
    double CI=amount-principle;
    printf("compound intrest is:%lf",CI);
    return 0;
    
}