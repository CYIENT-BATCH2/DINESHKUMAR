// Online C compiler to run C program online
/*
steps:
1.read no..
2.reversing data 
3.comparing reverse data and given data

*/
#include <stdio.h>

int main() {
   unsigned int sum=0,d,n,n2;
    scanf("%d",&n2);
    n=n2;
while(n!=0)
{d=n%10;
sum=sum*10+d;
n/=10;
}
if(n2==sum)
printf("palindrome");
else 
printf("not palindrome");
}
