#include<stdio.h>
int main(){
int i,pow,j=1;
int result = 1;
printf("enter i :");
scanf("%d",&i);
printf("enter pow :");
scanf("%d",&pow);
while(j<=pow)
{
   result = result*i;
   j++;
}
printf("%d",result);
return 0;

}