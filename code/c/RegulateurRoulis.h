#ifndef _RegulateurRoulis_h
#define _RegulateurRoulis_h

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
extern void RegulateurRoulis__INITIALISATION(void);

/* Clause OPERATIONS */

extern void RegulateurRoulis__CorrRoulis(int32_t valeur);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _RegulateurRoulis_h */
