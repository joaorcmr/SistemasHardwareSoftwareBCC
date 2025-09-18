#include <stdint.h>

// The assembly uses 32-bit returns (%eax) and 64-bit args registers' low parts.
int ex4(long a, long b) {
    // cmp $0x11, %di  -> compares low 16 bits of a to 17; effectively a & 0xFFFF
    if ((int16_t)a <= 0x11) {
        // mov $0x12, %eax; sub %edi, %eax -> 18 - (int)a
        return 0x12 - (int)a;
    }

    // sub $0x41, %esi  -> b' = b - 65 affecting 32-bit low part
    int32_t b32 = (int32_t)b - 0x41;

    // cmp $0x1, %sil; ja -> if (unsigned)sil > 1 goto ret(-1)
    // %sil is the low 8 bits of b32 (signedness in JA uses unsigned compare)
    uint8_t sil = (uint8_t)(b32 & 0xFF);
    if (sil > 1u) {
        return -1;
    }

    // lea -0x11(%rdi), %eax -> (int)(a - 17)
    return (int)(a - 0x11);
}
