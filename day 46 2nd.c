#include <stdio.h>

int main()
{
    char str[100];
    int i, j;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            for(j = 0; j < i; j++)
            {
                if(str[i] == str[j])
                {
                    printf("First repeating character = %c", str[i]);
                    return 0;
                }
            }
        }
    }

    printf("No repeating lowercase alphabet found");

    return 0;
}
