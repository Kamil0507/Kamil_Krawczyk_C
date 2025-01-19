#include "zadanie2.h"
#include <stdio.h>
#include <stdlib.h>

void losuj_do_tablicy(int* tablica, int rozmiar, int min, int max) {
    for (int i = 0; i < rozmiar; i++) {
        tablica[i] = min + rand() % (max - min + 1);
    }
}

void wypisz_adresy_tablicy(int* tablica, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        printf("Adres tablica[%d]: %p\n", i, &tablica[i]);
    }
}
