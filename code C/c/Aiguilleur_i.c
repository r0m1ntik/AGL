/* WARNING if type checker is not performed, translation could contain errors ! */

#include "Aiguilleur.h"

/* Clause SEES */
#include "Contexte.h"

/* Clause IMPORTS */
#include "BASIC_IO.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void Aiguilleur__INITIALISATION(void)
{
    
    BASIC_IO__INITIALISATION();
}

/* Clause OPERATIONS */

void Aiguilleur__CalculTangage(int32_t *tangageA)
{
    BASIC_IO__STRING_WRITE("Quel tangage doit avoir l'avion ?");
    BASIC_IO__INTERVAL_READ(0, Contexte__TANGAGE, tangageA);
}

void Aiguilleur__CalculVitesse(int32_t *vitesseA)
{
    BASIC_IO__STRING_WRITE("Quelle vitesse doit avoir l'avion ?");
    BASIC_IO__INTERVAL_READ(0, Contexte__VITESSE, vitesseA);
}

