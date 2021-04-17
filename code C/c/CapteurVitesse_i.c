/* WARNING if type checker is not performed, translation could contain errors ! */

#include "CapteurVitesse.h"

/* Clause SEES */
#include "Contexte.h"

/* Clause IMPORTS */
#include "BASIC_IO.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void CapteurVitesse__INITIALISATION(void)
{
    
    BASIC_IO__INITIALISATION();
}

/* Clause OPERATIONS */

void CapteurVitesse__MesureVitesse(int32_t *vitesse)
{
    int32_t var;
    
    BASIC_IO__STRING_WRITE("Valeur Vitesse Actuelle : ");
    BASIC_IO__INTERVAL_READ(0, Contexte__VITESSE, &var);
    (*vitesse) = var;
}

