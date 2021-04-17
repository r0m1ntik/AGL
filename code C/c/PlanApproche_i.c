/* WARNING if type checker is not performed, translation could contain errors ! */

#include "PlanApproche.h"

/* Clause SEES */
#include "Contexte.h"

/* Clause IMPORTS */
#include "CapteursPlan.h"
#include "RegulateursPlan.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void PlanApproche__INITIALISATION(void)
{
    
    CapteursPlan__INITIALISATION();
    RegulateursPlan__INITIALISATION();
}

/* Clause OPERATIONS */

void PlanApproche__EnvoiRoulis(void)
{
    int32_t res0;
    int32_t res1;
    
    CapteursPlan__RecupRoulis(&res1);
    res0 = 0-res1;
    RegulateursPlan__ModifRoulis(res0);
}

void PlanApproche__EnvoiLacet(void)
{
    int32_t res2;
    int32_t res3;
    
    CapteursPlan__RecupLacet(&res2);
    res3 = 0-res2;
    RegulateursPlan__ModifLacet(res3);
}

