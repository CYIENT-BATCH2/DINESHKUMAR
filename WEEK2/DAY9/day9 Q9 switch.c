// Online C compiler to run C program online
/*
ALGORITHM:
1.take an array named as G_Msg_switchstatus_Byte
2.calculate all the elements.
3.take a function and pass the array to the function.
4.print all the element values using function.
*/
#include <stdio.h>
void fun(unsigned char G_Msg_switchstatus_Byte[],int n);
int main() {
    unsigned char G_Msg_switchstatus_Byte[3]={0};
    G_Msg_switchstatus_Byte[0]=12;
    G_Msg_switchstatus_Byte[1]=158;
    G_Msg_switchstatus_Byte[2]=128;
    fun(G_Msg_switchstatus_Byte,3);
    return 0;
}
void fun(unsigned char G_Msg_switchstatus_Byte[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",G_Msg_switchstatus_Byte[i]);
    }
}
