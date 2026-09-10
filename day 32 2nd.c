#include <stdio.h>

int main() {
    int n, temp, digit;
    int count[10] = {0};
    int i, max = 0, result = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0) {
        digit = temp % 10;
        count[digit]++;
        temp = temp / 10;
    }

    for (i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            result = i;
        }
    }

    printf("Digit occurring most times: %d", result);

    return 0;
}

