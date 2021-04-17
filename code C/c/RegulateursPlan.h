#ifndef _RegulateursPlan_h
#define _RegulateursPlan_h

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
extern void RegulateursPlan__INITIALISATION(void);

/* Clause OPERATIONS */

extern void RegulateursPlan__ModifRoulis(int32_t valeur);
extern void RegulateursPlan__ModifLacet(int32_t valeur);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _RegulateursPlan_h */
