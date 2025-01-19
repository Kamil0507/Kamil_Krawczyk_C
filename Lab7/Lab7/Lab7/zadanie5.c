#include <stdio.h>
#include <stdlib.h>
#include "zadanie5.h"

int main2() {
    struct mieszana statyczna[10];
    struct mieszana* dynamiczna = malloc(10 * sizeof(struct mieszana));
    struct mieszana* wskazniki[10];

    int suma_statyczna = 0, suma_dynamiczna = 0, suma_wskazniki = 0;

    for (int i = 0; i < 10; i++) {
        statyczna[i].liczba = i + 1;
        dynamiczna[i].liczba = i + 1;
        wskazniki[i] = &statyczna[i];
        suma_statyczna += statyczna[i].liczba;
        suma_dynamiczna += dynamiczna[i].liczba;
        suma_wskazniki += wskazniki[i]->liczba;
    }

    printf("Suma statyczna: %d\n", suma_statyczna);
    printf("Suma dynamiczna: %d\n", suma_dynamiczna);
    printf("Suma wskazniki: %d\n", suma_wskazniki);

    free(dynamiczna);
    return 0;
}
