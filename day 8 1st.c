#include <stdio.h>
int main() {
char ch;
printf("enter character:");
scanf("%c", &ch);
if ( ch >='A' && ch <='Z') {
   printf("uppercase alphabet:");
} else if ( ch >='a' && ch <='z') {
   printf("lowercase alphabet:");
} else {
   printf("special character:");
}
return 0;
}
