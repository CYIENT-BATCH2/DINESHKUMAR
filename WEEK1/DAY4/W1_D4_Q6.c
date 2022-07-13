/*
(F)SHIFT OPERATOR
ALGORITHM:
steps 
1.apply the expression as question given .
*/

#include <stdio.h>
int main() {
   int i=10,j=2,k;
    printf("value of k=%d\n",i<<j);
    printf("value of k=%d\n",i>>j);
    printf("value of k=%d\n",(i&&j)<<j);
    printf("value of k=%d\n",(i||j)>>j);
     printf("value of k=%d\n",(i&j)<<i);
    printf("value of k=%d\n",(i||j&&i));  
    return 0;
}
