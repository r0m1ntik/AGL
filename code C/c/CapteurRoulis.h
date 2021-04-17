#ifndef _CapteurRoulis_h
#define _CapteurRoulis_h

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
extern void CapteurRoulis__INITIALISATION(void);

/* Clause OPERATIONS */

extern void CapteurRoulis__MesureRoulis(int32_t *roulis);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _CapteurRoulis_h */
