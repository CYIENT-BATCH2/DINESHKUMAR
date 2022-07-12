// Online C compiler to run C program online
#include <stdio.h>

int main() {
   long int n,d,sum=0,i;
    // Write C code here
   // printf("Hello world");
    scanf("%ld",&n);
    printf("given number is %ld",n);
    i=0;
    while(n!=0)
    {   
        d=n%10;
        sum=sum+d;
        n/=10;
        i++;
           }
    
     printf("sum is %ld",sum);
    return 0;
}
