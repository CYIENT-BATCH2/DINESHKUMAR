// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   char num;
   printf("enter a number:\n");
   scanf("%d",&num);
   char *ptr=&num;
   if(*ptr==num)
   printf("LITTILE ENDIAN\n");
   printf("we can't convert CPU byte order from littile endian to big endian");
    return 0;
}