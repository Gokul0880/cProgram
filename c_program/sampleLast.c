#include<stdio.h>
int main()
{
    int n,pos;
    printf("enter n :");
    scanf("%d",&n);
    printf("enter pos :");
    scanf("%d",&pos);
    n=n|(1<<pos-1) ;
    printf("%d\n",n);
    return 0;
}
