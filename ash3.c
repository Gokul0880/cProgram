#include<stdio.h>
int main(){
     int a;
     printf("enter a number a:");
     scanf("%d",&a);
     char  *res = (a%3==0 && a%5==0) ? "a is divisible by 3" : "it is not divisible by 3 and 5";
     printf("%s",res);
     return 0; 



}
