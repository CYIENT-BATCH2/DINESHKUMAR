// Online C compiler to run C program online
/*
steps:
1.read 5 integer values
2.checking every two varibles  whether which is grater .
3.swapping two no... if grater.
4.after proper assending it print .

*/
#include <stdio.h>

int main() {
    int t,n1,n2,n3,n4,n5;
    scanf(" %d %d%d%d%d",&n1,&n2,&n3,&n4,&n5);
loop:
if(n1>n2)
{t=n1;  n1=n2;  n2=t;
goto loop;} 

if(n2>n3)
{t=n2;  n2=n3;  n3=t;
goto loop;} 

if(n3>n4)
{t=n3;  n3=n4;  n4=t;
goto loop;} 

// if(n5>n1)
// {t=n5;  n1=n5;  n5=t;
// goto loop;} 
printf("after assending %d %d %d %d %d",n1,n2,n3,n4,n5);
}
