/*
steps:
1.read n
2.check whether it is 6 digit or not 
3.extrating each digit from no... and check if it contain 0 in those digits
4.if not reverse that no .. by reverse logic 
5.print if non zero digit involved in given no...


*/
#include <stdio.h>

int main() {
char c;
unsigned int d,rev=0,n;
scanf("%d",&n);
if((n>111111)&&(n<999999))
{
    while(n!=0){
        d=n%10;
        rev=rev*10+d;
        n/=10;
        if(d==0)
        { 
            printf("give non zero contain values");
        return 0;
        
           
        }
    }
    printf("reverse no  is %d ",rev);
    
    
}
else
printf("give 6 digits non zero contain no............");
}
