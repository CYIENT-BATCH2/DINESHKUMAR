

// Online C compiler to run C program online
/*
1.read n
2.use %x for hex 
3.bit by bit check and print 

*/
#include <stdio.h>

int main() {
    int n,d,sum=0;
    n=204;
    

    printf("%x\n",n);
    for(int i=8;i>=0;i--)
      printf("%d",(n>>i)&1);
}
  