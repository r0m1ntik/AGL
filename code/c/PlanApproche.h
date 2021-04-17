#ifndef _PlanApproche_h
#define _PlanApproche_h

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
extern void PlanApproche__INITIALISATION(void);

/* Clause OPERATIONS */

extern void PlanApproche__EnvoiRoulis(void);
extern void PlanApproche__EnvoiLacet(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _PlanApproche_h */
