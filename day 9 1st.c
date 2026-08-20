#include <stdio.h>
#include <math.h>
int main() {
float a ,b, c , D, root1,root2;
printf("enter a:");
scanf("%f",&a);
printf("enter b:");
scanf("%f", &b);
printf("enter c:");
scanf("%f", &c);
D = (b*b) - 4*a*c;
 
root1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
root2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
 
printf("root 1 is: %.2f", root1);
printf("root 2 is: %.2f", root2);

D = (b*b) - 4*a*c;
if (D>0) {
   printf("the roots are real and different\n:");
}  else if (D==0) {
   printf("roots are real and same\n:");
}  else {
   printf("roots are imaginary\n:");
}
return 0;
}
