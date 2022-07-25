// Online C compiler to run C program online
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