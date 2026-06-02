#include <stdlib.h>
#include <stdio.h>

void print_tab(int *tab, int n)
{
    int i = 0;

    while (i < n) {
        printf("tab[%d] = %d\n", i, tab[i]);
        i++;
    }
}

int *grow_tab(int *tab, int new_size)
{
    int *tmp;

    tmp = (int *)realloc(tab, new_size * sizeof(int));
    if (tmp == NULL) {
        free(tab);
        return NULL;
    }
    return tmp;
}

int main(void)
{
    int *tab;

    tab = (int *)calloc(5, sizeof(int));
    if (tab == NULL)
        return 84;
    printf("--- calloc ---\n");
    print_tab(tab, 10);
    tab = grow_tab(tab, 10);
    if (tab == NULL)
        return 84;
    tab[5] = 42;
    tab[6] = 99;
    printf("--- recalloc ---\n");
    print_tab(tab, 10);
    free(tab);
    tab = NULL;
    return 0;
}
