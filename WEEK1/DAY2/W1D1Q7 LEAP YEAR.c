// Online C compiler to run C program online
#include <stdio.h>

int main() {
int i,d=0;
for(i=1990;i<=2020;i++)
if((i%4)==0||(i%100)==0||(i%400)==0)
d++;
printf("%d",d);
}
     