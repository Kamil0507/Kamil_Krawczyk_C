#include "zadanie5.h"

void potega(int* liczba, int* wykladnik, int* wynik) {
    *wynik = 1;
    for (int i = 0; i < *wykladnik; i++) {
        *wynik *= *liczba;
    }
}
