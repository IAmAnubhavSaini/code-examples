/* Anubhav Saini, 2014
 * 9th post in series "A lot of Code"
 * this file contains code that finds transpose of a matrix
 *
 * theory: replace rows with columns and vice versa
 * GitHub : https://github.com/IAmAnubhavSaini/code-examples
 * this file : https://github.com/IAmAnubhavSaini/code-examples/blob/master/src/series/a%20lot%20of%20code/9_transpose_of_matrix.c
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
