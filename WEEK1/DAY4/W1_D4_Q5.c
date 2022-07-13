/*
(E)INCREMENT AND DECREMENT
ALGORITHM:
steps 
1.apply the expression as question given .
*/
#include <stdio.h>
int main() {
   int i=10,j=50,k;
    printf("value of k=%d\n",++i+j++);
    printf("value of k=%d\n",i++-++j);
    printf("value of k=%d\n",--i+j++ * i++ -j--);
    printf("value of k=%d\n",(i--+ j++)); 
    return 0;
}
