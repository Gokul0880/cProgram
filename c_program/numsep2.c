#include<stdio.h>
int main(){
int i=1,n,sum=0,result=0;
int count=0;
printf("enter n :");
scanf("%d",&n);
while(n>i)
{

       result =n%10;
       printf("%d",result);
       n/=10;
    }
    

return 0;

}