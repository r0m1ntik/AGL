/* WARNING if type checker is not performed, translation could contain errors ! */

#include "CapteursTrajectoire.h"

/* Clause SEES */
#include "Contexte.h"

/* Clause IMPORTS */
#include "CapteurVitesse.h"
#include "CapteurTangage.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void CapteursTrajectoire__INITIALISATION(void)
{
    
    CapteurTangage__INITIALISATION();
    CapteurVitesse__INITIALISATION();
}

/* Clause OPERATIONS */

void CapteursTrajectoire__RecupTangage(int32_t *tangage)
{
    int32_t varT;
    
    CapteurTangage__MesureTangage(&varT);
    (*tangage) = varT;
}

void CapteursTrajectoire__RecupVitesse(int32_t *vitesse)
{
    int32_t varV;
    
    CapteurVitesse__MesureVitesse(&varV);
    (*vitesse) = varV;
}

