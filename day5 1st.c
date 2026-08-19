#include <stdio.h>
#include <math.h>
int main() {
float SI, p,r,t, A ,CI;
printf("enter the value of principal:");
scanf("%f", &p);
printf("enter the value of time:");
scanf("%f", &t);
printf("enter the value of rate:");
scanf("%f", &r);
SI = (p*r*t)/100;
A = p*pow(1+ r/100, t);
CI = A - p;
printf("simple interest is: %.2f ", SI);
printf("compound interest is : %.2f", CI);
return 0;
}
