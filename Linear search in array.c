#include <stdio.h>
int main()
{
    int a[5], i, n, c = 0;
    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
    printf("Enter the number to search: ");
    scanf("%d", &n);
    for (i = 0; i < 5; i++)
    {
        if (n == a[i])
        {
            printf("Number found at index %d", i);
            c = 1;
        }
    }
    if (c == 0)
    {
        printf("Number not found");
    }

    return 0;
}