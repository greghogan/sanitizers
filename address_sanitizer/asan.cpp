#include <stdlib.h>

/*
 * source from https://github.com/google/sanitizers/wiki/AddressSanitizer
 */

int main() {
    char *x = (char *) malloc(10 * sizeof(char *));
    free(x);
    return x[5];
}
