#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

void lfsr_calculate(uint16_t *reg) {
    uint16_t a1 = 1&(*reg), a2 = 1&(*reg>>2), a3 = 1&(*reg>>3), a4 = 1&(*reg>>5);
    *reg = (*reg>>1 & ~(1<<15)) | ((a1 ^ a2 ^ a3 ^ a4) << 15);
}

