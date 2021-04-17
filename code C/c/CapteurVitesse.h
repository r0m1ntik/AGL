#ifndef _CapteurVitesse_h
#define _CapteurVitesse_h

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
extern void CapteurVitesse__INITIALISATION(void);

/* Clause OPERATIONS */

extern void CapteurVitesse__MesureVitesse(int32_t *vitesse);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _CapteurVitesse_h */
