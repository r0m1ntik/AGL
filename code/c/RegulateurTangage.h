#ifndef _RegulateurTangage_h
#define _RegulateurTangage_h

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
extern void RegulateurTangage__INITIALISATION(void);

/* Clause OPERATIONS */

extern void RegulateurTangage__CorrTangage(int32_t valeur);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _RegulateurTangage_h */
