#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define FORET_HAUTEUR 20
#define FORET_LONGUEUR 40
#define FORET_SOL ' '
#define FORET_ARBRE 'T'
#define FORET_DENSITE 5
#define FORET_ENFANT 'E'
#define NOMBRE_ENFANTS 10

typedef char Foret[FORET_HAUTEUR][FORET_LONGUEUR];

typedef struct Enfant
{
    int x, y;
}Enfant;

typedef Enfant Enfants[NOMBRE_ENFANTS];
