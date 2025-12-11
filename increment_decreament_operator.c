#include<stdio.h>
int main()
{
    /*int a=8;
    ++a;
    
    printf("%d\n",a);
    printf("%d",a);*/
    
    /*int a=6,b;
    b=++a;
    b=a++;
    printf("%d",b);
    printf("%d",b);
    printf("%d",b);
    printf("%d",b);*/

    int a=2,b=4,c=3,d;
    d=++a+b--+ ++c;
    printf("%d\n%d\n%d\n%d",a,b,c,d);
    return 0;
    
}