// Observação: confira no README da atividade (repo do Classroom) o nome exato
// da função exigida. Aqui usamos `ex1` conforme a análise do assembly.
#include <stdint.h>

int ex1(long a, long b, long c) {
    long rcx = a + b + 4 * c;  // lea (%rdi,%rsi,1); lea (%rax,%rdx,4)
    a = a * a;                 // imul %rdi,%rdi
    long rax = a + 2 * b;      // lea (%rdi,%rsi,2)
    long rdx = c + rax;        // add %rax,%rdx
    return (rcx >= rdx);       // cmp; setge; movzbl
}
