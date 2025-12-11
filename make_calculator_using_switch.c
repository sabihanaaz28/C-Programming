//proram to make calculator using switch statement.
#include<stdio.h>
#include<float.h>
int main()
{
    char op;
    double a,b,res;
    printf("enter the operator(+,-,*,/):");
    scanf(" %c",&op);
    printf("enter two operands:");
    scanf("%lf %lf",&a,&b);
    switch(op)
    {
        case '+':
        res=a+b;
        break;
        case '-':
        res=a-b;
        break;
        case '*':
        res=a*b;
        break;
        case '/':
        res=a/b;
        break;
        defoul:
        printf("error! incorrect operator value\n");
        return 1;
        
    }
    
    
}