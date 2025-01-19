#include "zadanie1.h"
#include <stdio.h>

void roznica(int* a, int* b, int* wynik) {
    *wynik = *a - *b;
}

void srednia(int* a, int* b, int* c, float* wynik) {
    *wynik = (*a + *b + *c) / 3.0;
}
