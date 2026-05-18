#include <stdio.h>

void print_menu(void)
{
    printf("=== Convertisseur universel ===\n");
    printf("1. Kilometres -> Miles\n");
    printf("2. Kilogrammes -> Livres\n");
    printf("3. Celsius -> Fahrenheit\n");
    printf("4. Quitter\n");
}

int do_convert(int choix, double val)
{
    if (choix == 1)
    {
        printf("%.2f km = %.2f miles\n", val, val * 0.621371);
        return (0);
    }
    if (choix == 2)
    {
        printf("%.2f kg = %.2f livres\n", val, val * 2.20462);
        return (0);
    }
    if (choix == 3)
    {
        printf("%.2f C  = %.2f F\n", val, val * 9.0 / 5.0 + 32.0);
        return (0);
    }
    printf("Choix invalide.\n");
    return (1);
}

int main(void)
{
    int     choix;
    double  val;

    print_menu();
    printf("Votre choix : ");
    scanf("%d", &choix);
    if (choix == 4)
    {
        printf("Au revoir !\n");
        return (0);
    }
    printf("Valeur a convertir : ");
    scanf("%lf", &val);
    return (do_convert(choix, val));
}
