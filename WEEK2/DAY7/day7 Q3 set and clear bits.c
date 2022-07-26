// Online C compiler to run C program online
/* ALGORITHM:
1.read a register named as ADCONO
2.set the bit position-4,bit position-5,bit position-6.
3.clear the bit positions of 1,2,3,4.*/ 
#include <stdio.h>

int main() {
    // Write C code here
     char ADCON0,CMCON;
     ADCON0=ADCON0|(1<<3);ADCON0=ADCON0|(1<<4);
     ADCON0=ADCON0|(1<<5);ADCON0=ADCON0|(1<<6);
     CMCON=(CMCON>>1)&(~1); CMCON=(CMCON>>2)&(~1);
      CMCON=(CMCON>>3)&(~1); CMCON=(CMCON>>4)&(~1);
    for(int i=1;i<=4;i++)
    {
        printf("%d",(CMCON>>i)&1);
    }
    return 0;
}
