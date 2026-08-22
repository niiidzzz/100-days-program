#include <stdio.h>

int main() {
    int days;
    float fine = 0;

    printf("Enter number of late days: ");
    scanf("%d", &days);

    if (days <= 5) {
        fine = 0;
        printf("Fine is: %.2f", fine);
    }
    else if (days <= 10) {
        fine = days * 2;
        printf("Fine is: %.2f", fine);
    }
    else if (days <= 20) {
        fine = days * 4;
        printf("Fine is: %.2f", fine);
    }
    else if (days <= 30) {
        fine = days * 6;
        printf("Fine is: %.2f", fine);
    }
    else {
        printf("Membership cancelled");
    }

    return 0;
}
