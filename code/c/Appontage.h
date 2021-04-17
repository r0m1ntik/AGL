#ifndef _Appontage_h
#define _Appontage_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "Contexte.h"

/* Clause IMPORTS */
#include "PlanApproche.h"
#include "Trajectoire.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_VARIABLES */


/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */
extern void Appontage__INITIALISATION(void);

/* Clause OPERATIONS */

extern void Appontage__MaintienPlanApproche(void);
extern void Appontage__MaintienTrajectoire(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _Appontage_h */
