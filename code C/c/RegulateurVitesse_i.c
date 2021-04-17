/* WARNING if type checker is not performed, translation could contain errors ! */

#include "RegulateurVitesse.h"

/* Clause SEES */
#include "Contexte.h"

/* Clause IMPORTS */
#include "BASIC_IO.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void RegulateurVitesse__INITIALISATION(void)
{
    
    BASIC_IO__INITIALISATION();
}

/* Clause OPERATIONS */

void RegulateurVitesse__CorrVitesse(int32_t valeur)
{
    BASIC_IO__STRING_WRITE("Valeur de la Vitesse : ");
    BASIC_IO__INT_WRITE(valeur);
}

