#include <stdint.h>

// ex3 compares a and b, and writes boolean results (0/1) to given pointers.
// The assembly uses 64-bit integer registers and stores 32-bit ints to memory.
void ex3(long a, long b, int *lt, int *eq, int *gt) {
    // cmp %rsi, %rdi  -> compare a (rdi) vs b (rsi)
    // setl -> a < b
    *lt = (a < b) ? 1 : 0;

    // sete -> a == b
    *eq = (a == b) ? 1 : 0;

    // setg -> a > b
    *gt = (a > b) ? 1 : 0;
}
