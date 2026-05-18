#include <stdio.h>

int main(void)
{
    char prenom[30];
    int age;
    float note;

    printf("Votre prenom : ");
    scanf("%29s", prenom);

    printf("Votre age : ");
    scanf("%d", &age);

    printf("Votre note moyenne : ");
    scanf("%f", &note);

    printf("\n=== Fiche etudiant ===\n");
    printf("Prenom : %s\n", prenom);
    printf("Age    : %d ans\n", age);
    printf("Note   : %.2f / 20\n", note);
    return 0;
}
