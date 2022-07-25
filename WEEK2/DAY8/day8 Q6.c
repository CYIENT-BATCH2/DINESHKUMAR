// Online C compiler to run C program online
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