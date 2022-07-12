// Online C compiler to run C program online
/*
1. read integer data 
2.checking each bit whether it is one or zero.


*/
#include <stdio.h>

int main() {
  unsigned  int n;
   
    // Write C code here
   // printf("Hello world");
    scanf("%d",&n);
  if(n>=10&&n<=99)
 {
     for(int i=31;i>=0;i--)
     printf("%d",(n>>i)&1);
 }
     
 
}
