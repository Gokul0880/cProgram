#include<stdio.h>
int add();
int main()
{
    printf("%d",add(8,11));
}
int add(int a,int b)
{  
    int c = a+b;
    return c;
}