#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter your full name: ");
    fgets(str, sizeof(str), stdin);

    printf("Initials: ");

    for(i = 0; str[i] != '\0'; i++)
    {
        if(i == 0 && str[i] != ' ')
            printf("%c", str[i]);
        else if(str[i] == ' ' && str[i + 1] != ' ' &&
                str[i + 1] != '\0' && str[i + 1] != '\n')
            printf("%c", str[i + 1]);
    }

    return 0;
}
