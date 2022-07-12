/*
steps:

1.read data 
2.substract one from given data   -->   (data-1)
3.modulus operation with 11 -->  (data-1)%11
4.((n-1)%11)&&(n>0) data be +ve and divisible by 11 after substract 
5.printing if condition true as  special 

*/

#include <stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  if(!((n-1)%11)&&(n>0))
  printf("special");
  else 
  printf("not a special");
    return 0;
}
