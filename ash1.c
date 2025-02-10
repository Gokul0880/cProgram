#include <stdio.h>
int main() {
    char a;

    printf("Enter a character: ");
    scanf("%c", &a);

   if(a>=97 && a<=122){
      printf("a is an lower case ");
   }
   else{
      printf("a is not lower case");
   }    
   return 0;
}
