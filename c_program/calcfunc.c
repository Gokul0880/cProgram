#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
void calculator(int a, int b, char choice);

int main() {
    int a, b;
    char choice;

    printf("Enter a number a: ");
    scanf("%d", &a);

    printf("Enter a number b: ");
    scanf("%d", &b);

    printf("Enter your choice (+, -, *, /): ");
    scanf(" %c", &choice); 

    calculator(a, b, choice); 

    return 0;
}


int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}


int multiply(int a, int b) {
    return a * b;
}


int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0; 
    }
    return a / b;
}


void calculator(int a, int b, char choice) {
    int result;

    switch (choice) {
        case '+':
            result = add(a, b);
            printf("Result of addition: %d\n", result);
            break;

        case '-':
            result = subtract(a, b);
            printf("Result of subtraction: %d\n", result);
            break;

        case '*':
            result = multiply(a, b);
            printf("Result of multiplication: %d\n", result);
            break;

        case '/':
            result = divide(a, b);
            if (b != 0) {  
                printf("Result of division: %d\n", result);
            }
            break;

        default:
            printf("Invalid choice. Please enter +, -, *, or /.\n");
    }
}
