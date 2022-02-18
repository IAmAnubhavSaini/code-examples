/* Anubhav Saini, 2014
 * 4th post in series "A lot of Code"
 * this file contains code that finds sum, difference and trace of two matrices
 *
 * theory: addition and subtraction can be performed on two matrices if their
 *         dimensions are equal and performed on corresponding elements.
 * Blogged at : http://the-diary-of-a-wimpy-coder.blogspot.com/2014/06/4-prove-that-sum-of-traces-of-matrices.html
 * GitHub Project : https://github.com/IAmAnubhavSaini/code-examples
 * This file : https://github.com/IAmAnubhavSaini/code-examples/blob/master/src/series/a%20lot%20of%20code/4_add_sub_trace_matrix.c
 */

#include "4.h"
#include "common.h"

void AddIntMatrices(int A[ROWS][COLS], int B[ROWS][COLS], int Sum[ROWS][COLS], int m, int n) {
    int i = 0, j = 0;
    for (i = 0; i < m; ++i) { // m is taken to be rows
        for (j = 0; j < n; ++j) { // n is taken to be columns
            *(*(Sum + i) + j) = A[i][j] + B[i][j];
        }
    }
}

void SubIntMatrices(int A[ROWS][COLS], int B[ROWS][COLS], int Diff[ROWS][COLS], int m, int n)
/* remember, subtraction has peculiarity A-B != B-A */
{
    int i = 0, j = 0;
    for (i = 0; i < m; ++i) { // m is taken to be rows
        for (j = 0; j < n; ++j) { // n is taken to be columns
            *(*(Diff + i) + j) = A[i][j] - B[i][j];
        }
    }
}

int TraceIntMatrix(int A[ROWS][COLS], int m, int n) {
    int trace = 0;
    int i = 0, j = 0;
    for (i = 0; i < m; ++i) {
        trace += A[i][i];
    }
    return trace;
}

BOOL IsIntMatricesTraceEqual(int A[ROWS][COLS], int B[ROWS][COLS], int Diff[ROWS][COLS], int m, int n) {
    int traceA = TraceIntMatrix(A, m, n);
    int traceB = TraceIntMatrix(B, m, n);
    return traceA == traceB;
}


#include "limit_4.h"
