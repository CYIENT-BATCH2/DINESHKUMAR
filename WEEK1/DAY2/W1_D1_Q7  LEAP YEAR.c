// Online C compiler to run C program online
/*
1. checking all year with %4 %100 %400
2.and counting and printing .
*/
#include <stdio.h>

int main() {
int i,d=0;
for(i=1990;i<=2020;i++)
if((i%4)==0||(i%100)==0||(i%400)==0)
d++;
printf("%d",d);
}
     
