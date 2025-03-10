#include<stdio.h>
int main(){
    int n1,value1,value2,res1 = 0,res2 = 0;
    printf("Enter the first 3-digit number: ");
    scanf("%d", &n1);

    while(n1>0){
        value1 = n1 % 10;
        res1 +=value1;
        n1 /=10;
    }

    if (res1<10){
        printf("output = %d",res1);
    } else {
        while(res1>0){
            value2 = res1 % 10;
        res2 +=value2;
        res1 /=10;
        }
        printf("Output = %d",res2);   
    }
    return 0;
}