// Online C compiler to run C program online
/*
ALGORITHM:
1.take the variable named as T0CON
2.set the bit positions of 4 and 8 of the regiser
3.find the bit positions of 1,2 and 3.
*/
#include <stdio.h>

int main() {
    // Write C code here
    int T0CON;
    T0CON=0xF3;
    T0CON=T0CON|(1<<4);
    T0CON=T0CON|(1<<8);
    printf("T0PS0 is %d\n",(T0CON>>1)&1);
    printf("T0PS1 is %d\n",(T0CON>>2)&1);
    printf("T0PS2 is %d\n",(T0CON>>3)&1);
    return 0;
}
