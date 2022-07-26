// Online C compiler to run C program online
/*
ALGORITHM:
1.take an array named as G_Msg_SteeringInformation_Byte with size of 3 elements.
2.calculate the all element's values by using given conditions.
3.take a function and pass the array to the function.
4.print all the values using function.
*/
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
