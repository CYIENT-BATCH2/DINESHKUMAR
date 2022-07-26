// Online C compiler to run C program online
/*
1.take an array with compile time initialisation.
2.take a function and pass the array as argument to the function.
3.sort the elements of the array element buy element
4.after sorting print all the elements of the array.
*/
#include <stdio.h>
void selectionsort(int arr[],int);
static int i=0;
int main() {
    // Write C code here
    int arr[5]={20,12,10,15,2},size;
     
    size=sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,size);
    for(int ind=0;ind<size;ind++)
    {
        printf("%d ",arr[ind]);
    }
    return 0;
}
void selectionsort(int arr[],int n)
{
    int temp;
    if(i==4)
    return;
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    i++;
    if(i<5)
    selectionsort(arr,n);
}
