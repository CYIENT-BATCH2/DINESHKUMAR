

// Online C compiler to run C program online
/*
1.read n
2.checking each last 2nd digit no..and first digit
3.sum both

*/
#include <stdio.h>

int main() {
    int n,d,s=0,sum=0;
    scanf("%d",&n);
    if((n<99999)&&(n>10000))
    {
while(n!=0){
    s++;
    d=n%10;
    n/=10;
    if(s==2||s==5)
    sum=sum+d;
}

    }
    printf("%d",sum);
}
  