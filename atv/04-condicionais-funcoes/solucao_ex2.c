// Observação: analise ex2_ref (não ex2.o) no gdb.
// A solução abaixo declara `vezes2` externamente para ligação nos testes.
#include <stdint.h>

long vezes2(long x);

long ex2(long a, long b) {
    long rax = vezes2(b);
    if (rax > a) {
        a = a + a;
    }
    return a + rax;
}
