#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    switch (num % 2) {
        case 0:
            printf("%d is an Even number.\n", num);
            break;
        case -1 : case 1: 
            printf("%d is an Odd number.\n", num);
            break;
        default:
            printf("Invalid input!\n");
    }

    return 0;
}
