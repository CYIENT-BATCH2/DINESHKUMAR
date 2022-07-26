// Online C compiler to run C program online
/*
ALGORITHM:
1.take an array with compile time initialisation.
2.read a number from the user 
3. serach the element based on the root value
4.if serching number is grater than root search from index-0 to root elemnt.
5.if searching number is less tahn the root element search from root to the last element of the array.
*/
#include <stdio.h>

int main() {
    // Write C code here");
    int a[]={2,5,8,12,16,23,38,56,72,91},rows,root,x,num;
    rows=sizeof(a)/sizeof(a[0]);
    x=(rows/2)-1;
    root=a[x];
    printf("enter the number that u want to search:");
    scanf("%d",&num);
    if(num<root)
    {
        for(int i=0;i<x;i++)
        {
            if(num==a[i])
            printf("index of searched num is %d",i);
        }
    }
    else
    {
        for(int i=x;i<rows;i++)
        {
            if(num==a[i])
            printf("index of searched element is %d",i);
        }
    }
    return 0;
}
