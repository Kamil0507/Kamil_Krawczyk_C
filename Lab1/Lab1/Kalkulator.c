#include <math.h>
#include <stdio.h>

#define PI 3.14

int main() {
    printf("============ Kalkulator =============\n");
    printf("1. Dodawanie\n");
    printf("2. Odejmowanie\n");
    printf("3. Mnozenie\n");
    printf("4. Dzielenie\n");
    printf("5. Pierwiastek kwadratowy\n");
    printf("6. Potengowanie\n");
    printf("7. Wartosc bezwzgledna\n");
    printf("8. Funkcje trygonometryczne (sin, cos, tg, ctg)\n");
    printf("===========================================\n");

    float a, b, stopnie, rad, sin_val, cos_val, tg, ctg;
    int opcja;
    printf("Wybierz opcje: ");
    scanf_s("%d", &opcja);

    if (opcja <= 4 || opcja == 6) {
        printf("Podaj liczbe : ");
        scanf_s("%f", &a);
        printf("Podaj liczbe : ");
        scanf_s("%f", &b);

        switch (opcja) {
        case 1:
            printf("Wynik dodawania: %f\n", a + b);
            break;
        case 2:
            printf("Wynik odejmowania: %f\n", a - b);
            break;
        case 3:
            printf("Wynik mnozenia: %f\n", a * b);
            break;
        case 4:
            printf("Wynik dzielenia: %f\n", a / b);
            break;
        case 6:
            printf("Wynik potengowania: %f\n", pow(a, b));
            break;
        default:
            break;
        }
    }
    else if (opcja > 4 && opcja != 6) {
        switch (opcja) {
        case 5:
            printf("Podaj liczbe : ");
            scanf_s("%f", &b);
            printf("Wynik pierwiastka: %f\n", sqrt(b));
            break;
        case 7:
            printf("Podaj liczbe : ");
            scanf_s("%f", &b);
            printf("Wartosc bezwzgledna: %f\n", fabs(b));
            break;
        case 8:
            printf("Podaj kat w stopniach: ");
            scanf_s("%f", &stopnie);
            rad = stopnie * (PI / 180.0);
            sin_val = sin(rad);
            cos_val = cos(rad);

            if (cos_val != 0) {
                tg = tan(rad);
                ctg = 1.0 / tg;
            }
            else {
                tg = ctg = NAN;
            }

            printf("sin(%.2f) = %.4f\n", stopnie, sin_val);
            printf("cos(%.2f) = %.4f\n", stopnie, cos_val);

            if (!isnan(tg)) {
                printf("tg(%.2f) = %.4f\n", stopnie, tg);
                printf("ctg(%.2f) = %.4f\n", stopnie, ctg);
            }
            else {
                printf("Tangens i cotangens s¹ nieokreœlone dla k¹ta %.2f°\n", stopnie);
            }
            break;
        default:
            break;
        }
    }
    else {
        return 0;
    }

    return 0;
}
