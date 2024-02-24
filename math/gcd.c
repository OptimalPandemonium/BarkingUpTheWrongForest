#include "BasicIncludes.h"

u64 GCD( u64 a, u64 b )
{
	if( 0 == a ) return b;
	if( 0 == b ) return a;
	return GCD( b, a % b );		
} //END GCD
