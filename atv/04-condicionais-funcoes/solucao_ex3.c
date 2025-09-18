// Ponteiros + expressões booleanas
#include <stdint.h>

void ex3(long a, long b, int *lt, int *eq, int *gt) {
    *lt = (a < b) ? 1 : 0;
    *eq = (a == b) ? 1 : 0;
    *gt = (a > b) ? 1 : 0;
}
