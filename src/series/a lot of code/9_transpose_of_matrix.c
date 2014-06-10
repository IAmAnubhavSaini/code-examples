/* Anubhav Saini, 2014
 * 9th post in series "A lot of Code"
 * this file contains code that finds transpose of a matrix
 *
 * theory: replace rows with columns and vice versa
 *
 */

#include "4.h"

void TransposeIntMatrix ( int A[ROWS][COLS], int Transposed[COLS][ROWS], int m, int n )
{
        int i = 0, j = 0;
        for( i = 0; i < m; ++i ){      // m is taken to be rows
                for ( j = 0; j < n; ++j ){ // n is taken to be columns
                        Transposed[j][i] = A[i][j];
                }
        }
}


#include "limit_4.h"
