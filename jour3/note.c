#include <stdio.h>

void print_mention(int note)
{
    if (note >= 16)
        printf("Très bien\n");
    else if (note >= 14)
        printf("Bien\n");
    else if (note >= 12)
        printf("Assez bien\n");
    else if (note >= 10)
        printf("Passable\n");
    else
        printf("Insuffisant\n");
}

int check_note(int note)
{
    if (note < 0 || note > 20) {
        printf("Note invalide\n");
        return 84;
    }
    print_mention(note);
    if (note >= 10)
        printf("Admis\n");
    else
        printf("Refuse\n");
    return 0;
}

int main(void)
{
    int note;

    printf("Note (0-20) : ");
    if (scanf("%d", &note) != 1) {
        printf("Error: Invalid input\n");
        return 84;
    }
    return check_note(note);
}
