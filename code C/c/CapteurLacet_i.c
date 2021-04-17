/* WARNING if type checker is not performed, translation could contain errors ! */

#include "CapteurLacet.h"

/* Clause SEES */
#include "Contexte.h"

/* Clause IMPORTS */
#include "BASIC_IO.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void CapteurLacet__INITIALISATION(void)
{
    
    BASIC_IO__INITIALISATION();
}

/* Clause OPERATIONS */

void CapteurLacet__MesureLacet(int32_t *lacet)
{
    int32_t var;
    
    BASIC_IO__STRING_WRITE("Valeur Lacet Actuel : ");
    BASIC_IO__INTERVAL_READ(0, Contexte__LACET, &var);
    (*lacet) = var;
}

