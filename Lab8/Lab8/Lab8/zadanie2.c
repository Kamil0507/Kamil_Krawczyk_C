#include <stdio.h>
#include "zadanie2.h"

#define _CRT_SECURE_NO_WARNINGS

void filtruj_cyfry(const char* plik_wejsciowy, const char* plik_wyjsciowy) {
    FILE* wejscie = fopen(plik_wejsciowy, "r");
    if (wejscie == NULL) {
        perror("Blad otwarcia pliku wejsciowego");
        return;
    }

    FILE* wyjscie = fopen(plik_wyjsciowy, "w");
    if (wyjscie == NULL) {
        perror("Blad otwarcia pliku wyjsciowego");
        fclose(wejscie);
        return;
    }

    int liczba;
    while (fscanf(wejscie, "%d", &liczba) == 1) {
        int ostatnia_cyfra = liczba % 10;
        if (ostatnia_cyfra == 0 || ostatnia_cyfra == 3 || ostatnia_cyfra == 8 || ostatnia_cyfra == 9) {
            fprintf(wyjscie, "%d\n", liczba);
        }
    }

    fclose(wejscie);
    fclose(wyjscie);
}
