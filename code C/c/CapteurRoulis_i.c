/* WARNING if type checker is not performed, translation could contain errors ! */

#include "CapteurRoulis.h"

/* Clause SEES */
#include "Contexte.h"

/* Clause IMPORTS */
#include "BASIC_IO.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void CapteurRoulis__INITIALISATION(void)
{
    
    BASIC_IO__INITIALISATION();
}

/* Clause OPERATIONS */

void CapteurRoulis__MesureRoulis(int32_t *roulis)
{
    int32_t var;
    
    BASIC_IO__STRING_WRITE("Valeur Roulis Actuel : ");
    BASIC_IO__INTERVAL_READ(0, Contexte__ROULIS, &var);
    (*roulis) = var;
}

