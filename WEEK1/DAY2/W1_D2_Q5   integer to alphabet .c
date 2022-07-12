// Online C compiler to run C program online
/*
1.read n
2.convert int to alphabet by adding 64 to it 
3.checking each 2digit no.. at a time 
4.reverse the data and print alphabets

*/
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
     
