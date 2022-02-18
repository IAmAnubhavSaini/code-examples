#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef X64
struct M { char data[8]; }; // since x64 
int size = sizeof(struct M);
#else
struct M {
    char data[4];
}; // since 32 bit
int size = sizeof(struct M);
#endif

int main(int argCount, char *args[]) {
    struct M *m = NULL;
    int i = 1;
    int factor = 1000;
    if (argCount == 2) {
        factor = atoi(args[1]);
    }
    while ((m = (struct M *) realloc(m, size * i)) != NULL) {
        printf("\rSize of m : %d - %x Bytes or %d MB", size * i, size * i, size * i / 1000000);
        i += factor;
    }
    printf("\n");
    m = (struct M *) realloc(m, 0); // free
    return 0;
}
