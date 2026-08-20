#include <stdio.h>
int main() {
int p,a,b,c,d,f;
printf("enter percentage:");
scanf("%d", &p);
if (p<=100 && p>=90) {
    printf("a grade");
}  else if (p<=89 && p>=80) {
    printf("b grade");
}  else if (p<=79 && p>=70) {
   printf("c grade");
   } else if (p<=69 && p>=60) {
   printf("d grade");
}   else {
    printf("f grade");
}
return 0;
}

