#include <stdio.h>

int main()
{
    int n, i, element, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n + 1];

    printf("Enter elements in sorted order: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    /* Find the appropriate position */
    pos = 0;
    while(pos < n && a[pos] < element)
    {
        pos++;
    }

    /* Shift elements to the right */
    for(i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    /* Insert element */
    a[pos] = element;

    n++;

    printf("Array after insertion: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
