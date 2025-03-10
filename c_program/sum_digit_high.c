#include <stdio.h>

int main() {
    int n1, n2, sum1, sum2, value, res1 = 0, res2 = 0;
    printf("Enter the first 3-digit number: ");
    scanf("%d", &n1);
    printf("Enter the second 3-digit number: ");
    scanf("%d", &n2);

    sum1 = (n1 % 10) + (n1 / 100);
    sum2 = (n2 % 10) + (n2 / 100);

    if (sum1 > sum2) {
        while (n1 > 0) {
            value = n1 % 10;
            res1 += value;
            n1 = n1 / 10;
        }
        printf("Output: %d\n", res1);
    } else {
        while (n2 > 0) {
            value = n2 % 10;
            res2 += value;
            n2 = n2 / 10;
        }
        printf("Output: %d\n", res2);
    }

    return 0;
}
