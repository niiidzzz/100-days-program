#include <stdio.h>

int main() {
int n, i, product = 1;

printf("Enter value of n: ");
scanf("%d", &n);

for (i = 1; i <= n; i++) {
 if (i % 2 == 0) {
product = product * i;
 }
}
printf("Product of even numbers from 1 to %d = %d\n", n, product);
return 0;
}
