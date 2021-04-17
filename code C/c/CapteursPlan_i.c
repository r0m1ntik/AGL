/* WARNING if type checker is not performed, translation could contain errors ! */

#include "CapteursPlan.h"

/* Clause SEES */
#include "Contexte.h"

/* Clause IMPORTS */
#include "CapteurRoulis.h"
#include "CapteurLacet.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void CapteursPlan__INITIALISATION(void)
{
    
    CapteurLacet__INITIALISATION();
    CapteurRoulis__INITIALISATION();
}

/* Clause OPERATIONS */

void CapteursPlan__RecupRoulis(int32_t *roulis)
{
    int32_t varR;
    
    CapteurRoulis__MesureRoulis(&varR);
    (*roulis) = varR;
}

void CapteursPlan__RecupLacet(int32_t *lacet)
{
    int32_t varL;
    
    CapteurLacet__MesureLacet(&varL);
    (*lacet) = varL;
}

