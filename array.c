#include<stdio.h>
int main(){
    int arr[8];
    for (int i=0;i<8;i++){
        printf("Enter the value of %d :",i);
        scanf("%d",&arr[i]);
    }
    for (int j=0;j<8;j++){
        printf("Eleent of array %d \n",arr[j]);
    }
    return 0;
    }