/* copyright 2013 Anubhav Saini
 *
 * examples of function pointers
 *
 * please fork, improve and if possible send a pull request.
 */
#include<stdio.h>
#include<stdlib.h>

int Sum(int, int);

int Diff(int, int);

int Prod(int, int);

int Quot(int, int);

int Rem(int, int);

void ActionDelegate(int (*action)(int, int), int, int);

void main() {
    int i = 10, j = 20;
    ActionDelegate((int (*)(int, int)) (Sum), i, j);
    ActionDelegate((int (*)(int, int)) (Diff), i, j);
    ActionDelegate((int (*)(int, int)) (Prod), i, j);
    ActionDelegate((int (*)(int, int)) (Quot), i, j);
    ActionDelegate((int (*)(int, int)) (Rem), i, j);
}

void ActionDelegate(int (*action)(int, int), int a, int b) {
    printf("\n%d action %d = %d.", a, b, (*action)(a, b));
}

int Sum(int a, int b) {
    return a + b;
}

int Diff(int a, int b) {
    return a - b;
}

int Prod(int a, int b) {
    return a * b;
}

int Quot(int a, int b) {
    if (b == 0) abort();
    return a / b;
}

int Rem(int a, int b) {
    if (b == 0) abort();
    return a % b;
}