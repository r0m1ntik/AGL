/* WARNING if type checker is not performed, translation could contain errors ! */

#include "Pilote.h"

/* Clause IMPORTS */
#include "Appontage.h"
#include "Contexte.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void Pilote__INITIALISATION(void)
{
    
    Contexte__INITIALISATION();
    Appontage__INITIALISATION();
    ;
}

/* Clause OPERATIONS */

void Pilote__ActivationPA(void)
{
    Appontage__MaintienPlanApproche();
    Appontage__MaintienTrajectoire();
}

