/*(H)CONDITIONAL OPERATOR 
ALGORITHM:
steps 
1.apply the expression as question given .
*/
1)#include <stdio.h>
int main() {
    int n,n1;
  printf("enter the number\n");
  scanf("%d%d",&n,&n1);
 (n>n1)?printf("n=%d is biggest",n):printf("n1=%d is biggest",n1);
    return 0;
}
2)#include <stdio.h>
int main() {
    int n;
  printf("enter the number\n");
  scanf("%d",&n);
 (n%2==0)?printf("n is even number"):printf("n1 is odd number");
    return 0;
}
3)#include <stdio.h>
int main() {
    int n;
  printf("enter the number\n");
  scanf("%d",&n);
 (n>0)?printf("n is positive number"):printf("n1 is negative number");
    return 0;
}
