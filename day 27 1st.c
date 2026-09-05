#include <stdio.h>

int main()
{
    int i, j, n;

    for(i = 1; i <= 7; i++)
    {
        if(i <= 3)
            n = 2 * i - 1;
        else if(i == 4)
            n = 9;
        else
            n = 17 - 2 * i;

        for(j = 1; j <= n; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
