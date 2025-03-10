#include<stdio.h>
int factorial(int n);
int main(){ 
    int n,i,fact = 1;
printf("enter the num : ");
scanf("%d",&n);
printf("%d",fact);
return 0; }


int factorial(int n){
int i,fact=1;
for (i=n;i>0;i--){
    fact = fact*i;
}
return fact;
}
































