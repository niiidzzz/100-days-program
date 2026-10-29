#include <stdio.h>

int main()
{
    char date[20];
    int dd, mm, yyyy;

    printf("Enter date (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    if(mm == 4)
        printf("%02d-Apr-%d", dd, yyyy);
    else
        printf("Invalid month");

    return 0;
}
