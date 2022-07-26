// Online C compiler to run C program online
/*
1.take an array of strings.
2.find out the empty strings.
3.wherever empty string is find,c0py the word as CYIENT at that place. 
*/
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
