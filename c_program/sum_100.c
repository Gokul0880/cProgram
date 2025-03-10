#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter the  number: ");
    scanf("%d", &n1);
    printf("Enter the number: ");
    scanf("%d", &n2);
    if((n1+n2)>100){
        if(n1>n2){
        printf("output:%d",n1-n2);
        } else{
            printf("output:%d",n2-n1);
        }
    }
    else
      { printf("output:%d",n1+n2);}
       return 0;
    }