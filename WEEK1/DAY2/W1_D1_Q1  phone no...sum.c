// Online C compiler to run C program online
/*
1.READ n VALUES
2.extract each digit and sum all those digits and print.
*/
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
