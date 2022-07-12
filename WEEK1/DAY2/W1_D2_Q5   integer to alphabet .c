// Online C compiler to run C program online
#include <stdio.h>

int main() {
   long int n,d,sum=0;
    scanf("%d",&n);

    while(n!=0)
    {
        d=n%100;
//printf("%c",d+64);
        sum=sum*100+d;
        n/=100;
    }
    n=sum;
    while(n!=0)
    {
        d=n%100;
printf("%c",d+64);
        sum=sum*100+d;
        n/=100;
    }
}
     
