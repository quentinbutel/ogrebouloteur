#include "foret.h"

void afficherForet(Foret foret)
{
    int i, j;
    system("CLS");
    for (i = 0; i < FORET_HAUTEUR; i++)
    {
        for (j = 0; j < FORET_LONGUEUR; j++)
        {
            printf("%c", foret[i][j]);
        }
        printf("\n");

    }
}
void initialiserForet(Foret foret)
{
    int i, j;
    srand(time(NULL));
    for (i = 0; i < FORET_HAUTEUR; i++)
    {
        for (j = 0; j  < FORET_LONGUEUR; j++)
        {
            if ((i == 0) || (i == FORET_HAUTEUR - 1) || (j == 0) || (j == FORET_LONGUEUR - 1) || (rand() % FORET_DENSITE == 0))
            {
                foret[i][j] = FORET_ARBRE;
            }
            else
            {
                foret[i][j] = FORET_SOL;
            }
        }
    }
}
