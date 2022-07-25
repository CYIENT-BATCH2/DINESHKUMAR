// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int a[5]={25,45,89,15,82},temp;
    for(int i=0;i<4;i++)
    {
       for(int j=i+1;j<=4;j++)
       {
           if(*(a+i)>*(a+j))
           {
           temp=*(a+i);
           *(a+i)=*(a+j);
           *(a+j)=temp;
           }
       }
    }
    printf("after swapping:\n");
    for(int i=0;i<=4;i++)
    {
        printf("%d ",*(a+i));
    }
    return 0;
}