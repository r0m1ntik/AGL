// File CapteurLacet.bdy
// generated by tbcpp Version svn on Sat Apr 17 11:53:07 2021
// from input_file CapteurLacet_i.imp


#include "CapteurLacet.h"

// class T_CapteurLacet

//--------------------
// INITIALISATION
//--------------------

//IMPORTSs imported instances
void function T_CapteurLacet::IMPORTS(void)
{
	ref_BASIC_IO = new T_BASIC_IO ;
	ref_BASIC_IO->IMPORTS() ;
	initialisation = FALSE ;
} // end T_CapteurLacet::IMPORTS

void function T_CapteurLacet::INITIALISATION(void)
{
	if (initialisation == FALSE)
	{
		initialisation = TRUE ;
		
ref_BASIC_IO->INITIALISATION() ;
		
ref_Contexte->INITIALISATION() ;
		
	}
} //end T_CapteurLacet::INITIALISATION;

// No promoted or extended functions

//-----------------
//Clause OPERATIONS
//-----------------

void function T_CapteurLacet::#CapteurLacet#MesureLacet(T_int
	&#CapteurLacet#MesureLacet#0#lacet)
{ // VAR
	// #CapteurLacet#MesureLacet#1#var
	T_int #CapteurLacet#MesureLacet#1#var ;
	ref_BASIC_IO->#BASIC_IO#STRING_WRITE("Valeur Lacet Actuel : ") ;
	ref_BASIC_IO->#BASIC_IO#INTERVAL_READ(
		0,
		#Contexte#Contexte_LACET,
		#CapteurLacet#MesureLacet#1#var) ;
	#CapteurLacet#MesureLacet#0#lacet = #CapteurLacet#MesureLacet#1#var ;
} // end var


//end class T_CapteurLacet
