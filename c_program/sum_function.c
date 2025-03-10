#include <stdio.h>

int sum_series(int n);

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Sum of series = %d\n", sum_series(n));
    return 0;
}

int sum_series(int n) {
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum = sum + i;
    }
    return sum;
}
