#include <stdio.h>
int main() {
float length, breadth, area , perimeter;
printf("enter length:");
scanf("%f", &length);
printf("enter breadth:");
scanf("%f", &breadth);
area = length*breadth;
perimeter= 2*(length + breadth);
printf("perimeter= %.2f\n", perimeter);
printf("area  = %.2f\n", area);
return 0;
}
