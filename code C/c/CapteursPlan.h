#ifndef _CapteursPlan_h
#define _CapteursPlan_h

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
extern void CapteursPlan__INITIALISATION(void);

/* Clause OPERATIONS */

extern void CapteursPlan__RecupRoulis(int32_t *roulis);
extern void CapteursPlan__RecupLacet(int32_t *lacet);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _CapteursPlan_h */
