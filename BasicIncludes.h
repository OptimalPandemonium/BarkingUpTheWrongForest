/* -------------------------- BasicIncludes.h -------------------------- */
#pragma once
/* -------------------------- Headers -------------------------- */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
/* -------------------------- Type Macros -------------------------- */
#define u08 unsigned char
#define i08 char
#define u32 unsigned int
#define i32 int
#define u64 long long unsigned
#define i64 long long int
#define i128 __int128
#define u128 __int128 unsigned
#define f128 long double

/* -------------------------- Function Macros -------------------------- */

#define Even(X) (0 == (1&(X)))
#define Odd(X) (1 == (1&(X)))
#define Min(X,Y) ( (X) < (Y) ? (X) : (Y) )
#define Max(X,Y) ( (X) < (Y) ? (Y) : (X) )
#define Divides(P,N) (0 == (N%P))
#define MakeU64Array(LEN)  calloc( (LEN) , sizeof( u64 ) )
#define IsDigitCharacter(X) (( X >= 48 ) && ( X <= 57 ))
#define BackUpOneByte(FP) fseek( FP, -1, SEEK_CUR )

#define Error(...) do													\
{																				\
	fprintf( stderr, 														\
	"Program Failure: Error in file %s in function %s() on line %d.\n",	\
	__FILE__, __func__, __LINE__ );									\
	printf( __VA_ARGS__ );												\
	exit( EXIT_FAILURE );												\
} while(0)
// end BASICINCLUDES_H
