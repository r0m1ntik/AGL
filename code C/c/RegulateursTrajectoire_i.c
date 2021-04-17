/* WARNING if type checker is not performed, translation could contain errors ! */

#include "RegulateursTrajectoire.h"

/* Clause SEES */
#include "Contexte.h"

/* Clause IMPORTS */
#include "RegulateurVitesse.h"
#include "RegulateurTangage.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void RegulateursTrajectoire__INITIALISATION(void)
{
    
    RegulateurTangage__INITIALISATION();
    RegulateurVitesse__INITIALISATION();
}

/* Clause OPERATIONS */

void RegulateursTrajectoire__ModifTangage(int32_t valeur)
{
    RegulateurTangage__CorrTangage(valeur);
}

void RegulateursTrajectoire__ModifVitesse(int32_t valeur)
{
    RegulateurVitesse__CorrVitesse(valeur);
}

