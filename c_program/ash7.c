#include<stdio.h>
int main(){
int i,n,sum=0;
printf("enter n :");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    if (i%2==0){
    sum = sum+i;
}
}
printf("%d",sum);
return 0;

}