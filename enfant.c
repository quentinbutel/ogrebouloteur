#include "enfant.h"
void initialiserEnfant(Enfant* enfant, Foret foret)
{
    int x, y;
    do
    {
        x = rand() % FORET_LONGUEUR;
        y = rand() % FORET_HAUTEUR;
    }while(foret[y][x] != FORET_SOL);
    (*enfant).x = x;
    (*enfant).y = y;
}

void initialiserEnfants(Enfants enfants, Foret foret)
{
    int i;
    for (i = 0; i < NOMBRE_ENFANTS; i++)
    {
        initialiserEnfant(&enfants[i], foret);
    }
}
