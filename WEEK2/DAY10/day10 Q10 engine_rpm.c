// Online C compiler to run C program online
/*
1.take an array named as arr with size of 5 elements
2.calculate all the elements.
3.take a function and pass the rray to the function 
4.print all the values of the array using function.
*/
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
