// File RegulateurLacet.bdy
// generated by tbcpp Version svn on Sat Apr 17 11:53:08 2021
// from input_file RegulateurLacet_i.imp


#include "RegulateurLacet.h"

// class T_RegulateurLacet

//--------------------
// INITIALISATION
//--------------------

//IMPORTSs imported instances
void function T_RegulateurLacet::IMPORTS(void)
{
	ref_BASIC_IO = new T_BASIC_IO ;
	ref_BASIC_IO->IMPORTS() ;
	initialisation = FALSE ;
} // end T_RegulateurLacet::IMPORTS

void function T_RegulateurLacet::INITIALISATION(void)
{
	if (initialisation == FALSE)
	{
		initialisation = TRUE ;
		
ref_BASIC_IO->INITIALISATION() ;
		
ref_Contexte->INITIALISATION() ;
		
	}
} //end T_RegulateurLacet::INITIALISATION;

// No promoted or extended functions

//-----------------
//Clause OPERATIONS
//-----------------

void function T_RegulateurLacet::#RegulateurLacet#CorrLacet(T_int
	#RegulateurLacet#CorrLacet#0#valeur)
{ // BEGIN
	ref_BASIC_IO->#BASIC_IO#STRING_WRITE("Valeur du Lacet : ") ;
	ref_BASIC_IO->#BASIC_IO#INT_WRITE(#RegulateurLacet#CorrLacet#0#valeur) ;
} // END (BEGIN)


//end class T_RegulateurLacet
