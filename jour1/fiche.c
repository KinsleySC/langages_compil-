#include <stdio.h>

int main(void) 
{
    char  *prenom  = "Kinsley";
    int   age       = 22;
    float taille    = 1.81f;
    char  initiale  = 'K';

    printf("+-------------------------------+\n");
    printf("|       FICHE D'IDENTITE        |\n");
    printf("+-------------------------------+\n");
    printf("| Prenom   : %-19s|\n", prenom);
    printf("| Age      : %-2d ans            |\n", age);
    printf("| Taille   : %.2f m             |\n", taille);
    printf("| Initiale : %c                  |\n", initiale);
    printf("+-------------------------------+\n");
    printf("| Code de sortie : 0 (succes)  |\n");
    printf("+-------------------------------+\n");

    return 0;
}
