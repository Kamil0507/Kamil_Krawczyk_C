#include <stdio.h>
#include "zadanie3.h"

#define _CRT_SECURE_NO_WARNINGS

void zlicz_znaki(const char* plik_wejsciowy, const char* plik_wyjsciowy) {
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

    int znaki = 0;
    char znak;
    while ((znak = fgetc(wejscie)) != EOF) {
        fputc(znak, wyjscie);
        znaki++;
    }
    fprintf(wyjscie, "\nLiczba znakow: %d\n", znaki);

    fclose(wejscie);
    fclose(wyjscie);
}
