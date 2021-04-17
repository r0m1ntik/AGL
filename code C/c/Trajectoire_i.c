/* WARNING if type checker is not performed, translation could contain errors ! */

#include "Trajectoire.h"

/* Clause SEES */
#include "Contexte.h"

/* Clause IMPORTS */
#include "Aiguilleur.h"
#include "CapteursTrajectoire.h"
#include "RegulateursTrajectoire.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void Trajectoire__INITIALISATION(void)
{
    
    Aiguilleur__INITIALISATION();
    CapteursTrajectoire__INITIALISATION();
    RegulateursTrajectoire__INITIALISATION();
}

/* Clause OPERATIONS */

void Trajectoire__VerifVitesse(void)
{
    int32_t vitesse;
    int32_t vitA;
    int32_t diffV;
    
    CapteursTrajectoire__RecupVitesse(&vitesse);
    Aiguilleur__CalculVitesse(&vitA);
    if(!(vitesse == vitA))
    {
        diffV = vitA-vitesse;
        RegulateursTrajectoire__ModifVitesse(diffV);
    }
}

void Trajectoire__VerifTangage(void)
{
    int32_t tangage;
    int32_t tangA;
    int32_t diffT;
    
    CapteursTrajectoire__RecupTangage(&tangage);
    Aiguilleur__CalculTangage(&tangA);
    if(!(tangage == tangA))
    {
        diffT = tangA-tangage;
        RegulateursTrajectoire__ModifTangage(diffT);
    }
}

