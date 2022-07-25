// Online C compiler to run C program online
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