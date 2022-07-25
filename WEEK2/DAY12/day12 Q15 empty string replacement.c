// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    // Write C code here
    int rows,cols;
    char a[][10]={"hyderabad","bangalore","kolkatta","","kolkatta"};
    rows=(sizeof(a)/sizeof(a[0]));
    cols=(sizeof(a[0])/sizeof(a[0][0]));
    for(int i=0;i<rows;i++)
    { 
            if(!(strcmp(a[i],"")))
            {
                printf("empty position is %d index\n ",i);
                strcpy(a[i],"CYIENT");
            }
    }
    printf("after filling empty string:\n");
    for(int i=0;i<rows;i++)
    {
            printf("%s ",a[i]);
        
    }
    return 0;
}