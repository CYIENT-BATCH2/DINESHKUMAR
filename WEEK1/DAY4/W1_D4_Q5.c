(E)INCREMENT AND DECREMENT
#include <stdio.h>
int main() {
   int i=10,j=50,k;
    printf("value of k=%d\n",++i+j++);
    printf("value of k=%d\n",i++-++j);
    printf("value of k=%d\n",--i+j++ * i++ -j--);
    printf("value of k=%d\n",(i--+ j++)); 
    return 0;
}
