/*
steps:
1.read charecter.
2.check whether the data is alphbet or not 
3.if that charecter is vowel or consonant.
4.print with checking with that.
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
