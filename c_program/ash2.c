#include <stdio.h>
int main() {
   int a,b,c;
   printf("enter a number a:");
   scanf("%d",&a);
   printf("enter a number b:");
   scanf("%d",&b);
   printf("enter a number c:");
   scanf("%d",&c);
   if(a>b && a>c)
   {
     printf("%d",a);
   } 
   else if(b>a && b>c)
   {
     printf("%d",b);
   } 
   else
   {
      printf("%d",c);
   }
   return 0;
}
