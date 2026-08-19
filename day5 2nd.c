#include <stdio.h>
int main() { 
int tsec , hour , sec , min;
printf("enter time in tsec:");
scanf("%d", &tsec);
hour = tsec/3600;
tsec = tsec%3600;
min = tsec/60;
sec = tsec%60;
printf("%d hour %d min %d sec", hour,min,sec);
return 0;
}
