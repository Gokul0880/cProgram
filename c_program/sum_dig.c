#include <stdio.h>

int main() {
    int n1, n2, value, res1 = 0, res2 = 0,result;
    printf("Enter the  number: ");
    scanf("%d", &n1);
    printf("Enter the number: ");
    scanf("%d", &n2);

    
        while (n1 > 0) {
            value = n1 % 10;
            res1 += value;
            n1 = n1 / 10;
        }
        
        while (n2 > 0) {
            value = n2 % 10;
            res2 += value;
            n2 = n2 / 10;
        }
        
    
result=(res1>res2)? res1:res2;
printf("result=%d",result);

    return 0;
}
