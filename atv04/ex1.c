#include <stdint.h>

// Signature inferred from assembly: returns int (via %eax), args in 64-bit regs.
int ex1(long a, long b, long c) {
    // rcx = a + b + 4*c
    long rcx = a + b + 4 * c;

    // a = a * a (imul %rdi, %rdi)
    a = a * a;

    // rax = a + 2*b
    long rax = a + 2 * b;

    // rdx = c + rax
    long rdx = c + rax;

    // return (rcx >= rdx) as 0/1 (setge + movzbl)
    return (rcx >= rdx);
}
