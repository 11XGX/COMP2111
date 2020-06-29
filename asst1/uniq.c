#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "uniq.h"

unsigned int uniq(unsigned int n, char *a[], char *b[]) {
    int i, k = 0;
    
    for (i = 0; i < n; i++) {
        if (k == 0 || (strcmp(a[i], b[k-1]) != 0)) {
            strcpy(b[k], a[i]);
            k++;
        }
    }
    return k;
}
