#include <stdio.h>
#include <math.h>

int main()
{
    int n, first, last, digits, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    digits = 1;
    int temp = n;

    while (temp >= 10)
    {
        temp = temp / 10;
        digits++;
    }

    first = temp;

    middle = (n % (int)pow(10, digits - 1)) / 10;

    result = last * pow(10, digits - 1) + middle * 10 + first;

    printf("Number after swapping = %d", result);

    return 0;
}
