// program to find the odd and even number from 1to10.
#include<stdio.h>
int main()
{
    
    int i;
    for(i=1;i<=10;i++)
    if(i%2==0)
    {
        printf("%d is a even number:\n",i);
    }
    else{
      
        printf("%d is a odd number:\n",i);
    }
    return 0;
}