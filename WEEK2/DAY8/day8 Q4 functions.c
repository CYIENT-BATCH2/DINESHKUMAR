// Online C compiler to run C program online
/*
1.read two variables named as byte and bit
2.take a function with two arguments.first argument should be byte number and second argument will be bit position number.
3.clear the bit position in corresponding byte as per user input.
*/
#include <stdio.h>
void fun(int a,int b);
  int num=0x12345678;
    char *ptr=&num;
int main() {
    // Write C code here
    int bit,byte;
    printf("enter byte number:");
    scanf("%d",&byte);
    printf("enter bit position:");
    scanf("%d",&bit);
    fun(byte,bit);
    return 0;
}
void fun(int a,int b)
{
    int x;
    x=(*(ptr+a))&(~(1<<b));
    printf("%d",(x>>b)&1);
}
