#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 0;

    if (b == 0) {
        printf("Erreur : impossible de diviser par zero.\n");
        return 1;
    }
    int resultat = a / b;

    printf("Resultat : %d\n", resultat);
    return 0;
}
