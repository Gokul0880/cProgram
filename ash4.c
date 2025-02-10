#include <stdio.h>
int main() {
   int a,b,res;
   char choice;
   printf("enter a number a:");
   scanf("%d",&a);
   printf("enter a number b:");
   scanf("%d",&b);
   printf("enter the choice");
   scanf(" %c",&choice);
   switch(choice)
   { 
    case '+':
    res = a+b;
    printf("%d add res",res);
    break;

    case '-':
    res = a-b;
    printf("%d sub res",res);
    break;

    case '*':
    res = a*b;
    printf("%d mul res",res);
    break;

    case '/':
    res = a/b;
    printf("%d div res",res);
    break;
   
   default:
    printf("enter the valid num");
   }
    return 0;
}





