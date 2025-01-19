#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>


void wypiszCyfre(int cyfra) {
    switch (cyfra) {
    case 0: printf("zero "); break;
    case 1: printf("jeden "); break;
    case 2: printf("dwa "); break;
    case 3: printf("trzy "); break;
    case 4: printf("cztery "); break;
    case 5: printf("piêæ "); break;
    case 6: printf("szeœæ "); break;
    case 7: printf("siedem "); break;
    case 8: printf("osiem "); break;
    case 9: printf("dziewiêæ "); break;
    }
}



int main() {


    //ZADANIE 1
    printf("ZADANIE 1\n\n");

    char tekst[100]; 
    char kopia[100];  
    char dodatek[] = " + dodatek"; 
    char przechowanie[200]; 

    printf("Wprowadz tekst: ");
    fgets(tekst, sizeof(tekst), stdin); 

    strcpy(kopia, tekst);
    printf("Skopiowany tekst: %s\n", kopia);

    strcpy(przechowanie, tekst); 
    strcat(przechowanie, dodatek); 
    printf("Polaczony tekst: %s\n", przechowanie);


    //ZADANIE 2
    printf("\n\nZADANIE 2\n\n");

    printf("Kody ASCII od 'a' do 'z':\n");
    for (char c = 'a'; c <= 'z'; c++) {
        printf("Znak: %c, Kod ASCII: %d\n", c, c);
    }
    printf("\nKody ASCII dla znaków od 'A' do 'Z':\n");
    for (char c = 'A'; c <= 'Z'; c++) {
        printf("Znak: %c, Kod ASCII: %d\n", c, c);
    }
    printf("\nKody ASCII dla znaków od '0' do '9':\n");
    for (char c = '0'; c <= '9'; c++) {
        printf("Znak: %c, Kod ASCII: %d\n", c, c);
    }


    //ZADANIE 3
    printf("\n\nZADANIE 3\n\n");

    char tekst3[1000];
    int samogloski = 0, spolgloski = 0;

    printf("WprowadŸ tekst: ");
    fgets(tekst3, sizeof(tekst), stdin);

    for (int i3 = 0; tekst3[i3] != '\0'; i3++) {
        char c3 = tolower(tekst[i3]); 

        if (c3 == 'a' || c3 == 'e' || c3 == 'i' || c3 == 'o' || c3 == 'u') {
            samogloski++;
        }
        
        else if ((c3 >= 'a' && c3 <= 'z')) {
            spolgloski++;
        }
    }
    printf("Liczba samoglosek: %d\n", samogloski);
    printf("Liczba spolglosek: %d\n", spolgloski);



    //ZADANIE 4
    printf("\n\nZADANIE 4\n\n");


    char input[100]; 
    printf("Podaj tekst: ");
    fgets(input, sizeof(input), stdin); 

    
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    printf("Odwrocony tekst z zamiana malych liter na duze: ");
    for (int i4 = strlen(input) - 1; i4 >= 0; i4--) {
 
        printf("%c", toupper(input[i4]));
    }
    printf("\n");


    //ZADANIE 5
    printf("\n\nZADANIE 5\n\n");


    int liczba;
    printf("Podaj dodatnia liczbe calkowita: ");
    scanf_s("%d", &liczba);

    if (liczba < 0) {
        printf("Podana liczba nie jest dodatnia.\n");
        return 1;
    }

    if (liczba == 0) {
        printf("zero\n");
        return 0;
    }
    int cyfry[10]; 
    int licznik = 0;

    while (liczba > 0) {
        cyfry[licznik++] = liczba % 10; 
        liczba /= 10;                  
    }

    for (int i = licznik - 1; i >= 0; i--) {
        wypiszCyfre(cyfry[i]);
    }
    printf("\n");


    //ZADANIE 6
    printf("\n\nZADANIE 6\n\n");


    char s1[] = "abcdefghijklmnopqrstuvwxyz";
    char s2[] = "zyxwvutsrqponmlkjihgfedcba";

    char input6[100]; 
    printf("Podaj ciag znakow: ");
    fgets(input6, sizeof(input6), stdin);

    size_t len6 = strlen(input6);
    if (len6 > 0 && input6[len6 - 1] == '\n') {
        input6[len6 - 1] = '\0';
    }

    printf("Przeksztalcony ciag: ");
    for (int i6 = 0; input6[i6] != '\0'; i6++) {
        char znak = input6[i6];
        char zamieniony = znak; 


        for (int j = 0; s1[j] != '\0'; j++) {
            if (znak == s1[j]) {
                zamieniony = s2[j]; 
                break;
            }
        }

        printf("%c", zamieniony);
    }
    printf("\n");


    return 0;
}
