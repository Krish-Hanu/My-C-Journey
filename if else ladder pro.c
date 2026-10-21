// if-else statement in C
#include <stdio.h>
int main()
{
    int a;
    printf("Enter your income: ");
    scanf("%d", &a);
    if (a < 150000)
    {
        printf("No Tax.\n");
    }
    else if (a >= 150000 && a < 300000)
    {
        printf("Tax %d\n", (a / 100) * 10);
    }

    else if (a >= 300000 && a < 500000)
    {
        printf("Tax %d\n", (a / 100) * 20);
    }
    else
    {
        printf("You are Government and no need to pay tax.\n");
    }
    return 0;
}