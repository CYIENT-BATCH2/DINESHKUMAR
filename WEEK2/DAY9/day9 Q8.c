// Online C compiler to run C program online
/*ALGORITHM
1.read the variables as ADC0N0 and CMCON
2.set the bit positions of 1,4 and 7.
3.find the bit positions of 4,7 and 8 in ADCONO.
*/
#include <stdio.h>
int main() {
    // Write C code here
    int ADCON0=0x06,CMCON;
   ADCON0=ADCON0|(1<<4);
    ADCON0=ADCON0|(1<<7);
    ADCON0=ADCON0|(1<<8);
    printf("CIS is %d\n",(ADCON0>>4)&1);
    printf("C1OUT is %d\n",(ADCON0>>7)&1);
    printf("C2OUT is %d\n",(ADCON0>>8)&1);
    return 0;
}
