//============================================================================
//==== Titre: Standard_Character.hxx
//==== Role : The header file of primitve type "Character" from package 
//====        "Standard"
//==== 
//==== Implementation:  This is a primitive type implemented as typedef
//====        typedef char Standard_Character
//============================================================================

#ifndef _Standard_Character_HeaderFile
#define _Standard_Character_HeaderFile

#ifndef _Standard_ctype_HeaderFile
#include <Standard_ctype.hxx>
#endif

#include <string.h>

#ifndef _Standard_TypeDef_HeaderFile
#include <Standard_TypeDef.hxx>
#endif

class Handle_Standard_Type;

__Standard_API Handle_Standard_Type& Standard_Character_Type_();

//class Standard_OStream;
//void ShallowDump (const Standard_Character, Standard_OStream& );
// =====================================
// Method implemented in Standard_Character.cxx
// =====================================
__Standard_API Standard_Integer   HashCode(const Standard_Character, const Standard_Integer);

// ===============================================
// Methods from Standard_Entity class which are redefined:  
//    - Hascode
//    - IsEqual
//    - IsSimilar
//    - Shallowcopy
//    - ShallowDump
// ===============================================

// ===============
// inline methods 
// ===============

// ------------------------------------------------------------------
// IsEqual : Returns Standard_True if two characters have the same value
// ------------------------------------------------------------------
inline Standard_Boolean IsEqual(const Standard_Character One,
				const Standard_Character Two)
{ return One == Two; }

// ------------------------------------------------------------------
// IsSimilar : Returns Standard_True if two characters have the same value
// ------------------------------------------------------------------
inline Standard_Boolean IsSimilar(const Standard_Character One, 
				  const Standard_Character Two)
{ return One == Two; }

// ===============================================
// Character classification functions
//
// NOTE: Character classification routines in C standard library 
// (isdigit(), isalpha() etc.) have integer argument instead of char. 
// Therefore if character from extended Ascii part of char table
// (i.e. above 128) is passed into such functions it is converted 
// to int giving negative value (if characters are signed that
// is default for most compilers). 
// It can be dangerous since implementation of these C functions
// may use argument as index in the array without any checks 
// (for instance, in Microsoft VC++ -- see MSDN)
// To avoid this, we cast char to unsigned char when passing to these functions.
// ===============================================
  
// ==================================================================
// IsAlphabetic : Returns Standard_True if a character is alphabetic
// ==================================================================
inline Standard_Boolean IsAlphabetic(const Standard_Character me) 
{ return isalpha((unsigned char)me) != 0; }

// ==================================================================
// IsDigit : Returns Standard_True if a character is a digit
// ==================================================================
inline Standard_Boolean IsDigit(const Standard_Character me) 
{ return isdigit((unsigned char)me) != 0; }

// ==================================================================
// IsXDigit : Returns Standard_True if a character is a digit
// ==================================================================
inline Standard_Boolean IsXDigit(const Standard_Character me) 
{ return isxdigit((unsigned char)me) != 0; }

// ==================================================================
// IsAlphanumeric : Returns Standard_True if a character is alphanumeric
// ==================================================================
inline Standard_Boolean IsAlphanumeric(const Standard_Character me) 
{ return (IsAlphabetic(me) || IsDigit(me)) ; }

// ==================================================================
// IsControl : Returns Standard_True if a character  is a control character
// ==================================================================
inline Standard_Boolean IsControl(const Standard_Character me) 
{ return iscntrl((unsigned char)me) != 0; }


// ==================================================================
// IsGraphic : Returns Standard_True if a character is graphic
// ==================================================================
inline Standard_Boolean IsGraphic(const Standard_Character me) 
{ return isgraph((unsigned char)me) != 0; }

// ==================================================================
// IsLowerCase : Returns Standard_True if a character is lowercase
// ==================================================================
inline Standard_Boolean IsLowerCase(const Standard_Character me) 
{ return islower((unsigned char)me) != 0; }

// ==================================================================
// IsPrintable : Returns Standard_True if a character is printable
// ==================================================================
inline Standard_Boolean IsPrintable(const Standard_Character me) 
{ return isprint((unsigned char)me) != 0; }

// ==================================================================
// IsPunctuation : Returns Standard_True if a character is a graphic and 
//                 not a alphanumeric character
// ==================================================================
inline Standard_Boolean IsPunctuation(const Standard_Character me) 
{ return ( IsGraphic(me) && !IsAlphanumeric(me)); }

// ==================================================================
// IsSpace : Returns Standard_True if a character is a space
// ==================================================================
inline Standard_Boolean IsSpace(const Standard_Character me) 
{ return isspace((unsigned char)me) != 0; }

// ==================================================================
// IsUppercase : Returns Standard_True if a character is uppercase
// ==================================================================
inline Standard_Boolean IsUpperCase(const Standard_Character me) 
{ return isupper((unsigned char)me) != 0; }

// ==================================================================
// LowerCase : Returns a lowercase character
// ==================================================================
inline Standard_Character LowerCase(const Standard_Character me) 
{ return (Standard_Character)(unsigned char)tolower(me); }

// ==================================================================
// UpperCase : Returns a uppercase character
// ==================================================================
inline Standard_Character UpperCase(const Standard_Character me) 
{ return (Standard_Character)(unsigned char)toupper(me); }

// ------------------------------------------------------------------
// ShallowCopy : Make a copy of one Character
// ------------------------------------------------------------------
inline Standard_Character ShallowCopy (const Standard_Character me) 
{ return me; }

#endif














