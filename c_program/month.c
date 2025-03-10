#include <stdio.h>

int getDaysInMonth(int month) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return 28;
        default:
            return -1;
    }
}

int main() {
    int month, days;

    printf("Enter the month number (1-12) : ");
    scanf("%d", &month);
    days = getDaysInMonth(month);

    if (days == -1)
        printf("Invalid input! Please enter a number between 1 and 12.\n");
    else if (month == 2)
        printf("This month has 28 or 29 days.\n");
    else
        printf("This month has %d days.\n", days);

    return 0;
}
