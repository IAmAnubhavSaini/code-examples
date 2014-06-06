#include "common.h"

BOOL IsIntOdd ( int toCheck )
{
    if ( toCheck % 2 != 0 ) 
        return TRUE; // yes, toCheck is odd
    else
        return FALSE; // no, toCheck is even!
}

BOOL IsIntOdd_Alt ( int toCheck )
{
    if ( toCheck & 1 == 1 ) 
        return TRUE; // yes, toCheck is odd
    else
        return FALSE; // no, toCheck is even!
}
