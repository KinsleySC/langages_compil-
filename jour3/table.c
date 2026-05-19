#include <stdio.h>

int table(void)
{
    int n;

    while (1) {
        printf("Value (Choose an value between 1 and 10) : ");
        if (scanf("%d", &n) != 1) {
            printf("Error: Inavalid input\n");
            return 84;
        }
        if (n >= 1 && n <= 10) {
            for (int i = 1; i != 10; i++) {
                printf("%d * %d = %d\n---------\n", n, i, n * i);
            }
            return 0;
        } else {
            printf("Please, choose an number between 1 and 10\n");
            return 84;
        }
    }
}

int main(void)
{
    if (table() != 0) {
        return 84;
    }
    return 0;
}
