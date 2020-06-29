#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "uniq.h"

unsigned int uniq(unsigned int n, char *a[], char *b[]) {
    int i = 0, j = 0, k = 0;
    while (i < n) {
        j = 0;
        while (k != 0 && a[i][j] != '\0' && a[i][j] == b[k-1][j]) {
            j++;
        }
        if (k == 0 || (a[i][j] - b[k-1][j])) {
            j = 0;
            while (a[i][j] != '\0') {	
                b[k][j] = a[i][j];
                j++;
            }
            b[k][j] = '\0';
            k++;
        }
        i++;
    }
    return k;
}
