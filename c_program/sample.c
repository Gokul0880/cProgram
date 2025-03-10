#include <stdio.h>
int main() {
   int a,b;
   printf("enter a number a:");
   scanf("%d",&a);
   printf("enter a number b:");
   scanf("%d",&b);
   if (a>b){
   printf("%d",a);
   } else{
      printf("%d",b);
   }
   return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter value :");
    scanf("%d",&n);
    //234
    int ones,tens,hundreads;
    ones = n%100%10;
    tens = (n%100 - ones)/10;
    hundreads = (n-(10*tens)-ones)/100;
    printf("last = %d \n",ones);
    printf("middle = %d \n",tens);
    printf("first = %d",hundreads);
    return 0;
}