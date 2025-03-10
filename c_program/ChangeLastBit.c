#include <stdio.h>

void changeBit(int n);
int changeLastBit(int n);

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    n = changeLastBit(n);
    printf("Changed binary value: ");
    
    if (n == 0) {
        printf("0");
    } else {
        changeBit(n);  
    }
    
    printf("\n");
    return 0;
}

void changeBit(int n) {
    if (n == 0) {
        return;
    }
    changeBit(n / 2);
    printf("%d", n % 2);
}

    int changeLastBit(int n) {
        return n ^ 1;
}
