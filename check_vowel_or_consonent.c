// ccheck vowel or consonent using the function.
#include<stdio.h>
#include<string.h>
int isvowel(char ch)
{
    char vowels[]="aeiouAEIOU";
    return(strchr(vowels,ch)!=NULL);
}
int main()
{
    if(isvowel('a'))
    printf(" a is vowel\n");
    else
    printf("a is consonent\n");
    return 0;
    
    
    
}
