#include "zadanie7.h"

int mniejsza(int* a, int* b) {
    return (*a < *b) ? *a : *b;
}

int* wskaznik_na_mniejsza(int* a, int* b) {
    return (*a < *b) ? a : b;
}
