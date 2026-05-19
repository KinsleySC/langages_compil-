#include <stdio.h>

int minimum(int a, int b)
{
    if (a < b)
        return a;
    return b;
}

int maximum(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

int valeur_absolue(int x)
{
    if (x < 0)
        return -x;
    return x;
}

int est_pair(int x)
{
    if (x % 2 == 0)
        return 1;
    return 0;
}

long factorielle(int n)
{
    long resultat = 1;

    if (n < 0)
        return 0;
    for (int i = 1; i <= n; i++)
        resultat *= i;
    return resultat;
}

int main(void)
{
    printf("Min (7, 9): %d\n", minimum(7, 9));
    printf("Max (11, 8): %d\n", maximum(11, 8));
    printf("Abs (-6): %d\n", valeur_absolue(-6));
    printf("Pair (7): %d\n", est_pair(7));
    printf("Pair (6): %d\n", est_pair(6));
    printf("Fact (4): %ld\n", factorielle(4));
    return 0;
}
