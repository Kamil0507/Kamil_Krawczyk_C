#include "zadanie3.h"
#include <stdio.h>

float oblicz_srednia(int* tablica, int rozmiar) {
    int suma = 0;
    for (int i = 0; i < rozmiar; i++) {
        suma += tablica[i];
    }
    return (float)suma / rozmiar;
}

void wypisz_wieksze_od_sredniej(int* tablica, int rozmiar, float srednia) {
    for (int i = 0; i < rozmiar; i++) {
        if (tablica[i] > srednia) {
            printf("%d\n", tablica[i]);
        }
    }
}
