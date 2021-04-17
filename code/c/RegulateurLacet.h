#ifndef _RegulateurLacet_h
#define _RegulateurLacet_h

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
extern void RegulateurLacet__INITIALISATION(void);

/* Clause OPERATIONS */

extern void RegulateurLacet__CorrLacet(int32_t valeur);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _RegulateurLacet_h */
