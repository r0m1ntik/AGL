/* WARNING if type checker is not performed, translation could contain errors ! */

#include "RegulateurRoulis.h"

/* Clause SEES */
#include "Contexte.h"

/* Clause IMPORTS */
#include "BASIC_IO.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void RegulateurRoulis__INITIALISATION(void)
{
    
    BASIC_IO__INITIALISATION();
}

/* Clause OPERATIONS */

void RegulateurRoulis__CorrRoulis(int32_t valeur)
{
    BASIC_IO__STRING_WRITE("Valeur du Roulis : ");
    BASIC_IO__INT_WRITE(valeur);
}

