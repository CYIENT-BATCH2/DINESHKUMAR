// Online C compiler to run C program online
#include <stdio.h>

int main() {
  long int num;
  printf("enter a number:");
  scanf("%ld",&num);
  printf("binary equivalent is\n");
  for(int i=63;i>=0;i--)
  {
      printf("%d",(num>>i)&1);
  }
  for(int i=63;i>=0;i=i-2)
  {
      if(((num>>i)&1)!=((num>>(i-1))&1))
      {
          num=num^(1<<i);
          num=num^(1<<(i-1));
      }
  }
  printf("\n");
  printf("after swapping:\n");
   for(int i=63;i>=0;i--)
  {
      printf("%d",(num>>i)&1);
  }
    return 0;
}