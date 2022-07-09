// Online C compiler to run C program online
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
