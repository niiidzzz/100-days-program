#include <stdio.h>
int main() {
int a , b , temp;
printf("enter first number:");
scanf("%d", &a);
printf("enter second number:");
scanf("%d", &b);
printf("before swapping: a = %d, b = %d\n", a, b);
temp = b;
b = a;
a = temp;
printf("after swapping: a = %d, b = %d\n", a,b);
return 0;
}

