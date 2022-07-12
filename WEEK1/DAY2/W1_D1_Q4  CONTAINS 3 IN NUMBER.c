/*
1.read n1 and n2 
2.check given range 
3.check whether digit contain 3 or nor if exist print that no...
4.other wise increment value
*/
#include <stdio.h>
int main()
{
int n1,n2,r=0,k=0,s,t=0;
scanf("%d %d",&n1,&n2);
l:
if(n1<=n2)
{k=n1;
s=n1;
whl:
if(s!=0)
{
    r=s%10;
    if(r==3){
     printf(" %d",k);  
        goto out;
    }s/=10; 
    goto whl;
}
out:
n1++;
goto l;
}
}


