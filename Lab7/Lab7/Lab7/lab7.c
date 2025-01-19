#include <stdio.h>
#include "zadanie1.h"
#include "zadanie2.h"
#include "zadanie3.h"
#include "zadanie4.h"
#include "zadanie5.h"
#include "zadanie6.h"
#include "zadanie7.h"
#include "zadanie8.h"
#include "zadanie9.h"

int main() {
    //ZADANIE 1
    printf("ZADANIE 1 \n\n");

    struct trojkat t = { 3.0, 4.0, 5.0 };
    printf("Obwód trójk¹ta: %.2f\n", obwod(t));


    //ZADANIE 2
    printf("ZADANIE 2 \n\n");

    struct trojkat t1 = { 3.0, 4.0, 5.0 };
    struct trojkat t2;

    przepisz(t1, &t2);
    printf("Trójk¹t 2: a=%.2f, b=%.2f, c=%.2f\n", t2.a, t2.b, t2.c);

    //ZADANIE 3
    printf("ZADANIE 3 \n\n");

    struct punkt tab[] = {
        {0.0, 0.0, 0.0},
        {1.0, 1.0, 1.0},
        {2.0, 2.0, 2.0}
    };
    int rozmiar3 = 3;

    printf("Najmniejsza odleg³oœæ: %.2f\n", najmniejsza_odleglosc(tab, rozmiar3));

    //ZADANIE 4
    printf("ZADANIE 4 \n\n");

    struct punkt tab1[] = {
        {0.0, 0.0, 0.0},
        {1.0, 1.0, 1.0},
        {2.0, 2.0, 2.0}
    };
    struct punkt tab2[3];
    int rozmiar4 = 3;

    przepisz_tablice(tab1, tab2, rozmiar4);
    for (int i = 0; i < rozmiar4; i++) {
        printf("Tab2[%d]: x=%.2f, y=%.2f, z=%.2f\n", i, tab2[i].x, tab2[i].y, tab2[i].z);
    }

    //ZADANIE 5
    printf("ZADANIE 5 \n\n");

    struct mieszana statyczna[10];
    struct mieszana* dynamiczna = malloc(10 * sizeof(struct mieszana));

    if (dynamiczna == NULL) {
        fprintf(stderr, "Blad alokacji pamieci!\n");
        return 1; 
    }

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


    //ZADANIE 6
    printf("ZADANIE 6 \n\n");

    struct punkt10 tab16[3] = {
        {{1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0}},
        {{11.0, 12.0, 13.0, 14.0, 15.0, 16.0, 17.0, 18.0, 19.0, 20.0}},
        {{21.0, 22.0, 23.0, 24.0, 25.0, 26.0, 27.0, 28.0, 29.0, 30.0}}
    };
    struct punkt10 tab26[3];

    przepisz_tablice_punkt10(tab16, tab26, 3);

    for (int i = 0; i < 3; i++) {
        printf("Tab2[%d]: ", i);
        for (int j = 0; j < 10; j++) {
            printf("%.2f ", tab26[i].wymiary[j]);
        }
        printf("\n");
    }



    //ZADANIE 7
    printf("ZADANIE 7 \n\n");

    struct punktn tab17[2] = {
       {3, (double[]) { 1.0, 2.0, 3.0 }},
       {2, (double[]) { 4.0, 5.0 }}
    };
    struct punktn tab27[2];

    przepisz_tablice_punktn(tab17, tab27, 2);

    for (int i = 0; i < 2; i++) {
        printf("Tab2[%d]: ", i);
        for (int j = 0; j < tab27[i].n; j++) {
            printf("%.2f ", tab27[i].wymiary[j]);
        }
        printf("\n");
        free(tab27[i].wymiary);
    }


    //ZADANIE 8
    printf("ZADANIE 8 \n\n");

    struct zespolone z1 = { 3.0, 4.0 };
    struct zespolone z2 = { 1.0, 2.0 };
    struct zespolone wynik = dodaj(z1, z2);

    printf("Suma: %.2f + %.2fi\n", wynik.re, wynik.im);


    //ZADANIE 9
    printf("ZADANIE 9 \n\n");

    struct figura f1 = { 1, 3.0, 4.0, 0.0 }; // Trójk¹t
    struct figura f2 = { 2, 5.0, 6.0, 0.0 }; // Prostok¹t
    struct figura f3 = { 4, 3.0, 4.0, 2.0 }; // Trapez

    printf("Pole trójk¹ta: %.2f\n", pole(f1));
    printf("Pole prostok¹ta: %.2f\n", pole(f2));
    printf("Pole trapezu: %.2f\n", pole(f3));

    return 0;
}
