#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int ex1(long a, long b, long c);
long ex2(long a, long b);
void ex3(long a, long b, int *lt, int *eq, int *gt);
int ex4(long a, long b);

int main(void) {
    // Quick sanity checks
    printf("ex1(1,2,3) = %d\n", ex1(1,2,3));
    printf("ex1(3,2,1) = %d\n", ex1(3,2,1));

    printf("ex2(3,4) = %ld\n", ex2(3,4));
    printf("ex2(10,2) = %ld\n", ex2(10,2));

    int lt, eq, gt;
    ex3(5,5, &lt, &eq, &gt);
    printf("ex3(5,5): lt=%d eq=%d gt=%d\n", lt, eq, gt);
    ex3(4,7, &lt, &eq, &gt);
    printf("ex3(4,7): lt=%d eq=%d gt=%d\n", lt, eq, gt);
    ex3(9,2, &lt, &eq, &gt);
    printf("ex3(9,2): lt=%d eq=%d gt=%d\n", lt, eq, gt);

    printf("ex4(0x12, 0) = %d\n", ex4(0x12, 0)); // > 0x11 path
    printf("ex4(0x11, 0) = %d\n", ex4(0x11, 0)); // <= 0x11 path
    printf("ex4(0x20, 0x41) = %d\n", ex4(0x20, 0x41)); // sil == 0 after sub
    printf("ex4(0x20, 0x45) = %d\n", ex4(0x20, 0x45)); // sil > 1 -> -1

    return 0;
}
