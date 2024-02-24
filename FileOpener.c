#include "FileOpener.h"

//This is a safe file opener that I always use.
FILE *SafeOpen(const char *filename, const char *mode)
{
    FILE *FP = fopen(filename, mode);
    if( NULL != FP ) return FP;
    fprintf(stderr, "Trying to open %s for mode: \"%s\"but can't. \n", filename, mode);
    exit(99);
}
