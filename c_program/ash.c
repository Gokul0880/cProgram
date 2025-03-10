#include <stdio.h>
int main() {
   int a,b;
   printf("enter a number a:");
   scanf("%d",&a);
   
   if (a>=0){
   printf("%d positive ",a);
   } else{
      printf("%d negative");
   }
   return 0;
}
