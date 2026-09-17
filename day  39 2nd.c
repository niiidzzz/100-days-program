#include <stdio.h>

int main()
{
    int a[10][10], n, sum = 0;

    printf("Enter size of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Sum of main diagonal
    for(int i = 0; i < n; i++)
    {
        sum = sum + a[i][i];
    }

    printf("Sum of main diagonal = %d", sum);

    return 0;
}
