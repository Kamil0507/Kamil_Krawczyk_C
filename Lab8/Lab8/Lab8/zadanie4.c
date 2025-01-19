#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "zadanie4.h"

#define _CRT_SECURE_NO_WARNINGS

void analiza_pesel(const char* plik_wejsciowy, const char* plik_wyjsciowy) {
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

    int kobiety = 0, mezczyzni = 0, listopad = 0;
    char pesel[12];
    while (fscanf(wejscie, "%s", pesel) == 1) {
        // Zadanie 4.1
        int przedostatnia_cyfra = pesel[9] - '0';
        if (przedostatnia_cyfra % 2 == 0) {
            kobiety++;
        }
        else {
            mezczyzni++;
        }

        // Zadanie 4.2
        int miesiac = atoi(&pesel[2]);
        if (miesiac == 11 || miesiac == 31) {
            listopad++;
        }

        // Zadanie 4.3
        int suma = 0;
        int wagi[] = { 1, 3, 7, 9, 1, 3, 7, 9, 1, 3, 1 };
        for (int i = 0; i < 11; i++) {
            suma += (pesel[i] - '0') * wagi[i];
        }
        if (suma % 10 != 0) {
            fprintf(wyjscie, "Niepoprawny PESEL: %s\n", pesel);
        }
    }

    fprintf(wyjscie, "Zadanie 4.1: Kobiety: %d, Mezczyzni: %d\n", kobiety, mezczyzni);
    fprintf(wyjscie, "Zadanie 4.2: Urodzeni w listopadzie: %d\n", listopad);

    fclose(wejscie);
    fclose(wyjscie);
}
