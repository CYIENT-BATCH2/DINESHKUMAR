// Online C compiler to run C program online
#include <stdio.h>
void fun(unsigned char arr[],int n);
int main() {
  unsigned char arr[5]={0};
  arr[0]=1;
  arr[1]=244;
  arr[2]=0;
  arr[3]=50;
  fun(arr,5);
    return 0;
}
void fun(unsigned char arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%u ",arr[i]);
    }
}
