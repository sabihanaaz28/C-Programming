// program to display alphabets using ASCII value.
#include<stdio.h>
int main()

{
    int i;
    printf("alphabets from (A-Z) are:\n");
    for(i=65;i<=90;i++)
    {
        printf("%d\t",i);
    }
    printf("\n alphabets from(a-z) are:\n");
        for(i=90;i<=122;i++)
        {
            printf("%d\t",i);
        }
        return 0;

    
}