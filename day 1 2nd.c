#include <stdio.h>
int main() {
int a , b , sum ,subtraction, multiplication ,division;
printf("enter two numbers:");
scanf("%d %d", &a ,&b);
sum = a+b;
subtraction = a - b;
multiplication = a*b;
division = a/b;
printf("sum = %d", sum);
printf("subtraction = %d", subtraction);
printf("multiplication = %d", multiplication);
printf("division = %d", division);
return 0 ;
}
