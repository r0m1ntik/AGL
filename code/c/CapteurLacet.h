#ifndef _CapteurLacet_h
#define _CapteurLacet_h

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
extern void CapteurLacet__INITIALISATION(void);

/* Clause OPERATIONS */

extern void CapteurLacet__MesureLacet(int32_t *lacet);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _CapteurLacet_h */
