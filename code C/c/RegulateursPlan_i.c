/* WARNING if type checker is not performed, translation could contain errors ! */

#include "RegulateursPlan.h"

/* Clause SEES */
#include "Contexte.h"

/* Clause IMPORTS */
#include "RegulateurRoulis.h"
#include "RegulateurLacet.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void RegulateursPlan__INITIALISATION(void)
{
    
    RegulateurLacet__INITIALISATION();
    RegulateurRoulis__INITIALISATION();
}

/* Clause OPERATIONS */

void RegulateursPlan__ModifRoulis(int32_t valeur)
{
    RegulateurRoulis__CorrRoulis(valeur);
}

void RegulateursPlan__ModifLacet(int32_t valeur)
{
    RegulateurLacet__CorrLacet(valeur);
}

