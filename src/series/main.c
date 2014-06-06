#include "common.h"

void Check2_IsIntNegative();
void Check1_IsIntOdd();

int main(){
    Check1_IsIntOdd();
    // Check2_IsIntNegative();
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

