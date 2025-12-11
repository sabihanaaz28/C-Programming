#include<stdio.h>
void checkOddEven(int N)
/*{
   int r=N%2;
    if(r==0)
    {
        printf("even number");
    }
    else{
        printf("odd number");
    }

    
}*/
//use to bitwise AND operator.
  {
     if(N&1)
    {
    printf("odd number\n");

}
else{
    printf("even number\n");
}
  }

 int main()
 {
    int N=12;
    checkOddEven(N);
    return 0;
}