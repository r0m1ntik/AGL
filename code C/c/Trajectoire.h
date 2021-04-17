#ifndef _Trajectoire_h
#define _Trajectoire_h

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
extern void Trajectoire__INITIALISATION(void);

/* Clause OPERATIONS */

extern void Trajectoire__VerifVitesse(void);
extern void Trajectoire__VerifTangage(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _Trajectoire_h */
