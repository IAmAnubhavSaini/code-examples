#include "common.h"

void Check2_IsIntNegative();

void Check1_IsIntOdd();

void Check3_FindSumAndAverageOfIntArray();

void Check4_AddSubTraceIntMatrices();

void Check5_IsStringPalindromedrome();

void Check9_TransposeIntMatrix();

int main() {
    // Check1_IsIntOdd()
    // Check2_IsIntNegative();
    // Check3_FindSumAndAverageOfIntArray();
    // Check4_AddSubTraceIntMatrices();
    // Check5_IsStringPalindromedrome();
    Check9_TransposeIntMatrix();
    return 0;
}

void Check1_IsIntOdd() {
    int i = 10;
    if (IsIntOdd(i)) {
        printf("%d is odd\n", i);
    } else {
        printf("%d is even\n", i);
    }
    i += 1;
    if (IsIntOdd(i)) {
        printf("%d is odd\n", i);
    } else {
        printf("%d is even\n", i);
    }
    if (IsIntOdd_Alt(i)) {
        printf("%d is odd\n", i);
    } else {
        printf("%d is even\n", i);
    }
    i += 1;
    if (IsIntOdd_Alt(i)) {
        printf("%d is odd\n", i);
    } else {
        printf("%d is even\n", i);
    }
}

void Check2_IsIntNegative() {
    int i = 10;
    if (IsIntNegative(i)) {
        printf("%d is negative\n", i);
    } else {
        printf("%d is not negative\n", i);
    }
    i *= -1;
    if (IsIntNegative(i)) {
        printf("%d is negative\n", i);
    } else {
        printf("%d is not negative\n", i);
    }
}

void Check3_FindSumAndAverageOfIntArray() {
#define count 10
    int array[count] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int sum = 0, avg = 0;
    double Avg = 0.0;
    FindSumAndAverageOfIntArray(array, count, &sum, &avg);
    printf("Sum: %d,\tAverage: %d\n", sum, avg);
    FindSumAndAverageOfIntArray_DAvg(array, &sum, &Avg);
// notice the value of sum.
    printf("Sum: %d,\tAverage: %.2f\n", sum, Avg);
#undef count
}

void Check4_AddSubTraceIntMatrices() {
#include "4.h"

    int i = 0, j = 0;
    int A[ROWS][COLS]; // = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int B[ROWS][COLS]; // = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };
    int Sum[ROWS][COLS];
    int Diff[ROWS][COLS];

    printf("\n Initializing Arrays \n");

    for (i = 0; i < ROWS; ++i) {
        for (j = 0; j < COLS; ++j) {
            A[i][j] = ROWS * i + (j + 1);
            B[i][j] = 10 - A[i][j]; // 10-(ROWS*i + (j+1));
        }
    }

    printf("\n Array A\n");

    for (i = 0; i < ROWS; ++i) {
        for (j = 0; j < COLS; ++j) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    printf("\n Array B\n");

    for (i = 0; i < ROWS; ++i) {
        for (j = 0; j < COLS; ++j) {
            printf("%4d", B[i][j]);
        }
        printf("\n");
    }

    printf("\n A+B\n");
    AddIntMatrices(A, B, Sum, ROWS, COLS);

    for (i = 0; i < ROWS; ++i) {
        for (j = 0; j < COLS; ++j) {
            printf(" %3d ", Sum[i][j]);
        }
        printf("\n");
    }

    printf("\n A-B\n");
    SubIntMatrices(A, B, Diff, ROWS, COLS);

    for (i = 0; i < ROWS; ++i) {
        for (j = 0; j < COLS; ++j) {
            printf(" %3d ", Diff[i][j]);
        }
        printf("\n");
    }

#include "limit_4.h"

}

void Check5_IsStringPalindromedrome() {
    char *first = "Anubhav Saini";
    char *palin1 = "aaa";
    char *palin2 = "abba";
    char *nonpalin = "aabb";

    if (IsStringPalindrome(first)) {
        printf("%s is a palindrome\n", first);
    } else {
        printf("%s is not a palindrome\n", first);
    }

    if (IsStringPalindrome(palin1)) {
        printf("%s is a palindrome\n", palin1);
    } else {
        printf("%s is not a palindrome\n", palin1);
    }

    if (IsStringPalindrome(palin2)) {
        printf("%s is a palindrome\n", palin2);
    } else {
        printf("%s is not a palindrome\n", palin2);
    }

    if (IsStringPalindrome(nonpalin)) {
        printf("%s is a palindrome\n", nonpalin);
    } else {
        printf("%s is not a palindrome\n", nonpalin);
    }

}

void Check9_TransposeIntMatrix() {
#include "4.h"

    int i = 0, j = 0;
    int A[ROWS][COLS]; // = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int Ta[COLS][ROWS]; //  transpose of A
    int TTa[ROWS][COLS]; // transpose of transpose of A, should be A.


    printf("\n Initializing Arrays \n");

    for (i = 0; i < ROWS; ++i) {
        for (j = 0; j < COLS; ++j) {
            A[i][j] = ROWS * i + (j + 1);
        }
    }

    printf("\n Array A\n");

    for (i = 0; i < ROWS; ++i) {
        for (j = 0; j < COLS; ++j) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    printf("\n A' ( A's Transpose )\n");
    TransposeIntMatrix(A, Ta, ROWS, COLS);

    for (i = 0; i < COLS; ++i) {
        for (j = 0; j < ROWS; ++j) {
            printf(" %3d ", Ta[i][j]);
        }
        printf("\n");
    }

    printf("\n A'' ( Transpose of A's Transpose )\n");
    TransposeIntMatrix(Ta, TTa, COLS, ROWS);

    for (i = 0; i < ROWS; ++i) {
        for (j = 0; j < COLS; ++j) {
            printf(" %3d ", TTa[i][j]);
        }
        printf("\n");
    }

#include "limit_4.h"
}

