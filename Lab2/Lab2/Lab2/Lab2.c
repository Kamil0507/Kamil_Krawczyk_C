#include <stdio.h>
#include <stdlib.h>

int main() {


    // ZADANIE 1
    printf("\n\nZADANIE 1\n\n");


    int liczba;
    int suma = 0;
    int max = 0;
    int licznik = 0;

    printf("Podaj liczbe: \n");

    while (1) {
        scanf_s("%d", &liczba);

        if (liczba < 0) {
            break; 
        }

        suma += liczba; 
        licznik++; 

        if (licznik == 1 || liczba > max) {
            max = liczba;
        }
    }

    if (licznik > 0) { 
        double srednia = (double)suma / licznik; 
        printf("Suma: %d\n", suma);
        printf("Srednia: %.2f\n", srednia);
        printf("Maksymalna wartosc: %d\n", max);
    }
    else {
        printf("Nie wprowadzono zadnych liczb.\n");
    }



    // ZADANIE 2
    printf("\n\nZADANIE 2\n\n");


    int liczby[10]; 
    int suma_plus = 0; 
    int suma_minus = 0; 
    int licznik_plus = 0; 
    int licznik_minus = 0; 

    printf("Wprowadz 10 liczb:\n");

    for (int i = 0; i < 10; i++) {
        printf("Liczba %d: ", i + 1);
        scanf_s("%d", &liczby[i]);

        if (liczby[i] > 0) {
            suma_plus += liczby[i]; 
            licznik_plus++; 
        }
        else if (liczby[i] < 0) {
            suma_minus += liczby[i]; 
            licznik_minus++; 
        }
    }

    printf("\nLiczba liczb dodatnich: %d, Suma liczb dodatnich: %d\n", licznik_plus, suma_plus);
    printf("Liczba liczb ujemnych: %d, Suma liczb ujemnych: %d\n", licznik_minus, suma_minus);


    // ZADANIE 3
    printf("\n\nZADANIE 3\n\n");


    int n; 
    int suma_parzystych = 0; 
    int liczba2;

    printf("Podaj liczbe: ");
    scanf_s("%d", &n);

    if (n <= 0) {
        printf("Liczba n musi byc wieksza od 0.\n");
        return 1; 
    }

    printf("Wprowadz %d liczb:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Liczba %d: ", i + 1);
        scanf_s("%d", &liczba2);

        if (liczba2 % 2 == 0) {
            suma_parzystych += liczba2; 
        }
    }

    printf("Suma wszystkich liczb parzystych w ciagu: %d\n", suma_parzystych);


    // ZADANIE 4
    printf("\n\nZADANIE 4\n\n");


    int n4; 
    int suma_parzystych4 = 0; 
    int liczba4;

    printf("Podaj liczbe n: ");
    scanf_s("%d", &n4);


    if (n4 <= 0) {
        printf("Liczba n musi byc wieksza od 0.\n");
        return 1; 
    }


    printf("Wylosowane liczby:\n");
    for (int i = 0; i < n4; i++) {
        liczba4 = (rand() % 56) - 10; 
        printf("Liczba %d: %d\n", i + 1, liczba4);

        if (liczba4 % 2 == 0) {
            suma_parzystych4 += liczba4; 
        }
    }

    printf("Suma wszystkich liczb parzystych w ciagu: %d\n", suma_parzystych4);



    // ZADANIE 5
    printf("\n\nZADANIE 5\n\n");


    int n5; 
    float punkty5; 
    float suma_punktow5 = 0; 
    int i = 0; 

    printf("Podaj liczbê studentow: ");
    scanf_s("%d", &n5);

    if (n <= 0) {
        printf("Liczba studentow musi byc wieksza od 0.\n");
        return 1; 
    }

    while (i < n5) {
        printf("Podaj punkty dla studenta %d: ", i + 1);
        scanf_s("%f", &punkty5);
        suma_punktow5 += punkty5; 
        i++; 
    }

    float srednia5 = suma_punktow5 / n;

    printf("Srednia liczba punktow w grupie: %.2f\n", srednia5);


    // ZADANIE 6
    printf("\n\nZADANIE 6\n\n");


    // 1, 2, 3, ..., 99, 100
    printf("Ciag 1: ");
    for (int i = 1; i <= 100; i++) {
        printf("%d", i);
        if (i < 100) {
            printf(", ");
        }
    }
    printf("\n");

    //100, 99, ..., 2, 1, 0
    printf("Ciag 2: ");
    for (int i = 100; i >= 0; i--) {
        printf("%d", i);
        if (i > 0) {
            printf(", ");
        }
    }
    printf("\n");

    //7, 14, 21,..., 70, 77
    printf("Ciag 3: ");
    for (int i = 7; i <= 77; i += 7) {
        printf("%d", i);
        if (i < 77) {
            printf(", ");
        }
    }
    printf("\n");

    //20, 18,..., 2, 0
    printf("Ciag 4: ");
    for (int i = 20; i >= 0; i -= 2) {
        printf("%d", i);
        if (i > 0) {
            printf(", ");
        }
    }
    printf("\n");


    // ZADANIE 7
    printf("\n\nZADANIE 7\n\n");


    int i7, j7;
    for (i7 = 10; i7 > 0; i7--) {
        for (j7 = 0; j7 < i7; j7++)
            printf("X");
        printf("\n");
    }

    printf("\n");

    int i72, j72, k72;
    for (i72 = 1; i72 <= 10; i72++) {
        for (j72 = 0; j72 < 10 - i72; j72++) {
            printf(" ");
        }
        for (k72 = 0; k72 < i72; k72++) {
            printf("X");
        }
        printf("\n");
    }

    printf("\n");

    int i73, j73, k73;
    for (i73 = 0; i73 < 10; i73++) {
        for (j73 = 0; j73 < i73; j73++) {
            printf(" ");
        }
        for (k73 = 10 - i73; k73 > 0; k73--) {
            printf("X");
        }
        printf("\n");
    }

    printf("\n");

    int i74, j74, k74;
    for (i74 = 0; i74 < 10; i74++) {
        for (j74 = 0; j74 < 10 - i74 - 1; j74++) {
            printf(" ");
        }
        for (k74 = 0; k74 < (2 * i74 + 1); k74++) {
            printf("X");
        }
        printf("\n");
    }



    return 0;
}
