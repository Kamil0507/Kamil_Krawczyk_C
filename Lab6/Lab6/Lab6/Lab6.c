#include <stdio.h>
#include <stdlib.h>
#include "zadanie1.h"
#include "zadanie2.h"
#include "zadanie3.h"
#include "zadanie4.h"
#include "zadanie5.h"
#include "zadanie6.h"
#include "zadanie7.h"
#include "zadanie8.h"




int main() {

    //ZADANIE 1
    printf("\n\nZADANIE 1\n\n");

    int a = 10, b = 5, wynik_roznica;
    float wynik_srednia;

    roznica(&a, &b, &wynik_roznica);
    printf("Roznica: %d\n", wynik_roznica);

    int c = 15;
    srednia(&a, &b, &c, &wynik_srednia);
    printf("Srednia: %.2f\n", wynik_srednia);

    //ZADANIE 2
    printf("\n\nZADANIE 2\n\n");

    int tablica[10];
    int rozmiar = 10;

    printf("Adres pierwszego elementu tablicy: %p\n", &tablica[0]);
    printf("Adres czwartego elementu tablicy: %p\n", &tablica[3]);

    int min = 1, max = 100;
    losuj_do_tablicy(tablica, rozmiar, min, max);

    printf("Adresy elementów tablicy:\n");
    wypisz_adresy_tablicy(tablica, rozmiar);

    //ZADANIE 3
    printf("\n\nZADANIE 3\n\n");

    int tablica3[5] = { 10, 20, 30, 40, 50 };
    int rozmiar3 = 5;

    float srednia3 = oblicz_srednia(tablica3, rozmiar3);
    printf("Srednia: %.2f\n", srednia3);

    printf("Elementy wieksze od sredniej:\n");
    wypisz_wieksze_od_sredniej(tablica3, rozmiar3, srednia3);


    //ZADANIE 4
    printf("\n\nZADANIE 4\n\n");

    int liczba4 = 5;

    printf("Przed podniesieniem do kwadratu: %d\n", liczba4);
    kwadrat(&liczba4);
    printf("Po podniesieniu do kwadratu: %d\n", liczba4);


    //ZADANIE 5
    printf("\n\nZADANIE 5\n\n");

    int liczba5 = 2, wykladnik5 = 10, wynik5;

    potega(&liczba5, &wykladnik5, &wynik5);
    printf("%d do potegi %d wynosi %d\n", liczba5, wykladnik5, wynik5);


    //ZADANIE 6
    printf("\n\nZADANIE 6\n\n");

    char znak = '*';
    int ilosc = 5;

    wypisz_znak(&znak, &ilosc);
    printf("\nPozostala ilosc powtorzen: %d\n", ilosc);



    //ZADANIE 7
    printf("\n\nZADANIE 7\n\n");

    int a7 = 10, b7 = 20;

    int mniejsza_wartosc = mniejsza(&a7, &b7);
    printf("Mniejsza wartosc: %d\n", mniejsza_wartosc);

    int* wskaznik = wskaznik_na_mniejsza(&a7, &b7);
    printf("Adres mniejszej wartosci: %p\n", wskaznik);


    //ZADANIE 8
    printf("\n\nZADANIE 8\n\n");

    int a8 = 5, b8 = 10;

    printf("Przed zamiana: a = %d, b = %d\n", a8, b8);
    zamien(&a8, &b8);
    printf("Po zamianie: a = %d, b = %d\n", a8, b8);


    return 0;
}
