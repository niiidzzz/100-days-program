#include <stdio.h>
int main() {
char l;
printf("enter letter:");
scanf("%c", &l);

if (l == 'a' || l == 'e' || l=='i' || l=='o' || l=='u') {

   printf("the letter is vowel:");
} else {
   printf("the letter is consonant:");
}
return 0;
}
