// Online C compiler to run C program online
#include <stdio.h>
void fun(unsigned char G_Msg_SteeringInformation_Byte[],int n);
int main() {
    unsigned char G_Msg_SteeringInformation_Byte[3];
    G_Msg_SteeringInformation_Byte[0]=3;
    G_Msg_SteeringInformation_Byte[1]=241;
    G_Msg_SteeringInformation_Byte[2]=0;
    fun(G_Msg_SteeringInformation_Byte,3);
    return 0;
}
void fun(unsigned char G_Msg_SteeringInformation_Byte[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%u ",G_Msg_SteeringInformation_Byte[i]);
    }
}