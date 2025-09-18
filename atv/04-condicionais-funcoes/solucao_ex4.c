// Condicionais com registradores parciais (di/sil), retornos constantes
#include <stdint.h>

int ex4(long a, long b) {
    if ((int16_t)a <= 0x11) {
        return 0x12 - (int)a;  // 18 - a
    }

    int32_t b32 = (int32_t)b - 0x41; // sub $0x41, %esi
    uint8_t sil = (uint8_t)(b32 & 0xFF);
    if (sil > 1u) {
        return -1; // mov $0xffffffff,%eax
    }

    return (int)(a - 0x11); // lea -0x11(%rdi),%eax
}
