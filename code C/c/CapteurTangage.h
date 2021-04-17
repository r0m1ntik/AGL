#ifndef _CapteurTangage_h
#define _CapteurTangage_h

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
extern void CapteurTangage__INITIALISATION(void);

/* Clause OPERATIONS */

extern void CapteurTangage__MesureTangage(int32_t *tangage);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _CapteurTangage_h */
