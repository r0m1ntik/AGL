#ifndef _Aiguilleur_h
#define _Aiguilleur_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "Contexte.h"

/* Clause IMPORTS */
#include "BASIC_IO.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_VARIABLES */


/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */
extern void Aiguilleur__INITIALISATION(void);

/* Clause OPERATIONS */

extern void Aiguilleur__CalculTangage(int32_t *tangageA);
extern void Aiguilleur__CalculVitesse(int32_t *vitesseA);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _Aiguilleur_h */
