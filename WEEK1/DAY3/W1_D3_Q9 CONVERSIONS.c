

// Online C compiler to run C program online
/*
1.read c
2.check alpha or not

*/
#include <stdio.h>

int main() {
    int n=0xff,m=0xAA,k,p=1,sum =0,sum1=0;
    int d,l;
    //d=10001,l=1010101;
    scanf("%d",&d);
    scanf("%d",&l);
    /**      a      **/
     printf("oxFF binary is  \n");
    for(int i=7;i>=0;i--)
    printf("%d",(n>>i)&1);
     printf("\n");
     
     /**  b   **/
     
     while(d!=0)
     {
         k=d%10;
   
     sum=p*k+sum;
     d/=10;
         p*=2;
     }
     printf("00010001 in hex is = %d %x\n",sum,sum);
     
     
     
     /**       c         **/
     
     
      printf("oxAA binary and hex is  \n");
      for(int J=7;J>=0;J--)
    printf("%d",(m>>J)&1);
      printf("\n");
     printf("%d\n",m);
     
     
     
     p=1;
    /**   d        **/
     while(l!=0)
     {
         k=l%10;
   
     sum1=p*k+sum1;
     l/=10;
         p*=2;
     }
     
     printf("01010101 in hex is = %d %x\n",sum1,sum1);

}