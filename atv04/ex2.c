#include <stdint.h>

// From the statement, ex2 calls an external function `vezes2`.
// We'll declare it here to allow linking in local tests; in the official
// repo it should be provided or tested via stubs.
long vezes2(long x);

long ex2(long a, long b) {
    // Save a into rbx (callee-saved) in the assembly; here just keep a.

    // Move b into first arg and call vezes2(b)
    long rax = vezes2(b);

    // if (rax <= a) goto L1; else a += a; then L1: return a + rax;
    if (!(rax > a)) {
        // jle to L1 means when rax <= a we skip doubling a
    } else {
        a = a + a;
    }

    return a + rax;
}
