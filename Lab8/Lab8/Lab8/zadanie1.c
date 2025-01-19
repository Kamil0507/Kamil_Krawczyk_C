#include <stdio.h>
#include <stdlib.h>
#include "zadanie1.h"

#define _CRT_SECURE_NO_WARNINGS

void oblicz_pola_i_sortuj(const char* plik_wejsciowy, const char* plik_wyjsciowy) {
    FILE* wejscie = fopen(plik_wejsciowy, "r");
    if (wejscie == NULL) {
        perror("Blad otwarcia pliku wejsciowego");
        return;
    }

    double r1, r2;
    if (fscanf(wejscie, "%lf %lf", &r1, &r2) != 2) {
        perror("Blad odczytu promieni");
        fclose(wejscie);
        return;
    }
    fclose(wejscie);

    double pole1 = 3.141592653589793 * r1 * r1;
    double pole2 = 3.141592653589793 * r2 * r2;

    FILE* wyjscie = fopen(plik_wyjsciowy, "w");
    if (wyjscie == NULL) {
        perror("Blad otwarcia pliku wyjsciowego");
        return;
    }

    if (pole1 < pole2) {
        fprintf(wyjscie, "%.2f\n%.2f\n", pole1, pole2);
    }
    else {
        fprintf(wyjscie, "%.2f\n%.2f\n", pole2, pole1);
    }

    fclose(wyjscie);
}
