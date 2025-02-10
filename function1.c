#include<stdio.h>
int add();
int main()
{
    printf("%d",add());
}
int add()
{  
    int a,b;
    printf("enter a number a:");
   scanf("%d",&a);
   printf("enter a number b:");
   scanf("%d",&b);
    int c = a+b;
    return c;
}


