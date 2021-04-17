#ifndef _RegulateursTrajectoire_h
#define _RegulateursTrajectoire_h

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
extern void RegulateursTrajectoire__INITIALISATION(void);

/* Clause OPERATIONS */

extern void RegulateursTrajectoire__ModifTangage(int32_t valeur);
extern void RegulateursTrajectoire__ModifVitesse(int32_t valeur);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _RegulateursTrajectoire_h */
