

// Online C compiler to run C program online
/*
1.read n
2.use %x for hex 
3. print after n shifts

*/
#include <stdio.h>

int main() {
    int n,b,sum=0;
scanf("%x",&n);
scanf("%d",&b);
n>>=b;
      printf("%d %x",n,n);
}
  