#include <stdlib.h>
#include <stdio.h>

int fill_tab(int *tab, int n)
{
    int i = 0;

    while (i < n) {
        printf("Value %d : ", i + 1);
        if (scanf("%d", &tab[i]) != 1) {
            return 84;
        }
        i++;
    }
    return 0;
}

void print_tab(int *tab, int n)
{
    int i = 0;

    while (i < n) {
        printf("tab[%d] = %d\n", i, tab[i]);
        i++;
    }
}

int sum_table(int *tab, int n)
{
    int sum = 0;
    int i = 0;

    while (i < n) {
        sum += tab[i];
        i++;
    }
    return sum;
}

void stats_tab(int *tab, int n)
{
    int sum = sum_table(tab, n);

    printf("Some : %d\n", sum);
    printf("Average : %.2f\n", (double)sum / n);
}

int main(void)
{
    int n;
    int *tab;

    printf("Size : ");
    if (scanf("%d", &n) != 1 || n <= 0)
        return 84;
    tab = (int *) malloc(n * sizeof(int));
    if (tab == NULL)
        return 84;
    if (fill_tab(tab, n) != 0) {
        free(tab);
        return 84;
    }
    print_tab(tab, n);
    stats_tab(tab, n);
    free(tab);
    return 0;
}
