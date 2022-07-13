/*
(G)ASSIGNMENT OPERATOR
ALGORITHM:
steps 
1.apply the expression as question given .
*/
1)#include <stdio.h>
int main() {
   int i,j,k=0;
    printf("enter the two numbers\n");
    scanf("%d%d",&i,&j);
    printf("before i=%d j=%d\n",i,j);
    k=i;
    i=j;
    j=k;
    printf("after i=%d j=%d\n",i,j);
    return 0;
}
2)#include <stdio.h>
int main() {
   int i,j;
    printf("enter the two numbers\n");
    scanf("%d%d",&i,&j);
    printf("before i=%d j=%d\n",i,j);
    i=i+j;
    j=i-j;
    i=i-j;
    printf("after i=%d j=%d\n",i,j);
    return 0;
}
