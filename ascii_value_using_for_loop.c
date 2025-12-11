//program to check ascii value using for loop.
#include<stdio.h>
int main()
{
    char i;
    printf("alphabetd from AtoZ are:\n");
    for(i='A';i<='Z';i++)
    {
        printf("%d\t",i);
    }
    printf("\n");
    printf("alphabetd from atoz are:\n");
    for(i='a';i<='z';i++)
    {
        printf("%d\t",i);
    }
    return 0;
    
}