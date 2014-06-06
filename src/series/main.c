#include "common.h"

void Check2_IsIntNegative();
void Check1_IsIntOdd();
void Check3_FindSumAndAverageOfIntArray();

int main(){
    // Check1_IsIntOdd();
    // Check2_IsIntNegative();
    Check3_FindSumAndAverageOfIntArray();
    return 0;
}

void Check1_IsIntOdd()
{
    int i = 10;
    if(IsIntOdd(i)){
        printf("%d is odd\n", i);
    } else {
        printf("%d is even\n", i);
    }
    i += 1;
    if(IsIntOdd(i)){
        printf("%d is odd\n", i);
    } else {
        printf("%d is even\n", i);
    }
    if(IsIntOdd_Alt(i)){
        printf("%d is odd\n", i);
    } else {
        printf("%d is even\n", i);
    }
    i += 1;
    if(IsIntOdd_Alt(i)){
        printf("%d is odd\n", i);
    } else {
        printf("%d is even\n", i);
    }
}

void Check2_IsIntNegative()
{
    int i = 10;
    if(IsIntNegative(i)){
        printf("%d is negative\n", i);
    } else {
        printf("%d is not negative\n", i);
    }
    i *= -1;
    if(IsIntNegative(i)){
        printf("%d is negative\n", i);
    } else {
        printf("%d is not negative\n", i);
    }
}

void Check3_FindSumAndAverageOfIntArray()
{
#define count 10
    int array [count] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
    int sum = 0, avg = 0;
    double Avg = 0.0;
    FindSumAndAverageOfIntArray(array, count, &sum, &avg);
    printf("Sum: %d,\tAverage: %d\n", sum, avg);
    FindSumAndAverageOfIntArray_DAvg(array, &sum, &Avg);
// notice the value of sum.
    printf("Sum: %d,\tAverage: %.2f\n", sum, Avg);
#undef count
}
    
