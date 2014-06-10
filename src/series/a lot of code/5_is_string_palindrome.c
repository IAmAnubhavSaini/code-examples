#include "common.h"

BOOL IsStringPalindrome ( char * string )
{
        int len = strlen ( string );
        int upwards = 0, downwards = len -1;

        while ( upwards < downwards ) {
                if ( string[upwards++] != string[downwards--] )
                        return FALSE;
        }

        return TRUE;
}
