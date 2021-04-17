/* WARNING if type checker is not performed, translation could contain errors ! */

#include "Appontage.h"

/* Clause SEES */
#include "Contexte.h"

/* Clause IMPORTS */
#include "PlanApproche.h"
#include "Trajectoire.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void Appontage__INITIALISATION(void)
{
    
    PlanApproche__INITIALISATION();
    Trajectoire__INITIALISATION();
}

/* Clause OPERATIONS */

void Appontage__MaintienPlanApproche(void)
{
    PlanApproche__EnvoiRoulis();
    PlanApproche__EnvoiLacet();
}

void Appontage__MaintienTrajectoire(void)
{
    Trajectoire__VerifTangage();
    Trajectoire__VerifVitesse();
}

