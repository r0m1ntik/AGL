/* WARNING if type checker is not performed, translation could contain errors ! */

#include "CapteurTangage.h"

/* Clause SEES */
#include "Contexte.h"

/* Clause IMPORTS */
#include "BASIC_IO.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void CapteurTangage__INITIALISATION(void)
{
    
    BASIC_IO__INITIALISATION();
}

/* Clause OPERATIONS */

void CapteurTangage__MesureTangage(int32_t *tangage)
{
    int32_t var;
    
    BASIC_IO__STRING_WRITE("Valeur Tangage Actuel : ");
    BASIC_IO__INTERVAL_READ(0, Contexte__TANGAGE, &var);
    (*tangage) = var;
}

