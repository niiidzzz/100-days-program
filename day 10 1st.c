#include <stdio.h>
int main() {
int a,b,c;
printf("enter three length:");
scanf("%d %d %d", &a ,&b ,&c);
if (a==b && b==c && a==c) {
  printf("equilateral traingle:");
}  else if (a==b || b==c || a==c) {
  printf("isoceles triangle:");
}  else {
  printf("scalene triangle:");
  }

return 0;
}

