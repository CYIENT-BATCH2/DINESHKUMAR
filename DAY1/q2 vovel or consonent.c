// Online C compiler to run C program online
#include <stdio.h>

int main() {
char c;
  scanf("%c",&c);
 if(((c>96)&&(c<123))||((c>64)&&(c<91)))
 {
     
     if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
  printf("vovel");
  else 
  printf("consonant");
 
}
else 
printf("give a valid char");
}