#include "foret.h"

int main()
{
    Foret foret;
    Enfants enfants;
    initialiserForet(foret);
    initialiserEnfants(enfants, foret);
    afficherForet(foret);

    return 0;
}
