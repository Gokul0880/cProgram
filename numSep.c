#include<stdio.h>
int main(){
    int n ,result=0,count = 0;
    printf("Enter value :");
    scanf("%d",&n);
    while (n>0){
        result =n%10;
        count++;
        n/=10;
    }
    printf("digits = %d",count);
     return 0;
    
}