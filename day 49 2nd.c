#include <stdio.h>

int main()
{
    char str[100];
    int i, last = 0;

    printf("Enter your full name: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            printf("%c. ", str[0]);
            break;
        }
    }

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
            last = i + 1;
    }

    for(i = last; str[i] != '\0' && str[i] != '\n'; i++)
        printf("%c", str[i]);

    return 0;
}
