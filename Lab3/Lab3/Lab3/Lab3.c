#include <stdio.h>
#include <stdlib.h>


int main() {

    //ZADANIE 1
    printf("ZADANIE 1 \n\n");

    int tab[10]; 
    int i;

    for (i = 0; i < 10; i++) {
        tab[i] = (i + 1) * 3;
    }

    printf("Tablica: \n");
    for (i = 0; i < 10; i++) {
        printf("%d ", tab[i]);
    }


    //ZADANIE 2
    printf("\n\nZADANIE 2 \n\n");

    printf("Co druga wartsc z tablicy: \n");
    for (i = 0; i < 10; i += 2) { 
        printf("%d ", tab[i]);
    }


    //ZADANIE 3
    printf("\n\nZADANIE 3 \n\n");


    int n3=3, a3;



    printf("Podaj wartosc a: ");
    scanf_s("%d", &a3);

    int tab3[3];
    int i3;

    int value3 = a3; 
    for (i3 = n3 - 1; i3 >= 0; i3--) {
        tab3[i3] = value3;
        value3 += (i3 % 2 == 0) ? -10 : -5; 
    }

    printf("Tablica:\n");
    for (i3 = 0; i3 < n3; i3++) {
        printf("%d ", tab3[i3]);
    }
    printf("\n");



    //ZADANIE 4
    printf("\n\nZADANIE 4 \n\n");


    int n4=5, i4, min4;

    int tab4[5]; 

    printf("Tablica:\n");
    for (i4 = 0; i4 < n4; i4++) {
        tab4[i4] = (rand() % (50 - (-23) + 1)) - 23; 
        printf("%d ", tab4[i4]); 
    }
    printf("\n");

    min4 = tab4[0]; 
    for (i4 = 1; i4 < n4; i4++) {
        if (tab4[i4] < min4) {
            min4 = tab4[i4];
        }
    }

    printf("Minimalna wartosc w tablicy: %d\n", min4);


    //ZADANIE 5
    printf("\n\nZADANIE 5 \n\n");


    int n5 = 5;
    int tab5[10]; 

    printf("Podaj dwie pierwsze wartosci tablicy:\n");
    scanf_s("%d %d", &tab5[0], &tab5[1]);


    for (int i5 = 2; i5 < n5; i5++) {
        tab5[i5] = tab5[i5 - 1] + tab5[i5 - 2]; 
    }

    printf("Tablica:\n");
    for (int i5 = 0; i5 < n5; i5++) {
        printf("%d ", tab5[i5]);
    }
    printf("\n");



    //ZADANIE 6
    printf("\n\nZADANIE 6 \n\n");


    int tab6[20];

    printf("Podaj 10 wartosci tablicy:\n");
    for (int i6 = 0; i6 < 10; i6++) {
        printf("tab6[%d]: ", i6);
        scanf_s("%d", &tab6[i6]);
    }

    for (int i6 = 0; i6 < 10; i6++) {
        tab6[10 + i6] = tab6[i6]; 
    }

    printf("Tablica:\n");
    for (int i6 = 0; i6 < 20; i6++) {
        printf("tab6[%d] = %d\n", i6, tab6[i6]);
    }


    //ZADANIE 7
    printf("\n\nZADANIE 7 \n\n");

    int tab7[3][3] = {
        {6, -23, 16},
        {332, 0, 3},
        {2, 3, 56}
    };

    int suma7 = 0;

    for (int i7 = 0; i7 < 3; i7++) {
        suma7 += tab7[i7][i7];
    }

    printf("Suma przekatnej: %d\n", suma7);


    //ZADANIE 8
    printf("\n\nZADANIE 8 \n\n");


    int tab81[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int tab82[2][3] = {
        {7, 8, 9},
        {10, 11, 12}
    };

    int wynik8[2][3];

    for (int i8 = 0; i8 < 2; i8++) {
        for (int j8 = 0; j8 < 3; j8++) {
            wynik8[i8][j8] = tab81[i8][j8] + tab82[i8][j8];
        }
    }

    printf("Suma macierzy:\n");
    for (int i8 = 0; i8 < 2; i8++) {
        for (int j8 = 0; j8 < 3; j8++) {
            printf("%d ", wynik8[i8][j8]);
        }
        printf("\n");
    }




    return 0;
}
