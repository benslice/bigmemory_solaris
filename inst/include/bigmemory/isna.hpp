#ifndef ISNA_HPP
  #define ISNA_HPP

#ifndef __C99FEATURES__
  #define __C99FEATURES__
#endif

#include <math.h>
#include <ieeefp.h>
#include "bigmemoryDefines.h"

inline bool isna( const char val ) {return NA_CHAR == val;}
inline bool isna( const short val ) {return NA_SHORT == val;}
inline bool isna( const int val ) {return NA_INTEGER == val;}
inline bool isna( const double val ) {return isnan(val);}

inline bool neginf( const char val ) {return false;}
inline bool neginf( const short val ) {return false;}
inline bool neginf( const int val ) {return false;}

inline bool posinf( const char val );
inline bool posinf( const short val );
inline bool posinf( const int val );
inline bool posinf( const double val );

#endif //ISNA_HPP
