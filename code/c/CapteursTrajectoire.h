#ifndef _CapteursTrajectoire_h
#define _CapteursTrajectoire_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "Contexte.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_VARIABLES */


/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */
extern void CapteursTrajectoire__INITIALISATION(void);

/* Clause OPERATIONS */

extern void CapteursTrajectoire__RecupTangage(int32_t *tangage);
extern void CapteursTrajectoire__RecupVitesse(int32_t *vitesse);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _CapteursTrajectoire_h */
