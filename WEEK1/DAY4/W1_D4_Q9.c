/*
(I) BITWISE OPERATOR
ALGORITHM:
steps 
1.apply the expression as question given .
*/
1)#include <stdio.h>
int main() {
    int n,p;
  printf("enter the number\n");
  scanf("%d%d",&n,&p);
  printf("n=%d",n|1<<p);
    return 0;
}
2)#include <stdio.h>
int main() {
    int n,p;
  printf("enter the number\n");
  scanf("%d%d",&n,&p);
  printf("n=%d",n&~(1<<p));
    return 0;
}
3)#include <stdio.h>
int main() {
    int n;
  printf("enter the number\n");
  scanf("%d",&n);
  printf("n=%d",~n);
    return 0;
}
#include <stdio.h>
int main() {
    int n,m=1;
  printf("enter the number\n");
  scanf("%d",&n);
  while(m < n)
    m = m * 2;
    if(m == n)
        printf("%d is Power of 2 \n",n);
    else
        printf("%d is not power of 2 \n",n);
   return 0;
}
