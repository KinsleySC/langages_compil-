#include <stdio.h>

int main(void)
{
    int score = 85;

    if (score == 100) {   /* == pour comparer */
        printf("Score parfait !\n");
    } else {
        printf("Score : %d — pas encore parfait.\n", score);
    }
    return 0;
}
