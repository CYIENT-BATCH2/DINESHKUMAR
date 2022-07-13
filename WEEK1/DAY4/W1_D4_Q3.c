
/*  (C)LOGICAL OPERATOR
ALGORITHM:
steps 
1.apply the expression as question given .
*/
#include <stdio.h>
int main() {
    int i=10,j=20,k;
   printf("value of k=%d\n",i&&j);
   printf("value of k=%d\n",i||j);
    printf("value of k=%d\n",k=!i);
     int i=10,j=0,k;
    printf("value of k=%d\n",i&&(j=20));
    printf("value of k=%d\n",i||(j=20));
     int i=0,j=0,k=30,l;
    printf("value of l=%d\n",i||(j=20)&&k);
     int i=10,j=20,k=0,l;
    printf("value of l=%d\n",i&&j||j&&k);
    printf("value of l=%d\n",i||j&&i||k);
    return 0;
}
