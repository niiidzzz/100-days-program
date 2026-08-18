#include <stdio.h>
int main() {
float celsius , fahrenheit , temp;
printf("enter temp in celsius:");
scanf("%f", &celsius);
fahrenheit = (celsius* 1.8) + 32;
printf("temp in fahrenheit: %.3f", fahrenheit);
return 0 ;
}
