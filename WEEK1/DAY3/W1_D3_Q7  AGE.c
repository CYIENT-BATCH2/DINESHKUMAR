

// Online C compiler to run C program online
/*
1.read y , m
2.substract from 2022 and 7 

*/
#include <stdio.h>

int main() {
    int y,m,m2;
     printf("enter year and month ");
scanf("%d",&y);
scanf("%d",&m);
if(y<=2022&&m>0&&m<=12)
{
    
if((7-m)<0)
y+=1;;
m2=(12+7)-m;
      printf("%d %d",2022-y,m2);
}
}