// program to find the ascii value using the while loop.
#include<stdio.h>
int main()
{
    char i;
    printf("alphaabets from  AtoZ are:\n");
    i='A';
    while(i<='Z')
    {
        printf("character:%c ASCII value:%d\n",i,i);
        i++;
    }
    printf("\n");
    printf("alphaabets from  atoz are:\n");
    i='a';
    while(i<='z')
    {
        printf("character:%c ASCII value:%d\n",i,i);
        i++;
    }
    return 0;

} 