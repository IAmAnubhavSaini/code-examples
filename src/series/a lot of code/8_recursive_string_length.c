#include <stdio.h>

int StringLengthRecursive ( char * string )
{
        if ( string == NULL || *string == '\0' ){
                return 0;
        }

        return StringLengthRecursive(string +1) +1;
}

int main ( )
{
        int len = StringLengthRecursive("Anubhav Saini");
        printf("Length : %d\n", len);
        return 0;
}
