u64 GCD( u64 a, u64 b )
{
	if( 0 == a ) return b;
	if( 0 == b ) return a;
	return GCD( b, a%b );		
} //END GCD

// This is fast for isolated calculations.
// I've seen various versions of GCD but this is by far the simplist and nearly the fastest. 
// You can unroll this function to make it slightly faster but it's a bit of an eyesore.
