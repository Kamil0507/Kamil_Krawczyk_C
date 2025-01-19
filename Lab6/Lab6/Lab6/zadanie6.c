#include "zadanie6.h"
#include <stdio.h>

void wypisz_znak(char* znak, int* ilosc) {
    for (int i = 0; i < *ilosc; i++) {
        printf("%c", *znak);
    }
    (*ilosc)--;
}
